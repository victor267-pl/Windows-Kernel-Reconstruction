#include <stdint.h>
#include <stddef.h>

#define COM1 0x3f8u
#define MULTIBOOT2_BOOTLOADER_MAGIC 0x36d76289u
#define IDT_ENTRIES 256u

typedef struct __attribute__((packed)) {
    uint16_t offset_low;
    uint16_t selector;
    uint8_t ist;
    uint8_t attributes;
    uint16_t offset_middle;
    uint32_t offset_high;
    uint32_t reserved;
} idt_gate_t;

typedef struct __attribute__((packed)) {
    uint16_t limit;
    uint64_t base;
} idtr_t;

static idt_gate_t idt[IDT_ENTRIES] __attribute__((aligned(16)));
extern void *isr_stub_table[32];

static inline void outb(uint16_t port, uint8_t value) {
    __asm__ volatile ("outb %0, %1" : : "a"(value), "Nd"(port));
}

static inline uint8_t inb(uint16_t port) {
    uint8_t value;
    __asm__ volatile ("inb %1, %0" : "=a"(value) : "Nd"(port));
    return value;
}

static void serial_init(void) {
    outb(COM1 + 1, 0x00);
    outb(COM1 + 3, 0x80);
    outb(COM1 + 0, 0x01);
    outb(COM1 + 1, 0x00);
    outb(COM1 + 3, 0x03);
    outb(COM1 + 2, 0xc7);
    outb(COM1 + 4, 0x0b);
}

static void serial_putc(char c) {
    while ((inb(COM1 + 5) & 0x20u) == 0) {
        __asm__ volatile ("pause");
    }
    outb(COM1, (uint8_t)c);
}

static void serial_write(const char *s) {
    while (*s) {
        if (*s == '\n') serial_putc('\r');
        serial_putc(*s++);
    }
}

static void serial_hex8(uint8_t value) {
    static const char digits[] = "0123456789ABCDEF";
    serial_putc(digits[(value >> 4) & 0x0f]);
    serial_putc(digits[value & 0x0f]);
}

static void idt_set_gate(uint8_t vector, uintptr_t handler) {
    idt_gate_t *gate = &idt[vector];
    gate->offset_low = (uint16_t)(handler & 0xffffu);
    gate->selector = 0x08;
    gate->ist = 0;
    gate->attributes = 0x8e; /* present, ring 0, 64-bit interrupt gate */
    gate->offset_middle = (uint16_t)((handler >> 16) & 0xffffu);
    gate->offset_high = (uint32_t)(handler >> 32);
    gate->reserved = 0;
}

static void idt_init(void) {
    for (uint32_t i = 0; i < IDT_ENTRIES; ++i) {
        idt[i] = (idt_gate_t){0};
    }
    for (uint32_t i = 0; i < 32; ++i) {
        idt_set_gate((uint8_t)i, (uintptr_t)isr_stub_table[i]);
    }

    const idtr_t idtr = {
        .limit = (uint16_t)(sizeof(idt) - 1u),
        .base = (uint64_t)(uintptr_t)idt
    };
    __asm__ volatile ("lidt %0" : : "m"(idtr) : "memory");
}

static void pic_mask_all(void) {
    outb(0x21, 0xff);
    outb(0xa1, 0xff);
}

__attribute__((noreturn))
void exception_dispatch(uint64_t vector, uint64_t error_code) {
    serial_write("EXCEPTION: vector=0x");
    serial_hex8((uint8_t)vector);
    serial_write(" error=0x");
    for (int shift = 60; shift >= 0; shift -= 4) {
        static const char digits[] = "0123456789ABCDEF";
        serial_putc(digits[(error_code >> shift) & 0x0f]);
    }
    serial_write("\nHALTED: CPU exception captured by IDT\n");
    for (;;) __asm__ volatile ("cli; hlt");
}

__attribute__((noreturn))
void kernel_main(uint32_t multiboot_info, uint32_t boot_magic) {
    serial_init();
    serial_write("\nNT reconstruction research bootstrap\n");

    if (boot_magic != MULTIBOOT2_BOOTLOADER_MAGIC) {
        serial_write("BOOT_ERROR: invalid Multiboot2 magic\n");
        for (;;) __asm__ volatile ("cli; hlt");
    }

    if (multiboot_info == 0) {
        serial_write("BOOT_ERROR: missing Multiboot2 information pointer\n");
        for (;;) __asm__ volatile ("cli; hlt");
    }

    idt_init();
    pic_mask_all();
    serial_write("BOOT_OK: entered 64-bit freestanding kernel\n");
    serial_write("IDT_OK: 32 CPU exception gates installed\n");
    serial_write("TEST: triggering breakpoint exception\n");
    __asm__ volatile ("int $3");

    serial_write("BOOT_ERROR: breakpoint handler returned unexpectedly\n");
    for (;;) __asm__ volatile ("cli; hlt");
}
