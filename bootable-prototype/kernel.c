#include <stdint.h>

#define COM1 0x3f8u
#define MULTIBOOT2_BOOTLOADER_MAGIC 0x36d76289u

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

    serial_write("BOOT_OK: entered 64-bit freestanding kernel\n");
    serial_write("NOTICE: this is a boot harness, not Windows NT\n");

    for (;;) __asm__ volatile ("cli; hlt");
}
