/* Multiboot2 entry: GRUB enters in 32-bit protected mode. */
.section .multiboot,"a"
.align 8
.long 0xe85250d6
.long 0
.long 24
.long -(0xe85250d6 + 24)
.short 0
.short 0
.long 8

.section .boot.text,"ax"
.code32
.global _start
.type _start,@function
_start:
    cli
    mov $boot_stack_top, %esp
    mov %ebx, boot_info_ptr
    mov %eax, boot_magic

    /* Identity-map the first 1 GiB with 2 MiB pages. */
    mov $pml4, %edi
    mov $pdpt, %eax
    or $0x03, %eax
    mov %eax, (%edi)

    mov $pdpt, %edi
    mov $page_directory, %eax
    or $0x03, %eax
    mov %eax, (%edi)

    mov $page_directory, %edi
    mov $0x83, %eax
    xor %edx, %edx
    mov $512, %ecx
1:
    mov %eax, (%edi)
    mov %edx, 4(%edi)
    add $0x200000, %eax
    adc $0, %edx
    add $8, %edi
    loop 1b

    /* Enable PAE, load PML4, then enable EFER.LME and paging. */
    mov %cr4, %eax
    or $(1 << 5), %eax
    mov %eax, %cr4

    mov $pml4, %eax
    mov %eax, %cr3

    mov $0xc0000080, %ecx
    rdmsr
    or $(1 << 8), %eax
    wrmsr

    lgdt gdt64_pointer
    mov %cr0, %eax
    or $(1 << 31), %eax
    mov %eax, %cr0
    ljmp $0x08, $long_mode_entry

.code64
long_mode_entry:
    mov $0x10, %ax
    mov %ax, %ds
    mov %ax, %es
    mov %ax, %ss
    xor %ax, %ax
    mov %ax, %fs
    mov %ax, %gs
    movabs $boot_stack_top, %rsp
    and $-16, %rsp

    mov boot_info_ptr(%rip), %edi
    mov boot_magic(%rip), %esi
    call kernel_main

2:
    cli
    hlt
    jmp 2b
.size _start, .-_start

.align 8
gdt64:
    .quad 0
    .quad 0x00af9a000000ffff
    .quad 0x00cf92000000ffff
gdt64_end:
gdt64_pointer:
    .word gdt64_end - gdt64 - 1
    .long gdt64

.section .boot.bss,"aw",@nobits
.align 16
boot_info_ptr:
    .long 0
boot_magic:
    .long 0
.align 4096
pml4:
    .skip 4096
.align 4096
pdpt:
    .skip 4096
.align 4096
page_directory:
    .skip 4096
.align 16
boot_stack:
    .skip 16384
boot_stack_top:

.section .note.GNU-stack,"",@progbits
