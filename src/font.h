#ifndef FONT_H
#define FONT_H 1

#include <stdint.h>

unsigned char font_vga8x16[] = {
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X7E, 0X81, 0XA5, 0X81, 0X81, 0XBD,
    0X99, 0X81, 0X81, 0X7E, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X7E, 0XFF,
    0XDB, 0XFF, 0XFF, 0XC3, 0XE7, 0XFF, 0XFF, 0X7E, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X6C, 0XFE, 0XFE, 0XFE, 0XFE, 0X7C, 0X38, 0X10,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X10, 0X38, 0X7C, 0XFE,
    0X7C, 0X38, 0X10, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X18,
    0X3C, 0X3C, 0XE7, 0XE7, 0XE7, 0X18, 0X18, 0X3C, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X18, 0X3C, 0X7E, 0XFF, 0XFF, 0X7E, 0X18, 0X18, 0X3C,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X18, 0X3C,
    0X3C, 0X18, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XFF, 0XFF, 0XFF, 0XFF,
    0XFF, 0XFF, 0XE7, 0XC3, 0XC3, 0XE7, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X3C, 0X66, 0X42, 0X42, 0X66, 0X3C, 0X00,
    0X00, 0X00, 0X00, 0X00, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XC3, 0X99, 0XBD,
    0XBD, 0X99, 0XC3, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0X00, 0X00, 0X1E, 0X0E,
    0X1A, 0X32, 0X78, 0XCC, 0XCC, 0XCC, 0XCC, 0X78, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X3C, 0X66, 0X66, 0X66, 0X66, 0X3C, 0X18, 0X7E, 0X18, 0X18,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X3F, 0X33, 0X3F, 0X30, 0X30, 0X30,
    0X30, 0X70, 0XF0, 0XE0, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X7F, 0X63,
    0X7F, 0X63, 0X63, 0X63, 0X63, 0X67, 0XE7, 0XE6, 0XC0, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X18, 0X18, 0XDB, 0X3C, 0XE7, 0X3C, 0XDB, 0X18, 0X18,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X80, 0XC0, 0XE0, 0XF0, 0XF8, 0XFE, 0XF8,
    0XF0, 0XE0, 0XC0, 0X80, 0X00, 0X00, 0X00, 0X00, 0X00, 0X02, 0X06, 0X0E,
    0X1E, 0X3E, 0XFE, 0X3E, 0X1E, 0X0E, 0X06, 0X02, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X18, 0X3C, 0X7E, 0X18, 0X18, 0X18, 0X7E, 0X3C, 0X18, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X66, 0X66, 0X66, 0X66, 0X66, 0X66,
    0X66, 0X00, 0X66, 0X66, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X7F, 0XDB,
    0XDB, 0XDB, 0X7B, 0X1B, 0X1B, 0X1B, 0X1B, 0X1B, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X7C, 0XC6, 0X60, 0X38, 0X6C, 0XC6, 0XC6, 0X6C, 0X38, 0X0C, 0XC6,
    0X7C, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0XFE, 0XFE, 0XFE, 0XFE, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X18, 0X3C,
    0X7E, 0X18, 0X18, 0X18, 0X7E, 0X3C, 0X18, 0X7E, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X18, 0X3C, 0X7E, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18,
    0X18, 0X7E, 0X3C, 0X18, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X18, 0X0C, 0XFE, 0X0C, 0X18, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X30, 0X60, 0XFE, 0X60, 0X30, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XC0, 0XC0,
    0XC0, 0XFE, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X28, 0X6C, 0XFE, 0X6C, 0X28, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X10, 0X38, 0X38, 0X7C, 0X7C, 0XFE, 0XFE, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XFE, 0XFE, 0X7C, 0X7C,
    0X38, 0X38, 0X10, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X18, 0X3C, 0X3C, 0X3C, 0X18, 0X18, 0X18, 0X00, 0X18, 0X18,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X66, 0X66, 0X66, 0X24, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X6C,
    0X6C, 0XFE, 0X6C, 0X6C, 0X6C, 0XFE, 0X6C, 0X6C, 0X00, 0X00, 0X00, 0X00,
    0X18, 0X18, 0X7C, 0XC6, 0XC2, 0XC0, 0X7C, 0X06, 0X06, 0X86, 0XC6, 0X7C,
    0X18, 0X18, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XC2, 0XC6, 0X0C, 0X18,
    0X30, 0X60, 0XC6, 0X86, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X38, 0X6C,
    0X6C, 0X38, 0X76, 0XDC, 0XCC, 0XCC, 0XCC, 0X76, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X30, 0X30, 0X30, 0X60, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X0C, 0X18, 0X30, 0X30, 0X30, 0X30,
    0X30, 0X30, 0X18, 0X0C, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X30, 0X18,
    0X0C, 0X0C, 0X0C, 0X0C, 0X0C, 0X0C, 0X18, 0X30, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X66, 0X3C, 0XFF, 0X3C, 0X66, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X18, 0X18, 0X7E,
    0X18, 0X18, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X18, 0X18, 0X18, 0X30, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XFE, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X18, 0X18, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X02, 0X06, 0X0C, 0X18, 0X30, 0X60, 0XC0, 0X80, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X38, 0X6C, 0XC6, 0XC6, 0XD6, 0XD6, 0XC6, 0XC6, 0X6C, 0X38,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X18, 0X38, 0X78, 0X18, 0X18, 0X18,
    0X18, 0X18, 0X18, 0X7E, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X7C, 0XC6,
    0X06, 0X0C, 0X18, 0X30, 0X60, 0XC0, 0XC6, 0XFE, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X7C, 0XC6, 0X06, 0X06, 0X3C, 0X06, 0X06, 0X06, 0XC6, 0X7C,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X0C, 0X1C, 0X3C, 0X6C, 0XCC, 0XFE,
    0X0C, 0X0C, 0X0C, 0X1E, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XFE, 0XC0,
    0XC0, 0XC0, 0XFC, 0X06, 0X06, 0X06, 0XC6, 0X7C, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X38, 0X60, 0XC0, 0XC0, 0XFC, 0XC6, 0XC6, 0XC6, 0XC6, 0X7C,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XFE, 0XC6, 0X06, 0X06, 0X0C, 0X18,
    0X30, 0X30, 0X30, 0X30, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X7C, 0XC6,
    0XC6, 0XC6, 0X7C, 0XC6, 0XC6, 0XC6, 0XC6, 0X7C, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X7C, 0XC6, 0XC6, 0XC6, 0X7E, 0X06, 0X06, 0X06, 0X0C, 0X78,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X18, 0X18, 0X00, 0X00,
    0X00, 0X18, 0X18, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X18, 0X18, 0X00, 0X00, 0X00, 0X18, 0X18, 0X30, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X06, 0X0C, 0X18, 0X30, 0X60, 0X30, 0X18, 0X0C, 0X06,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X7E, 0X00, 0X00,
    0X7E, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X60,
    0X30, 0X18, 0X0C, 0X06, 0X0C, 0X18, 0X30, 0X60, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X7C, 0XC6, 0XC6, 0X0C, 0X18, 0X18, 0X18, 0X00, 0X18, 0X18,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X7C, 0XC6, 0XC6, 0XDE, 0XDE,
    0XDE, 0XDC, 0XC0, 0X7C, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X10, 0X38,
    0X6C, 0XC6, 0XC6, 0XFE, 0XC6, 0XC6, 0XC6, 0XC6, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0XFC, 0X66, 0X66, 0X66, 0X7C, 0X66, 0X66, 0X66, 0X66, 0XFC,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X3C, 0X66, 0XC2, 0XC0, 0XC0, 0XC0,
    0XC0, 0XC2, 0X66, 0X3C, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XF8, 0X6C,
    0X66, 0X66, 0X66, 0X66, 0X66, 0X66, 0X6C, 0XF8, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0XFE, 0X66, 0X62, 0X68, 0X78, 0X68, 0X60, 0X62, 0X66, 0XFE,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XFE, 0X66, 0X62, 0X68, 0X78, 0X68,
    0X60, 0X60, 0X60, 0XF0, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X3C, 0X66,
    0XC2, 0XC0, 0XC0, 0XDE, 0XC6, 0XC6, 0X66, 0X3A, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0XC6, 0XC6, 0XC6, 0XC6, 0XFE, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X3C, 0X18, 0X18, 0X18, 0X18, 0X18,
    0X18, 0X18, 0X18, 0X3C, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X1E, 0X0C,
    0X0C, 0X0C, 0X0C, 0X0C, 0XCC, 0XCC, 0XCC, 0X78, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0XE6, 0X66, 0X66, 0X6C, 0X78, 0X78, 0X6C, 0X66, 0X66, 0XE6,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XF0, 0X60, 0X60, 0X60, 0X60, 0X60,
    0X60, 0X62, 0X66, 0XFE, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XC6, 0XEE,
    0XFE, 0XFE, 0XD6, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0XC6, 0XE6, 0XF6, 0XFE, 0XDE, 0XCE, 0XC6, 0XC6, 0XC6, 0XC6,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X7C, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6,
    0XC6, 0XC6, 0XC6, 0X7C, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XFC, 0X66,
    0X66, 0X66, 0X7C, 0X60, 0X60, 0X60, 0X60, 0XF0, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X7C, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6, 0XD6, 0XDE, 0X7C,
    0X0C, 0X0E, 0X00, 0X00, 0X00, 0X00, 0XFC, 0X66, 0X66, 0X66, 0X7C, 0X6C,
    0X66, 0X66, 0X66, 0XE6, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X7C, 0XC6,
    0XC6, 0X60, 0X38, 0X0C, 0X06, 0XC6, 0XC6, 0X7C, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X7E, 0X7E, 0X5A, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X3C,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6,
    0XC6, 0XC6, 0XC6, 0X7C, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XC6, 0XC6,
    0XC6, 0XC6, 0XC6, 0XC6, 0XC6, 0X6C, 0X38, 0X10, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0XC6, 0XC6, 0XC6, 0XC6, 0XD6, 0XD6, 0XD6, 0XFE, 0XEE, 0X6C,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XC6, 0XC6, 0X6C, 0X7C, 0X38, 0X38,
    0X7C, 0X6C, 0XC6, 0XC6, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X66, 0X66,
    0X66, 0X66, 0X3C, 0X18, 0X18, 0X18, 0X18, 0X3C, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0XFE, 0XC6, 0X86, 0X0C, 0X18, 0X30, 0X60, 0XC2, 0XC6, 0XFE,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X3C, 0X30, 0X30, 0X30, 0X30, 0X30,
    0X30, 0X30, 0X30, 0X3C, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X80,
    0XC0, 0XE0, 0X70, 0X38, 0X1C, 0X0E, 0X06, 0X02, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X3C, 0X0C, 0X0C, 0X0C, 0X0C, 0X0C, 0X0C, 0X0C, 0X0C, 0X3C,
    0X00, 0X00, 0X00, 0X00, 0X10, 0X38, 0X6C, 0XC6, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XFF, 0X00, 0X00,
    0X30, 0X30, 0X18, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X78, 0X0C, 0X7C,
    0XCC, 0XCC, 0XCC, 0X76, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XE0, 0X60,
    0X60, 0X78, 0X6C, 0X66, 0X66, 0X66, 0X66, 0X7C, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X7C, 0XC6, 0XC0, 0XC0, 0XC0, 0XC6, 0X7C,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X1C, 0X0C, 0X0C, 0X3C, 0X6C, 0XCC,
    0XCC, 0XCC, 0XCC, 0X76, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X7C, 0XC6, 0XFE, 0XC0, 0XC0, 0XC6, 0X7C, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X38, 0X6C, 0X64, 0X60, 0XF0, 0X60, 0X60, 0X60, 0X60, 0XF0,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X76, 0XCC, 0XCC,
    0XCC, 0XCC, 0XCC, 0X7C, 0X0C, 0XCC, 0X78, 0X00, 0X00, 0X00, 0XE0, 0X60,
    0X60, 0X6C, 0X76, 0X66, 0X66, 0X66, 0X66, 0XE6, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X18, 0X18, 0X00, 0X38, 0X18, 0X18, 0X18, 0X18, 0X18, 0X3C,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X06, 0X06, 0X00, 0X0E, 0X06, 0X06,
    0X06, 0X06, 0X06, 0X06, 0X66, 0X66, 0X3C, 0X00, 0X00, 0X00, 0XE0, 0X60,
    0X60, 0X66, 0X6C, 0X78, 0X78, 0X6C, 0X66, 0XE6, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X38, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X3C,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XEC, 0XFE, 0XD6,
    0XD6, 0XD6, 0XD6, 0XC6, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0XDC, 0X66, 0X66, 0X66, 0X66, 0X66, 0X66, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X7C, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6, 0X7C,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XDC, 0X66, 0X66,
    0X66, 0X66, 0X66, 0X7C, 0X60, 0X60, 0XF0, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X76, 0XCC, 0XCC, 0XCC, 0XCC, 0XCC, 0X7C, 0X0C, 0X0C, 0X1E, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0XDC, 0X76, 0X66, 0X60, 0X60, 0X60, 0XF0,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X7C, 0XC6, 0X60,
    0X38, 0X0C, 0XC6, 0X7C, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X10, 0X30,
    0X30, 0XFC, 0X30, 0X30, 0X30, 0X30, 0X36, 0X1C, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0XCC, 0XCC, 0XCC, 0XCC, 0XCC, 0XCC, 0X76,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X66, 0X66, 0X66,
    0X66, 0X66, 0X3C, 0X18, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0XC6, 0XC6, 0XD6, 0XD6, 0XD6, 0XFE, 0X6C, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0XC6, 0X6C, 0X38, 0X38, 0X38, 0X6C, 0XC6,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XC6, 0XC6, 0XC6,
    0XC6, 0XC6, 0XC6, 0X7E, 0X06, 0X0C, 0XF8, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0XFE, 0XCC, 0X18, 0X30, 0X60, 0XC6, 0XFE, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X0E, 0X18, 0X18, 0X18, 0X70, 0X18, 0X18, 0X18, 0X18, 0X0E,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X18, 0X18, 0X18, 0X18, 0X00, 0X18,
    0X18, 0X18, 0X18, 0X18, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X70, 0X18,
    0X18, 0X18, 0X0E, 0X18, 0X18, 0X18, 0X18, 0X70, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X76, 0XDC, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X10, 0X38, 0X6C, 0XC6,
    0XC6, 0XC6, 0XFE, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X3C, 0X66,
    0XC2, 0XC0, 0XC0, 0XC0, 0XC2, 0X66, 0X3C, 0X0C, 0X06, 0X7C, 0X00, 0X00,
    0X00, 0X00, 0XCC, 0X00, 0X00, 0XCC, 0XCC, 0XCC, 0XCC, 0XCC, 0XCC, 0X76,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X0C, 0X18, 0X30, 0X00, 0X7C, 0XC6, 0XFE,
    0XC0, 0XC0, 0XC6, 0X7C, 0X00, 0X00, 0X00, 0X00, 0X00, 0X10, 0X38, 0X6C,
    0X00, 0X78, 0X0C, 0X7C, 0XCC, 0XCC, 0XCC, 0X76, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0XCC, 0X00, 0X00, 0X78, 0X0C, 0X7C, 0XCC, 0XCC, 0XCC, 0X76,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X60, 0X30, 0X18, 0X00, 0X78, 0X0C, 0X7C,
    0XCC, 0XCC, 0XCC, 0X76, 0X00, 0X00, 0X00, 0X00, 0X00, 0X38, 0X6C, 0X38,
    0X00, 0X78, 0X0C, 0X7C, 0XCC, 0XCC, 0XCC, 0X76, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X3C, 0X66, 0X60, 0X60, 0X66, 0X3C, 0X0C, 0X06,
    0X3C, 0X00, 0X00, 0X00, 0X00, 0X10, 0X38, 0X6C, 0X00, 0X7C, 0XC6, 0XFE,
    0XC0, 0XC0, 0XC6, 0X7C, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XC6, 0X00,
    0X00, 0X7C, 0XC6, 0XFE, 0XC0, 0XC0, 0XC6, 0X7C, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X60, 0X30, 0X18, 0X00, 0X7C, 0XC6, 0XFE, 0XC0, 0XC0, 0XC6, 0X7C,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X66, 0X00, 0X00, 0X38, 0X18, 0X18,
    0X18, 0X18, 0X18, 0X3C, 0X00, 0X00, 0X00, 0X00, 0X00, 0X18, 0X3C, 0X66,
    0X00, 0X38, 0X18, 0X18, 0X18, 0X18, 0X18, 0X3C, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X60, 0X30, 0X18, 0X00, 0X38, 0X18, 0X18, 0X18, 0X18, 0X18, 0X3C,
    0X00, 0X00, 0X00, 0X00, 0X00, 0XC6, 0X00, 0X10, 0X38, 0X6C, 0XC6, 0XC6,
    0XFE, 0XC6, 0XC6, 0XC6, 0X00, 0X00, 0X00, 0X00, 0X38, 0X6C, 0X38, 0X00,
    0X38, 0X6C, 0XC6, 0XC6, 0XFE, 0XC6, 0XC6, 0XC6, 0X00, 0X00, 0X00, 0X00,
    0X18, 0X30, 0X60, 0X00, 0XFE, 0X66, 0X60, 0X7C, 0X60, 0X60, 0X66, 0XFE,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XCC, 0X76, 0X36,
    0X7E, 0XD8, 0XD8, 0X6E, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X3E, 0X6C,
    0XCC, 0XCC, 0XFE, 0XCC, 0XCC, 0XCC, 0XCC, 0XCE, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X10, 0X38, 0X6C, 0X00, 0X7C, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6, 0X7C,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XC6, 0X00, 0X00, 0X7C, 0XC6, 0XC6,
    0XC6, 0XC6, 0XC6, 0X7C, 0X00, 0X00, 0X00, 0X00, 0X00, 0X60, 0X30, 0X18,
    0X00, 0X7C, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6, 0X7C, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X30, 0X78, 0XCC, 0X00, 0XCC, 0XCC, 0XCC, 0XCC, 0XCC, 0XCC, 0X76,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X60, 0X30, 0X18, 0X00, 0XCC, 0XCC, 0XCC,
    0XCC, 0XCC, 0XCC, 0X76, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XC6, 0X00,
    0X00, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6, 0X7E, 0X06, 0X0C, 0X78, 0X00,
    0X00, 0XC6, 0X00, 0X7C, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6, 0X7C,
    0X00, 0X00, 0X00, 0X00, 0X00, 0XC6, 0X00, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6,
    0XC6, 0XC6, 0XC6, 0X7C, 0X00, 0X00, 0X00, 0X00, 0X00, 0X18, 0X18, 0X3C,
    0X66, 0X60, 0X60, 0X60, 0X66, 0X3C, 0X18, 0X18, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X38, 0X6C, 0X64, 0X60, 0XF0, 0X60, 0X60, 0X60, 0X60, 0XE6, 0XFC,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X66, 0X66, 0X3C, 0X18, 0X7E, 0X18,
    0X7E, 0X18, 0X18, 0X18, 0X00, 0X00, 0X00, 0X00, 0X00, 0XF8, 0XCC, 0XCC,
    0XF8, 0XC4, 0XCC, 0XDE, 0XCC, 0XCC, 0XCC, 0XC6, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X0E, 0X1B, 0X18, 0X18, 0X18, 0X7E, 0X18, 0X18, 0X18, 0X18, 0X18,
    0XD8, 0X70, 0X00, 0X00, 0X00, 0X18, 0X30, 0X60, 0X00, 0X78, 0X0C, 0X7C,
    0XCC, 0XCC, 0XCC, 0X76, 0X00, 0X00, 0X00, 0X00, 0X00, 0X0C, 0X18, 0X30,
    0X00, 0X38, 0X18, 0X18, 0X18, 0X18, 0X18, 0X3C, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X18, 0X30, 0X60, 0X00, 0X7C, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6, 0X7C,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X18, 0X30, 0X60, 0X00, 0XCC, 0XCC, 0XCC,
    0XCC, 0XCC, 0XCC, 0X76, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X76, 0XDC,
    0X00, 0XDC, 0X66, 0X66, 0X66, 0X66, 0X66, 0X66, 0X00, 0X00, 0X00, 0X00,
    0X76, 0XDC, 0X00, 0XC6, 0XE6, 0XF6, 0XFE, 0XDE, 0XCE, 0XC6, 0XC6, 0XC6,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X3C, 0X6C, 0X6C, 0X3E, 0X00, 0X7E, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X38, 0X6C, 0X6C,
    0X38, 0X00, 0X7C, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X30, 0X30, 0X00, 0X30, 0X30, 0X60, 0XC0, 0XC6, 0XC6, 0X7C,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XFE, 0XC0,
    0XC0, 0XC0, 0XC0, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0XFE, 0X06, 0X06, 0X06, 0X06, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0XC0, 0XC0, 0XC2, 0XC6, 0XCC, 0X18, 0X30, 0X60, 0XDC, 0X86, 0X0C,
    0X18, 0X3E, 0X00, 0X00, 0X00, 0XC0, 0XC0, 0XC2, 0XC6, 0XCC, 0X18, 0X30,
    0X66, 0XCE, 0X9E, 0X3E, 0X06, 0X06, 0X00, 0X00, 0X00, 0X00, 0X18, 0X18,
    0X00, 0X18, 0X18, 0X18, 0X3C, 0X3C, 0X3C, 0X18, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X36, 0X6C, 0XD8, 0X6C, 0X36, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XD8, 0X6C, 0X36,
    0X6C, 0XD8, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X11, 0X44, 0X11, 0X44,
    0X11, 0X44, 0X11, 0X44, 0X11, 0X44, 0X11, 0X44, 0X11, 0X44, 0X11, 0X44,
    0X55, 0XAA, 0X55, 0XAA, 0X55, 0XAA, 0X55, 0XAA, 0X55, 0XAA, 0X55, 0XAA,
    0X55, 0XAA, 0X55, 0XAA, 0XDD, 0X77, 0XDD, 0X77, 0XDD, 0X77, 0XDD, 0X77,
    0XDD, 0X77, 0XDD, 0X77, 0XDD, 0X77, 0XDD, 0X77, 0X18, 0X18, 0X18, 0X18,
    0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18,
    0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0XF8, 0X18, 0X18, 0X18, 0X18,
    0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0XF8, 0X18, 0XF8,
    0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X36, 0X36, 0X36, 0X36,
    0X36, 0X36, 0X36, 0XF6, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XFE, 0X36, 0X36, 0X36, 0X36,
    0X36, 0X36, 0X36, 0X36, 0X00, 0X00, 0X00, 0X00, 0X00, 0XF8, 0X18, 0XF8,
    0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X36, 0X36, 0X36, 0X36,
    0X36, 0XF6, 0X06, 0XF6, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36,
    0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36,
    0X36, 0X36, 0X36, 0X36, 0X00, 0X00, 0X00, 0X00, 0X00, 0XFE, 0X06, 0XF6,
    0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36,
    0X36, 0XF6, 0X06, 0XFE, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0XFE, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X18, 0X18, 0X18, 0X18, 0X18, 0XF8, 0X18, 0XF8,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0XF8, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18,
    0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X1F, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0XFF,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0XFF, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18,
    0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X1F, 0X18, 0X18, 0X18, 0X18,
    0X18, 0X18, 0X18, 0X18, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XFF,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X18, 0X18, 0X18, 0X18,
    0X18, 0X18, 0X18, 0XFF, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18,
    0X18, 0X18, 0X18, 0X18, 0X18, 0X1F, 0X18, 0X1F, 0X18, 0X18, 0X18, 0X18,
    0X18, 0X18, 0X18, 0X18, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X37,
    0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36,
    0X36, 0X37, 0X30, 0X3F, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X3F, 0X30, 0X37, 0X36, 0X36, 0X36, 0X36,
    0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0XF7, 0X00, 0XFF,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0XFF, 0X00, 0XF7, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36,
    0X36, 0X36, 0X36, 0X36, 0X36, 0X37, 0X30, 0X37, 0X36, 0X36, 0X36, 0X36,
    0X36, 0X36, 0X36, 0X36, 0X00, 0X00, 0X00, 0X00, 0X00, 0XFF, 0X00, 0XFF,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X36, 0X36, 0X36, 0X36,
    0X36, 0XF7, 0X00, 0XF7, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36,
    0X18, 0X18, 0X18, 0X18, 0X18, 0XFF, 0X00, 0XFF, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0XFF,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0XFF, 0X00, 0XFF, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XFF, 0X36, 0X36, 0X36, 0X36,
    0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X3F,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X18, 0X18, 0X18, 0X18,
    0X18, 0X1F, 0X18, 0X1F, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X1F, 0X18, 0X1F, 0X18, 0X18, 0X18, 0X18,
    0X18, 0X18, 0X18, 0X18, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X3F,
    0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36,
    0X36, 0X36, 0X36, 0XFF, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36, 0X36,
    0X18, 0X18, 0X18, 0X18, 0X18, 0XFF, 0X18, 0XFF, 0X18, 0X18, 0X18, 0X18,
    0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0XF8,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X1F, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18,
    0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF,
    0XFF, 0XFF, 0XFF, 0XFF, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XFF,
    0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XF0, 0XF0, 0XF0, 0XF0,
    0XF0, 0XF0, 0XF0, 0XF0, 0XF0, 0XF0, 0XF0, 0XF0, 0XF0, 0XF0, 0XF0, 0XF0,
    0X0F, 0X0F, 0X0F, 0X0F, 0X0F, 0X0F, 0X0F, 0X0F, 0X0F, 0X0F, 0X0F, 0X0F,
    0X0F, 0X0F, 0X0F, 0X0F, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X76, 0XDC, 0XD8, 0XD8, 0XD8, 0XDC, 0X76, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X78, 0XCC, 0XCC, 0XCC, 0XD8, 0XCC, 0XC6, 0XC6, 0XC6, 0XCC,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XFE, 0XC6, 0XC6, 0XC0, 0XC0, 0XC0,
    0XC0, 0XC0, 0XC0, 0XC0, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0XFE, 0X6C, 0X6C, 0X6C, 0X6C, 0X6C, 0X6C, 0X6C, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0XFE, 0XC6, 0X60, 0X30, 0X18, 0X30, 0X60, 0XC6, 0XFE,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X7E, 0XD8, 0XD8,
    0XD8, 0XD8, 0XD8, 0X70, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X66, 0X66, 0X66, 0X66, 0X66, 0X7C, 0X60, 0X60, 0XC0, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X76, 0XDC, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X7E, 0X18, 0X3C, 0X66, 0X66,
    0X66, 0X3C, 0X18, 0X7E, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X38,
    0X6C, 0XC6, 0XC6, 0XFE, 0XC6, 0XC6, 0X6C, 0X38, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X38, 0X6C, 0XC6, 0XC6, 0XC6, 0X6C, 0X6C, 0X6C, 0X6C, 0XEE,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X1E, 0X30, 0X18, 0X0C, 0X3E, 0X66,
    0X66, 0X66, 0X66, 0X3C, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X7E, 0XDB, 0XDB, 0XDB, 0X7E, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X03, 0X06, 0X7E, 0XDB, 0XDB, 0XF3, 0X7E, 0X60, 0XC0,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X1C, 0X30, 0X60, 0X60, 0X7C, 0X60,
    0X60, 0X60, 0X30, 0X1C, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X7C,
    0XC6, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6, 0XC6, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0XFE, 0X00, 0X00, 0XFE, 0X00, 0X00, 0XFE, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X18, 0X18, 0X7E, 0X18,
    0X18, 0X00, 0X00, 0XFF, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X30,
    0X18, 0X0C, 0X06, 0X0C, 0X18, 0X30, 0X00, 0X7E, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X0C, 0X18, 0X30, 0X60, 0X30, 0X18, 0X0C, 0X00, 0X7E,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X0E, 0X1B, 0X1B, 0X18, 0X18, 0X18,
    0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18, 0X18,
    0X18, 0X18, 0X18, 0X18, 0XD8, 0XD8, 0XD8, 0X70, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X18, 0X18, 0X00, 0X7E, 0X00, 0X18, 0X18, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X76, 0XDC, 0X00,
    0X76, 0XDC, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X38, 0X6C, 0X6C,
    0X38, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X18, 0X18, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X18, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X0F, 0X0C, 0X0C,
    0X0C, 0X0C, 0X0C, 0XEC, 0X6C, 0X6C, 0X3C, 0X1C, 0X00, 0X00, 0X00, 0X00,
    0X00, 0XD8, 0X6C, 0X6C, 0X6C, 0X6C, 0X6C, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X70, 0XD8, 0X30, 0X60, 0XC8, 0XF8, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X7C, 0X7C, 0X7C, 0X7C, 0X7C, 0X7C, 0X7C, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,
    0X00, 0X00, 0X00, 0X00
};
uint32_t font_vga8x16_len = 4096;

#endif