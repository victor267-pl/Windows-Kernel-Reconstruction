ENTRY(_start)
SECTIONS
{
    . = 1M;
    .multiboot ALIGN(8) : { KEEP(*(.multiboot)) }
    .boot.text ALIGN(16) : { *(.boot.text) }
    .boot.data ALIGN(16) : { *(.boot.data) }
    .text ALIGN(4K) : { *(.text .text.*) }
    .rodata ALIGN(4K) : { *(.rodata .rodata.*) }
    .data ALIGN(4K) : { *(.data .data.*) }
    .bss ALIGN(4K) : {
        *(COMMON)
        *(.boot.bss)
        *(.bss .bss.*)
    }
    /DISCARD/ : { *(.eh_frame*) *(.comment) *(.note*) }
}
