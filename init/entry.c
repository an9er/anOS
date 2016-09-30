/*
 * =====================================================================================
 *
 *       Filename:  entry.c
 *
 *    Description:  hurlex 内核的入口函数
 *
 *        Version:  1.0
 *        Created:  2013年10月31日 13时31分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */

// #include "types.h"
#include "console.h"
#include "printk.h"

int kern_entry()
{
    console_clear();
    console_write_color("Hello, anOS kernel!", rc_black, rc_green);
    int a = 123;
    printk("kkk%d%dsss\n", a, 456);
    return 0;
// 	uint8_t *input = (uint8_t *)0xB8000;
// 	uint8_t color = (0 << 4) | (15 & 0x0F);

// 	*input++ = 'H'; *input++ = color;
// 	*input++ = 'e'; *input++ = color;
}

