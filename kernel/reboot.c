#include "types.h"
#include "param.h"
#include "memlayout.h"
#include "riscv.h"
#include "defs.h"
#define FINISHER_ADDR 0x100000
#define FINISHER_RESET 0x7777

void
do_reboot(void)
{
    printf("PRONINX: reboot...\n");
    
    asm volatile("li t0, 0x100000\n"
                 "li t1, 0x7777\n"
                 "sw t1, 0(t0)");

    for(;;);
}
