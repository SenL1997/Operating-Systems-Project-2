Pro2_1:VATranslate
Pro2_2:vm_inspector
Pro2_layer:pagelayer


Add files:

/mm/expose.c
/include/linux/expose.h

Change files to set up system call:
/arch/arm/include/asm/unistd.h
/arch/arm/kernel/calls.S
/include/linux/syscalls.h
/mm/Makefile

Change files to relize my LRU:
/include/linux/mm_types.h
/mm/swap.c
/mm/rmap.c
/mm/vmscan.c
