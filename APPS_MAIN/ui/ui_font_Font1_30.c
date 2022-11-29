/*******************************************************************************
 * Size: 30 px
 * Bpp: 1
 * Opts: --bpp 1 --size 30 --font C:\Users\jordi\Documents\SquareLine\assets\Typographica-Blp5.ttf -o C:\Users\jordi\Documents\SquareLine\assets\ui_font_Font1_30.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_FONT1_30
#define UI_FONT_FONT1_30 1
#endif

#if UI_FONT_FONT1_30

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfc, 0x0, 0x77, 0xff, 0xf7, 0x0,

    /* U+0022 "\"" */
    0x0,

    /* U+0023 "#" */
    0x0,

    /* U+0024 "$" */
    0x0,

    /* U+0025 "%" */
    0x0,

    /* U+0026 "&" */
    0x0,

    /* U+0027 "'" */
    0x0,

    /* U+0028 "(" */
    0x0,

    /* U+0029 ")" */
    0x0,

    /* U+002A "*" */
    0x0,

    /* U+002B "+" */
    0x0,

    /* U+002C "," */
    0x0,

    /* U+002D "-" */
    0x0,

    /* U+002E "." */
    0x77, 0xff, 0xf7, 0x0,

    /* U+002F "/" */
    0x0,

    /* U+0030 "0" */
    0x1, 0x0, 0x1f, 0xc0, 0x7f, 0xc1, 0xff, 0xc7,
    0xff, 0xcf, 0xff, 0x9f, 0x1f, 0x7c, 0x3f, 0xf8,
    0x3f, 0xf0, 0x7f, 0xe0, 0xff, 0xc1, 0xff, 0x83,
    0xff, 0x7, 0xfe, 0xf, 0xfc, 0x1f, 0x7c, 0x7c,
    0xff, 0xf9, 0xff, 0xf1, 0xff, 0xc1, 0xff, 0x1,
    0xfc, 0x0, 0x40, 0x0,

    /* U+0031 "1" */
    0xff, 0xff, 0xff, 0xff, 0x1f, 0x1f, 0x1f, 0x1f,
    0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f,
    0x1f, 0x1f, 0x1f, 0x1f, 0x1f,

    /* U+0032 "2" */
    0x0, 0x0, 0xf, 0xf0, 0x3f, 0xf8, 0x7f, 0xfc,
    0x7f, 0xfc, 0x7f, 0xfe, 0x18, 0x3e, 0x0, 0x3e,
    0x0, 0x3e, 0x0, 0x3e, 0x0, 0x7c, 0x0, 0x7c,
    0x0, 0xf8, 0x1, 0xf0, 0x3, 0xf0, 0x7, 0xe0,
    0x7, 0xc0, 0xf, 0xff, 0x1f, 0xff, 0x3f, 0xff,
    0x7f, 0xff, 0x7f, 0xff,

    /* U+0033 "3" */
    0x1, 0x0, 0x3f, 0xc1, 0xff, 0xc7, 0xff, 0xcf,
    0xff, 0xc6, 0xf, 0x80, 0x1f, 0x0, 0x3e, 0x0,
    0xfc, 0x1f, 0xf0, 0x3f, 0xc0, 0x7f, 0xc0, 0xff,
    0xc0, 0xf, 0xc0, 0xf, 0x80, 0x1f, 0x30, 0x3e,
    0xff, 0xff, 0xff, 0xf7, 0xff, 0xe7, 0xff, 0x83,
    0xfc, 0x0, 0x80, 0x0,

    /* U+0034 "4" */
    0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,
    0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x0, 0xf8, 0x0, 0xf8, 0x0, 0xf8, 0x0, 0xf8,
    0x0, 0xf8, 0x0, 0xf8, 0x0, 0xf8, 0x0, 0xf8,
    0x0, 0xf8,

    /* U+0035 "5" */
    0x7f, 0xf1, 0xff, 0xc7, 0xff, 0x1f, 0xfc, 0x7f,
    0xf1, 0xf0, 0x7, 0xc0, 0x1f, 0xf0, 0x7f, 0xf1,
    0xff, 0xe7, 0xff, 0x80, 0x3f, 0x0, 0x7c, 0x1,
    0xf0, 0x7, 0xc8, 0x3f, 0x7f, 0xfd, 0xff, 0xef,
    0xff, 0x3f, 0xfc, 0x3f, 0xc0, 0x10, 0x0,

    /* U+0036 "6" */
    0x1, 0xf8, 0x7, 0xe0, 0x1f, 0x80, 0x3e, 0x0,
    0xf8, 0x3, 0xf0, 0xf, 0xc0, 0x1f, 0xf0, 0x7f,
    0xf8, 0xff, 0xfb, 0xff, 0xf7, 0xe3, 0xff, 0x83,
    0xff, 0x7, 0xfe, 0xf, 0xfe, 0x3f, 0xff, 0xfe,
    0xff, 0xf9, 0xff, 0xf1, 0xff, 0xc0, 0xff, 0x0,
    0x20, 0x0,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0xef, 0xff, 0xbf, 0xfe, 0xff,
    0xf0, 0x7, 0xc0, 0x1f, 0x0, 0xfc, 0x3, 0xe0,
    0xf, 0x80, 0x7e, 0x1, 0xf0, 0x7, 0xc0, 0x3f,
    0x0, 0xf8, 0x3, 0xe0, 0x1f, 0x80, 0x7c, 0x3,
    0xf0, 0xf, 0xc0, 0x3e, 0x0,

    /* U+0038 "8" */
    0x1, 0x0, 0x3f, 0xc0, 0xff, 0xc3, 0xff, 0xcf,
    0xff, 0xdf, 0xf, 0xbe, 0x1f, 0x7e, 0x3e, 0xff,
    0xfc, 0xff, 0xf0, 0xff, 0xc1, 0xff, 0xc7, 0xff,
    0xcf, 0x9f, 0xbe, 0x1f, 0xfc, 0x1f, 0xf8, 0x3f,
    0xf0, 0x7f, 0xff, 0xfb, 0xff, 0xe3, 0xff, 0x83,
    0xfe, 0x0, 0x40, 0x0,

    /* U+0039 "9" */
    0x1, 0x0, 0x3f, 0xc0, 0xff, 0xe3, 0xff, 0xe7,
    0xff, 0xdf, 0x8f, 0xfe, 0xf, 0xfc, 0x1f, 0xf8,
    0x3f, 0xf0, 0x7f, 0xf1, 0xfb, 0xff, 0xf7, 0xff,
    0xc7, 0xff, 0x83, 0xfe, 0x0, 0xfc, 0x3, 0xf0,
    0x7, 0xc0, 0x1f, 0x0, 0x7e, 0x1, 0xf8, 0x7,
    0xe0, 0x0,

    /* U+003A ":" */
    0x0,

    /* U+003B ";" */
    0x0,

    /* U+003C "<" */
    0x0,

    /* U+003D "=" */
    0x0,

    /* U+003E ">" */
    0x0,

    /* U+003F "?" */
    0x0,

    /* U+0040 "@" */
    0x0,

    /* U+0041 "A" */
    0x0, 0x10, 0x0, 0x0, 0x20, 0x0, 0x0, 0xe0,
    0x0, 0x1, 0xc0, 0x0, 0x7, 0xc0, 0x0, 0xf,
    0x80, 0x0, 0x3f, 0x80, 0x0, 0x7f, 0x0, 0x1,
    0xff, 0x0, 0x3, 0xfe, 0x0, 0xf, 0xbe, 0x0,
    0x3f, 0x7c, 0x0, 0x7c, 0x7c, 0x1, 0xf8, 0xf8,
    0x3, 0xff, 0xf8, 0xf, 0xff, 0xf8, 0x1f, 0xff,
    0xf0, 0x7f, 0xff, 0xf0, 0xf8, 0x3, 0xe3, 0xf0,
    0x7, 0xe7, 0xc0, 0x7, 0xdf, 0x80, 0xf, 0xc0,

    /* U+0042 "B" */
    0xff, 0xc1, 0xff, 0xe3, 0xff, 0xe7, 0xff, 0xef,
    0x8f, 0xdf, 0xf, 0xbe, 0x1f, 0x7c, 0x7e, 0xff,
    0xf9, 0xff, 0xe3, 0xff, 0xe7, 0xff, 0xef, 0x87,
    0xff, 0x7, 0xfe, 0xf, 0xfc, 0x1f, 0xf8, 0x7f,
    0xff, 0xfb, 0xff, 0xf7, 0xff, 0xcf, 0xfe, 0x0,

    /* U+0043 "C" */
    0x0, 0x0, 0x0, 0xff, 0x80, 0xff, 0xf0, 0x7f,
    0xfe, 0x3f, 0xff, 0x8f, 0xff, 0xc7, 0xe0, 0x61,
    0xf0, 0x0, 0xfc, 0x0, 0x3e, 0x0, 0xf, 0x80,
    0x3, 0xe0, 0x0, 0xf8, 0x0, 0x3e, 0x0, 0xf,
    0xc0, 0x1, 0xf8, 0x8, 0x7f, 0x7, 0xf, 0xff,
    0xe1, 0xff, 0xfc, 0x3f, 0xfe, 0x7, 0xff, 0x0,
    0x7f, 0x0,

    /* U+0044 "D" */
    0xff, 0xe0, 0x3f, 0xfe, 0xf, 0xff, 0xc3, 0xff,
    0xf8, 0xf8, 0x7f, 0x3e, 0x7, 0xef, 0x80, 0xfb,
    0xe0, 0x3f, 0xf8, 0x7, 0xfe, 0x1, 0xff, 0x80,
    0x7f, 0xe0, 0x1f, 0xf8, 0x7, 0xfe, 0x3, 0xff,
    0x80, 0xfb, 0xe0, 0x7e, 0xf8, 0x7f, 0x3f, 0xff,
    0x8f, 0xff, 0xc3, 0xff, 0xe0, 0xff, 0xe0, 0x0,

    /* U+0045 "E" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80,
    0x7c, 0x3, 0xe0, 0x1f, 0x0, 0xff, 0x87, 0xfe,
    0x3f, 0xf1, 0xff, 0x8f, 0x80, 0x7c, 0x3, 0xe0,
    0x1f, 0x0, 0xf8, 0x7, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x80,

    /* U+0046 "F" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80,
    0x7c, 0x3, 0xe0, 0x1f, 0x0, 0xff, 0x87, 0xfe,
    0x3f, 0xf1, 0xff, 0x8f, 0x80, 0x7c, 0x3, 0xe0,
    0x1f, 0x0, 0xf8, 0x7, 0xc0, 0x3e, 0x1, 0xf0,
    0xf, 0x80, 0x0,

    /* U+0047 "G" */
    0x0, 0x10, 0x0, 0x1f, 0xf0, 0x7, 0xff, 0xc1,
    0xff, 0xfe, 0x1f, 0xff, 0xe3, 0xff, 0xfc, 0x7f,
    0x1, 0x87, 0xc0, 0x0, 0xfc, 0x0, 0xf, 0x80,
    0x0, 0xf8, 0x1f, 0xff, 0x80, 0xff, 0xf8, 0xf,
    0xff, 0x80, 0x7f, 0xfc, 0x1, 0xf7, 0xe0, 0x1f,
    0x7f, 0x1, 0xf3, 0xff, 0xff, 0x1f, 0xff, 0xf1,
    0xff, 0xff, 0x7, 0xff, 0xf0, 0x3f, 0xf8, 0x0,
    0x30, 0x0,

    /* U+0048 "H" */
    0xf8, 0xf, 0xfc, 0x7, 0xfe, 0x3, 0xff, 0x1,
    0xff, 0x80, 0xff, 0xc0, 0x7f, 0xe0, 0x3f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x80, 0xff, 0xc0, 0x7f, 0xe0, 0x3f,
    0xf0, 0x1f, 0xf8, 0xf, 0xfc, 0x7, 0xfe, 0x3,
    0xff, 0x1, 0xff, 0x80, 0xf8,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x80,

    /* U+004A "J" */
    0x3, 0xe0, 0x7c, 0xf, 0x81, 0xf0, 0x3e, 0x7,
    0xc0, 0xf8, 0x1f, 0x3, 0xe0, 0x7c, 0xf, 0x81,
    0xf0, 0x3e, 0x7, 0xc0, 0xf8, 0x1f, 0x3, 0xe0,
    0x7c, 0xf, 0x81, 0xf0, 0x3e, 0x7, 0xc1, 0xf8,
    0x3e, 0x1f, 0xdf, 0xf3, 0xfc, 0x7f, 0xf, 0xc1,
    0xe0, 0x0,

    /* U+004B "K" */
    0xf8, 0x1f, 0x7c, 0x1f, 0xbe, 0xf, 0x9f, 0xf,
    0x8f, 0x8f, 0xc7, 0xc7, 0xc3, 0xe7, 0xe1, 0xf3,
    0xe0, 0xfb, 0xe0, 0x7f, 0xf0, 0x3f, 0xf0, 0x1f,
    0xf8, 0xf, 0xbe, 0x7, 0xdf, 0x83, 0xe7, 0xc1,
    0xf1, 0xf0, 0xf8, 0xfc, 0x7c, 0x3e, 0x3e, 0x1f,
    0x9f, 0x7, 0xef, 0x81, 0xf0,

    /* U+004C "L" */
    0xf8, 0x7, 0xc0, 0x3e, 0x1, 0xf0, 0xf, 0x80,
    0x7c, 0x3, 0xe0, 0x1f, 0x0, 0xf8, 0x7, 0xc0,
    0x3e, 0x1, 0xf0, 0xf, 0x80, 0x7c, 0x3, 0xe0,
    0x1f, 0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xef, 0xff, 0x0,

    /* U+004D "M" */
    0x0, 0x0, 0x10, 0x0, 0x7, 0x0, 0x1, 0xf0,
    0x0, 0xff, 0x80, 0x3f, 0xf8, 0xf, 0xff, 0x83,
    0xff, 0xf8, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xf7,
    0xe7, 0xfe, 0x38, 0xff, 0xc2, 0x1f, 0xf8, 0x3,
    0xff, 0x0, 0x7f, 0xe0, 0xf, 0xfc, 0x1, 0xff,
    0x80, 0x3f, 0xf0, 0x7, 0xc0,

    /* U+004E "N" */
    0x80, 0x7, 0xf0, 0x1, 0xff, 0x0, 0x7f, 0xe0,
    0x1f, 0xfc, 0x7, 0xff, 0xc1, 0xff, 0xf8, 0x7f,
    0xff, 0x1f, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xef, 0xff, 0xf8, 0xff, 0xfe, 0x1f, 0xff,
    0x83, 0xff, 0xe0, 0x7f, 0xf8, 0xf, 0xfe, 0x0,
    0xff, 0x80, 0x1f, 0xe0, 0x3, 0xf8, 0x0, 0x40,

    /* U+004F "O" */
    0x0, 0x0, 0x0, 0xf, 0xfc, 0x0, 0x7f, 0xf8,
    0x7, 0xff, 0xf8, 0x3f, 0xff, 0xf0, 0xff, 0xff,
    0xc7, 0xf0, 0x3f, 0x9f, 0x80, 0x7e, 0xfc, 0x0,
    0xff, 0xe0, 0x1, 0xff, 0x80, 0x7, 0xfe, 0x0,
    0x1f, 0xf8, 0x0, 0x7f, 0xe0, 0x1, 0xff, 0xc0,
    0xf, 0xdf, 0x80, 0x7e, 0x7f, 0x3, 0xf8, 0xff,
    0xff, 0xc3, 0xff, 0xfe, 0x7, 0xff, 0xf8, 0x7,
    0xff, 0x80, 0xf, 0xfc, 0x0, 0x2, 0x0, 0x0,

    /* U+0050 "P" */
    0xff, 0xe1, 0xff, 0xf3, 0xff, 0xf7, 0xff, 0xef,
    0x87, 0xff, 0x7, 0xfe, 0xf, 0xfc, 0x1f, 0xf8,
    0x7f, 0xff, 0xfb, 0xff, 0xe7, 0xff, 0x8f, 0xfc,
    0x1f, 0x0, 0x3e, 0x0, 0x7c, 0x0, 0xf8, 0x1,
    0xf0, 0x3, 0xe0, 0x7, 0xc0, 0xf, 0x80, 0x0,

    /* U+0051 "Q" */
    0x0, 0x0, 0x0, 0xf, 0xfc, 0x0, 0x7f, 0xf8,
    0x7, 0xff, 0xf8, 0x1f, 0xff, 0xe0, 0xff, 0xff,
    0xc7, 0xf0, 0x3f, 0x9f, 0x80, 0x7e, 0xfc, 0x0,
    0xff, 0xe0, 0x1, 0xff, 0x80, 0x7, 0xfe, 0x0,
    0x1f, 0xf8, 0x0, 0x7f, 0xe0, 0x1, 0xff, 0xc0,
    0xf, 0xdf, 0x0, 0x3e, 0x7e, 0x1, 0xf8, 0xfe,
    0x1f, 0xc3, 0xff, 0xff, 0x7, 0xff, 0xf8, 0xf,
    0xff, 0xc0, 0x1f, 0xfc, 0x3, 0xcf, 0xf8, 0xf,
    0xbf, 0xf0, 0x3f, 0xff, 0xe0, 0x7f, 0xff, 0xc1,
    0xff, 0xff, 0x3, 0xf8, 0x3c, 0x0, 0x0, 0x80,
    0x0, 0x0, 0x0,

    /* U+0052 "R" */
    0xff, 0x80, 0xff, 0xf0, 0xff, 0xf8, 0xff, 0xf8,
    0xf8, 0xfc, 0xf8, 0x7c, 0xf8, 0x7c, 0xf8, 0x7c,
    0xf8, 0x7c, 0xf8, 0xf8, 0xff, 0xf0, 0xff, 0xe0,
    0xfb, 0xe0, 0xfb, 0xf0, 0xf9, 0xf0, 0xf9, 0xf8,
    0xf8, 0xf8, 0xf8, 0xfc, 0xf8, 0x7c, 0xf8, 0x7e,
    0xf8, 0x3f,

    /* U+0053 "S" */
    0x0, 0x0, 0xff, 0xf, 0xfc, 0xff, 0xef, 0xfe,
    0x7c, 0x33, 0xe0, 0x1f, 0x80, 0xff, 0x7, 0xfe,
    0x1f, 0xf8, 0x7f, 0xe1, 0xff, 0x81, 0xfc, 0x7,
    0xe0, 0x1f, 0x20, 0xfb, 0xff, 0xdf, 0xfd, 0xff,
    0xef, 0xfe, 0x1f, 0xe0, 0x10, 0x0,

    /* U+0054 "T" */
    0xff, 0xfd, 0xff, 0xfb, 0xff, 0xf3, 0xff, 0xf7,
    0xff, 0xe0, 0xf8, 0x1, 0xf0, 0x3, 0xe0, 0x7,
    0xc0, 0xf, 0x80, 0x1f, 0x0, 0x3e, 0x0, 0x7c,
    0x0, 0xf8, 0x1, 0xf0, 0x3, 0xe0, 0x7, 0xc0,
    0xf, 0x80, 0x1f, 0x0, 0x3e, 0x0, 0x7c, 0x0,

    /* U+0055 "U" */
    0xf8, 0xf, 0xfc, 0x7, 0xfe, 0x3, 0xff, 0x1,
    0xff, 0x80, 0xff, 0xc0, 0x7f, 0xe0, 0x3f, 0xf0,
    0x1f, 0xf8, 0xf, 0xfc, 0x7, 0xfe, 0x3, 0xff,
    0x1, 0xff, 0x80, 0xff, 0xc0, 0x7f, 0xe0, 0x3f,
    0xf8, 0x3f, 0xff, 0xff, 0xbf, 0xff, 0x9f, 0xff,
    0x87, 0xff, 0x81, 0xff, 0x80, 0xc, 0x0,

    /* U+0056 "V" */
    0xf8, 0x1, 0xf7, 0x80, 0x1e, 0x7c, 0x3, 0xe3,
    0xc0, 0x3e, 0x3e, 0x7, 0xc1, 0xe0, 0x7c, 0x1f,
    0xf, 0x81, 0xf0, 0xf8, 0xf, 0x9f, 0x0, 0xf9,
    0xf0, 0x7, 0xfe, 0x0, 0x7f, 0xe0, 0x3, 0xfc,
    0x0, 0x3f, 0xc0, 0x1, 0xf8, 0x0, 0x1f, 0x80,
    0x0, 0xf8, 0x0, 0xf, 0x0, 0x0, 0x70, 0x0,
    0x6, 0x0, 0x0, 0x60, 0x0, 0x0, 0x0,

    /* U+0057 "W" */
    0xf8, 0x0, 0x7, 0xff, 0x81, 0x80, 0xf9, 0xf0,
    0x30, 0x1f, 0x3e, 0xf, 0x7, 0xe7, 0xc1, 0xe0,
    0xf8, 0x7c, 0x7e, 0x1f, 0xf, 0x8f, 0xc3, 0xe1,
    0xf3, 0xfc, 0xf8, 0x1f, 0x7f, 0x9f, 0x3, 0xff,
    0xfb, 0xe0, 0x7f, 0xff, 0xf8, 0x7, 0xfd, 0xff,
    0x0, 0xff, 0x3f, 0xc0, 0x1f, 0xe3, 0xf8, 0x1,
    0xf8, 0x7f, 0x0, 0x3f, 0x7, 0xc0, 0x7, 0xc0,
    0xf8, 0x0, 0x78, 0xf, 0x0, 0xe, 0x1, 0xc0,
    0x1, 0x80, 0x18, 0x0, 0x10, 0x3, 0x0, 0x0,
    0x0, 0x0, 0x0,

    /* U+0058 "X" */
    0x7c, 0x3, 0xf7, 0xe0, 0x7e, 0x3f, 0xf, 0xc1,
    0xf0, 0xfc, 0x1f, 0x9f, 0x80, 0xff, 0xf0, 0x7,
    0xfe, 0x0, 0x7f, 0xe0, 0x3, 0xfc, 0x0, 0x1f,
    0x80, 0x1, 0xf8, 0x0, 0x3f, 0xc0, 0x7, 0xfe,
    0x0, 0x7f, 0xe0, 0xf, 0xff, 0x1, 0xf9, 0xf0,
    0x1f, 0x1f, 0x83, 0xf0, 0xfc, 0x3e, 0x7, 0xc7,
    0xc0, 0x7e, 0xfc, 0x3, 0xf0,

    /* U+0059 "Y" */
    0x7e, 0xf, 0xdf, 0x83, 0xf3, 0xf1, 0xf8, 0xfc,
    0x7c, 0x1f, 0xbf, 0x3, 0xef, 0x80, 0xff, 0xe0,
    0x1f, 0xf0, 0x7, 0xfc, 0x0, 0xfe, 0x0, 0x3f,
    0x0, 0x7, 0xc0, 0x1, 0xf0, 0x0, 0x7c, 0x0,
    0x1f, 0x0, 0x7, 0xc0, 0x1, 0xf0, 0x0, 0x7c,
    0x0, 0x1f, 0x0, 0x7, 0xc0, 0x1, 0xf0, 0x0,

    /* U+005A "Z" */
    0x7f, 0xff, 0xdf, 0xff, 0xe3, 0xff, 0xf0, 0xff,
    0xfc, 0x3f, 0xfe, 0x0, 0x1f, 0x0, 0x7, 0xc0,
    0x3, 0xe0, 0x1, 0xf8, 0x0, 0x7c, 0x0, 0x3e,
    0x0, 0x1f, 0x80, 0x7, 0xc0, 0x3, 0xf0, 0x0,
    0xf8, 0x0, 0x7c, 0x0, 0x3f, 0xff, 0x8f, 0xff,
    0xe7, 0xff, 0xfb, 0xff, 0xfe, 0xff, 0xff, 0x80,

    /* U+005B "[" */
    0x0,

    /* U+005C "\\" */
    0x0,

    /* U+005D "]" */
    0x0,

    /* U+005E "^" */
    0x0,

    /* U+005F "_" */
    0x0,

    /* U+0060 "`" */
    0x0,

    /* U+0061 "a" */
    0x0, 0x0, 0x7, 0xfc, 0x7, 0xff, 0x7, 0xff,
    0xc7, 0xff, 0xf3, 0xe0, 0xfb, 0xe0, 0x3f, 0xf0,
    0x1f, 0xf8, 0xf, 0xfc, 0x7, 0xff, 0x7, 0xef,
    0xc7, 0xf7, 0xff, 0xf9, 0xff, 0xfc, 0x7f, 0xfe,
    0xf, 0xff,

    /* U+0062 "b" */
    0xf8, 0x0, 0x7c, 0x0, 0x3e, 0x0, 0x1f, 0x0,
    0xf, 0x80, 0x7, 0xc0, 0x3, 0xff, 0xe1, 0xff,
    0xf8, 0xff, 0xfe, 0x7f, 0xff, 0xbf, 0x7, 0xdf,
    0x1, 0xff, 0x80, 0xff, 0xc0, 0x7f, 0xe0, 0x3f,
    0xf0, 0x3f, 0x7c, 0x1f, 0x3f, 0xff, 0x8f, 0xff,
    0x83, 0xff, 0x80, 0xff, 0x80, 0x4, 0x0,

    /* U+0063 "c" */
    0x0, 0x0, 0x3f, 0xe1, 0xff, 0xcf, 0xfe, 0x7f,
    0xf9, 0xf0, 0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3,
    0xe0, 0xf, 0xc0, 0x1f, 0x84, 0x7f, 0xf8, 0xff,
    0xf1, 0xff, 0xc1, 0xfc,

    /* U+0064 "d" */
    0x0, 0xf, 0x80, 0x7, 0xc0, 0x3, 0xe0, 0x1,
    0xf0, 0x0, 0xf8, 0x4, 0x7c, 0x3f, 0xfe, 0x3f,
    0xff, 0x3f, 0xff, 0xbf, 0xff, 0xdf, 0x7, 0xff,
    0x1, 0xff, 0x80, 0xff, 0xc0, 0x7f, 0xe0, 0x3f,
    0xf0, 0x3f, 0x7c, 0x1f, 0x3f, 0xff, 0x8f, 0xff,
    0x83, 0xff, 0x80, 0xff, 0x80, 0x4, 0x0,

    /* U+0065 "e" */
    0x0, 0x0, 0xf, 0xf0, 0x1f, 0xfc, 0x3f, 0xfe,
    0x7f, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf0, 0x0, 0xf8, 0x0, 0xf8, 0x0, 0x7c, 0x20,
    0x7f, 0xf0, 0x3f, 0xf8, 0x1f, 0xf8, 0x7, 0xe0,

    /* U+0066 "f" */
    0x1, 0xe0, 0xfc, 0x3f, 0x87, 0xf1, 0xf8, 0x3e,
    0x7, 0xc3, 0xfe, 0x7f, 0xcf, 0xf9, 0xff, 0xf,
    0x81, 0xf0, 0x3e, 0x7, 0xc0, 0xf8, 0x1f, 0x3,
    0xe0, 0x7c, 0xf, 0x81, 0xf0, 0x3e, 0x0,

    /* U+0067 "g" */
    0x0, 0x0, 0xf, 0xf8, 0x1f, 0xfc, 0x3f, 0xfe,
    0x7f, 0xfe, 0x7c, 0x1f, 0xf8, 0xf, 0xf8, 0xf,
    0xf8, 0xf, 0xf8, 0xf, 0xfc, 0x1f, 0x7c, 0x1f,
    0x7f, 0xff, 0x3f, 0xff, 0x1f, 0xff, 0xf, 0xff,
    0x1, 0x1f, 0x4, 0x1f, 0xc, 0x1f, 0x3e, 0x3f,
    0x7f, 0xfe, 0x3f, 0xfe, 0x1f, 0xf8, 0x7, 0xf0,

    /* U+0068 "h" */
    0xf8, 0x3, 0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8,
    0x3, 0xe0, 0xf, 0xff, 0x3f, 0xfe, 0xff, 0xfb,
    0xff, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1,
    0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f, 0xe1, 0xff,
    0x87, 0xfe, 0x1f, 0xf8, 0x7c,

    /* U+0069 "i" */
    0x7, 0xff, 0xf7, 0x10, 0x1f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,

    /* U+006A "j" */
    0x4, 0xe, 0x1f, 0x1f, 0xe, 0x4, 0x0, 0x1f,
    0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f,
    0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x3f,
    0xff, 0xfe, 0x7e, 0x78,

    /* U+006B "k" */
    0xf8, 0x0, 0xf8, 0x0, 0xf8, 0x0, 0xf8, 0x0,
    0xf8, 0x0, 0xf8, 0x0, 0xf8, 0x7e, 0xf8, 0x7c,
    0xf8, 0xf8, 0xf9, 0xf0, 0xfb, 0xf0, 0xff, 0xe0,
    0xff, 0xc0, 0xff, 0xe0, 0xfb, 0xf0, 0xfb, 0xf0,
    0xf9, 0xf8, 0xf8, 0xfc, 0xf8, 0x7c, 0xf8, 0x7e,
    0xf8, 0x3f,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x80,

    /* U+006D "m" */
    0x2, 0x1, 0x0, 0xff, 0x7f, 0x87, 0xff, 0xff,
    0x9f, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xe3, 0xe1,
    0xff, 0x8f, 0x87, 0xfe, 0x3e, 0x1f, 0xf8, 0xf8,
    0x7f, 0xe3, 0xe1, 0xff, 0x8f, 0x87, 0xfe, 0x3e,
    0x1f, 0xf8, 0xf8, 0x7f, 0xe3, 0xe1, 0xff, 0x8f,
    0x87, 0xfe, 0x3e, 0x1f,

    /* U+006E "n" */
    0x2, 0x1, 0xff, 0x1f, 0xfc, 0xff, 0xef, 0xff,
    0xfc, 0x7f, 0xe3, 0xff, 0x1f, 0xf8, 0xff, 0xc7,
    0xfe, 0x3f, 0xf1, 0xff, 0x8f, 0xfc, 0x7f, 0xe3,
    0xff, 0x1f,

    /* U+006F "o" */
    0x0, 0x80, 0x7, 0xfc, 0x7, 0xff, 0x7, 0xff,
    0xc7, 0xff, 0xf3, 0xe0, 0xfb, 0xe0, 0x3f, 0xf0,
    0x1f, 0xf8, 0xf, 0xfc, 0x7, 0xfe, 0x7, 0xef,
    0x83, 0xe7, 0xff, 0xf1, 0xff, 0xf0, 0x7f, 0xf0,
    0x1f, 0xf0, 0x0, 0x80, 0x0,

    /* U+0070 "p" */
    0x0, 0x0, 0x7, 0xfc, 0x7, 0xff, 0x7, 0xff,
    0xc7, 0xff, 0xf3, 0xe0, 0xfb, 0xe0, 0x3f, 0xf0,
    0x1f, 0xf8, 0xf, 0xfc, 0x7, 0xff, 0x7, 0xff,
    0xc7, 0xef, 0xff, 0xf7, 0xff, 0xf3, 0xff, 0xf1,
    0xf7, 0xe0, 0xf8, 0x0, 0x7c, 0x0, 0x3e, 0x0,
    0x1f, 0x0, 0xf, 0x80, 0x7, 0xc0, 0x0,

    /* U+0071 "q" */
    0x0, 0x80, 0x7, 0xfc, 0x7, 0xff, 0x7, 0xff,
    0xc7, 0xff, 0xf3, 0xe0, 0xfb, 0xe0, 0x3f, 0xf0,
    0x1f, 0xf8, 0xf, 0xfc, 0x7, 0xff, 0x7, 0xef,
    0xc7, 0xf7, 0xff, 0xf9, 0xff, 0xfc, 0x7f, 0xfe,
    0xf, 0xdf, 0x0, 0xf, 0x80, 0x7, 0xc0, 0x3,
    0xe0, 0x1, 0xf0, 0x0, 0xf8, 0x0, 0x7c,

    /* U+0072 "r" */
    0x3, 0x3f, 0x7f, 0x7f, 0xff, 0xf8, 0xf8, 0xf8,
    0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,

    /* U+0073 "s" */
    0x0, 0x0, 0xff, 0xf, 0xfc, 0xff, 0xc7, 0xfc,
    0x3e, 0x1, 0xf8, 0xf, 0xfc, 0x3f, 0xf0, 0x7f,
    0xc0, 0x7e, 0x41, 0xf3, 0xff, 0xbf, 0xfd, 0xff,
    0xc7, 0xfc, 0x2, 0x0,

    /* U+0074 "t" */
    0x1f, 0x1, 0xf0, 0x1f, 0x1, 0xf0, 0x1f, 0x1,
    0xf0, 0x7f, 0xe7, 0xfe, 0xff, 0xcf, 0xfc, 0x1f,
    0x1, 0xf0, 0x1f, 0x1, 0xf0, 0x1f, 0x1, 0xf0,
    0x1f, 0x1, 0xff, 0xf, 0xe0, 0xfe, 0x7, 0xe0,
    0x4,

    /* U+0075 "u" */
    0xf8, 0xff, 0xc7, 0xfe, 0x3f, 0xf1, 0xff, 0x8f,
    0xfc, 0x7f, 0xe3, 0xff, 0x1f, 0xf8, 0xff, 0xc7,
    0xfe, 0x3f, 0xff, 0xf7, 0xff, 0x1f, 0xf0, 0x7f,
    0x0,

    /* U+0076 "v" */
    0xf8, 0x3e, 0x78, 0x3e, 0x7c, 0x7c, 0x3c, 0x7c,
    0x3e, 0x78, 0x1e, 0xf8, 0x1f, 0xf0, 0xf, 0xf0,
    0xf, 0xe0, 0x7, 0xe0, 0x7, 0xc0, 0x7, 0xc0,
    0x3, 0x80, 0x3, 0x80, 0x1, 0x0, 0x1, 0x0,

    /* U+0077 "w" */
    0xf8, 0xf8, 0x7f, 0xe3, 0xe1, 0xff, 0x8f, 0x87,
    0xfe, 0x3e, 0x1f, 0xf8, 0xf8, 0x7f, 0xe3, 0xe1,
    0xff, 0x8f, 0x87, 0xfe, 0x3e, 0x1f, 0xf8, 0xf8,
    0x7f, 0xe3, 0xe1, 0xff, 0x8f, 0x8f, 0xff, 0xff,
    0xff, 0x7f, 0xff, 0xf8, 0xff, 0xff, 0xc1, 0xfc,
    0xfe, 0x0,

    /* U+0078 "x" */
    0x7c, 0x1f, 0x3f, 0x1f, 0xf, 0x9f, 0x3, 0xef,
    0x80, 0xff, 0x80, 0x7f, 0x80, 0x1f, 0x80, 0xf,
    0xc0, 0x7, 0xf0, 0x7, 0xf8, 0x7, 0xfe, 0x7,
    0xcf, 0x83, 0xe7, 0xe3, 0xe1, 0xf3, 0xe0, 0x7c,

    /* U+0079 "y" */
    0xf8, 0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0x87, 0xff, 0xff, 0xff, 0xfd, 0xff,
    0xf3, 0xff, 0xc7, 0xdf, 0x0, 0x7c, 0x1, 0xf3,
    0x7, 0xfe, 0x3f, 0xff, 0xf9, 0xff, 0xe3, 0xff,
    0x7, 0xf0,

    /* U+007A "z" */
    0x3f, 0xfc, 0xff, 0xe3, 0xff, 0x9f, 0xfc, 0x3,
    0xf0, 0xf, 0x80, 0x7c, 0x3, 0xf0, 0xf, 0x80,
    0x7e, 0x1, 0xf0, 0xf, 0xff, 0x7f, 0xfd, 0xff,
    0xff, 0xff, 0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 62, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 108, .box_w = 5, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 157, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 250, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 195, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 285, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 258, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 69, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 144, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 144, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 162, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 24, .adv_w = 251, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 94, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 160, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 155, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 255, .box_w = 15, .box_h = 23, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 76, .adv_w = 128, .box_w = 8, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 259, .box_w = 16, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 255, .box_w = 15, .box_h = 23, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 185, .adv_w = 264, .box_w = 16, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 241, .box_w = 14, .box_h = 22, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 266, .adv_w = 255, .box_w = 15, .box_h = 22, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 308, .adv_w = 235, .box_w = 14, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 345, .adv_w = 252, .box_w = 15, .box_h = 23, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 389, .adv_w = 255, .box_w = 15, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 431, .adv_w = 96, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 98, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 304, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 215, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 304, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 436, .adv_w = 225, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 437, .adv_w = 539, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 378, .box_w = 23, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 255, .box_w = 15, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 542, .adv_w = 293, .box_w = 18, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 592, .adv_w = 306, .box_w = 18, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 640, .adv_w = 223, .box_w = 13, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 675, .adv_w = 213, .box_w = 13, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 710, .adv_w = 327, .box_w = 20, .box_h = 23, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 768, .adv_w = 280, .box_w = 17, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 813, .adv_w = 93, .box_w = 5, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 827, .adv_w = 177, .box_w = 11, .box_h = 30, .ofs_x = 0, .ofs_y = -9},
    {.bitmap_index = 869, .adv_w = 275, .box_w = 17, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 914, .adv_w = 225, .box_w = 13, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 949, .adv_w = 322, .box_w = 19, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1002, .adv_w = 305, .box_w = 18, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1050, .adv_w = 363, .box_w = 22, .box_h = 23, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1114, .adv_w = 245, .box_w = 15, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1154, .adv_w = 363, .box_w = 22, .box_h = 30, .ofs_x = 0, .ofs_y = -8},
    {.bitmap_index = 1237, .adv_w = 266, .box_w = 16, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1279, .adv_w = 228, .box_w = 13, .box_h = 23, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1317, .adv_w = 257, .box_w = 15, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1357, .adv_w = 285, .box_w = 17, .box_h = 22, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1404, .adv_w = 334, .box_w = 20, .box_h = 22, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1459, .adv_w = 442, .box_w = 27, .box_h = 22, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1534, .adv_w = 332, .box_w = 20, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1587, .adv_w = 305, .box_w = 18, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1635, .adv_w = 304, .box_w = 18, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1683, .adv_w = 111, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1684, .adv_w = 198, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1685, .adv_w = 111, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1686, .adv_w = 172, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1687, .adv_w = 169, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1688, .adv_w = 115, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1689, .adv_w = 287, .box_w = 17, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1723, .adv_w = 287, .box_w = 17, .box_h = 22, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1770, .adv_w = 238, .box_w = 14, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1798, .adv_w = 287, .box_w = 17, .box_h = 22, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1845, .adv_w = 275, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1877, .adv_w = 176, .box_w = 11, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1908, .adv_w = 274, .box_w = 16, .box_h = 24, .ofs_x = 0, .ofs_y = -8},
    {.bitmap_index = 1956, .adv_w = 236, .box_w = 14, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1993, .adv_w = 90, .box_w = 5, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2007, .adv_w = 140, .box_w = 8, .box_h = 28, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 2035, .adv_w = 268, .box_w = 16, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2077, .adv_w = 86, .box_w = 5, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2091, .adv_w = 360, .box_w = 22, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2135, .adv_w = 223, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2161, .adv_w = 287, .box_w = 17, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2198, .adv_w = 287, .box_w = 17, .box_h = 22, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 2245, .adv_w = 287, .box_w = 17, .box_h = 22, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 2292, .adv_w = 135, .box_w = 8, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2308, .adv_w = 207, .box_w = 13, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2336, .adv_w = 195, .box_w = 12, .box_h = 22, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2369, .adv_w = 223, .box_w = 13, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2394, .adv_w = 260, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2426, .adv_w = 360, .box_w = 22, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2468, .adv_w = 276, .box_w = 17, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2500, .adv_w = 243, .box_w = 14, .box_h = 24, .ofs_x = 1, .ofs_y = -9},
    {.bitmap_index = 2542, .adv_w = 243, .box_w = 14, .box_h = 15, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 91, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 2, 3, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 5, 6, 7, 8, 9,
    10, 11, 11, 12, 13, 14, 11, 11,
    7, 15, 16, 17, 18, 19, 20, 21,
    22, 13, 23, 24, 0, 0, 0, 0,
    0, 0, 25, 26, 27, 20, 26, 28,
    29, 0, 30, 12, 31, 11, 0, 0,
    32, 26, 29, 33, 34, 35, 36, 37,
    36, 38, 39, 35
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 2, 1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 3, 0, 4, 0, 0, 0,
    4, 0, 0, 5, 0, 0, 0, 0,
    6, 0, 7, 0, 8, 9, 10, 11,
    12, 13, 14, 15, 0, 0, 0, 0,
    0, 0, 16, 10, 16, 16, 16, 17,
    16, 0, 0, 18, 0, 0, 19, 19,
    16, 19, 16, 19, 20, 21, 22, 23,
    22, 24, 25, 26
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, -59, 0, 0, 0,
    -75, 0, -77, -66, 0, -86, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -84, -19,
    -28, 0, -75, 0, -77, -19, 0, -66,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -68, 0,
    -84, 0, 0, 0, -82, 0, -54, -37,
    -73, -63, -73, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -68,
    0, -43, -75, -43, -25, 0, -82, -27,
    0, 0, 0, 0, 0, -31, -35, 0,
    0, 0, -62, -23, -80, 0, -28, 0,
    0, 0, -24, 0, -57, 0, 0, 0,
    -16, 0, -28, -21, -23, -35, -24, 0,
    0, -50, 0, 0, -12, 0, 0, -16,
    0, -20, 0, -35, -16, -24, -68, -24,
    -27, 0, 0, 0, -16, 0, -15, -18,
    -16, -16, -27, -36, 0, 0, -36, 0,
    -28, -16, 0, -16, -23, 0, -49, 0,
    -64, 0, 0, 0, -43, 13, -44, -45,
    -49, -51, -50, 0, 0, -34, 0, 0,
    0, 12, 0, -25, 0, -16, 0, -19,
    0, -18, -61, -18, -17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -16, 0,
    0, 0, -31, 0, -15, 0, 0, 0,
    -56, -12, -94, -18, -67, -18, -16, 0,
    0, 0, 0, 0, 0, 0, -16, -35,
    0, -40, -33, -40, -25, 0, 0, 0,
    -16, -45, 0, 0, 0, 12, -55, 12,
    0, 0, -16, 21, -25, -18, 0, -28,
    0, 13, 0, -24, 21, 0, 0, 19,
    -16, 0, 0, 0, 0, 0, 0, 0,
    -85, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0,
    0, 18, -18, 18, 20, 13, 0, 32,
    0, 0, 0, 0, 0, 13, 0, 0,
    22, 0, 0, 22, 0, 0, 15, 0,
    0, -68, 0, -39, -69, -39, -25, 0,
    0, 0, 0, 0, 0, 0, 0, -36,
    -35, 0, 0, 0, -44, -25, -54, 0,
    -28, 0, 0, -82, -16, -16, -72, -16,
    -18, 0, -75, 0, -103, -78, -16, -89,
    -16, 0, -31, -25, 0, 0, -45, 0,
    -72, -16, 0, -16, -63, 0, -82, 0,
    -64, 0, 0, 0, 0, 14, -21, -14,
    -32, -27, -37, 0, 0, -34, 0, 0,
    0, 0, 0, 0, 0, -16, -33, 0,
    -48, 0, -25, 0, 0, 0, -37, 13,
    -41, -30, -46, -49, -48, 0, 0, -25,
    0, 0, 0, 12, 0, -18, 0, -16,
    0, -28, 0, -26, -72, -26, -22, 0,
    -45, -14, -53, -46, 0, -58, 0, -29,
    -28, 0, 0, 0, -36, -17, -35, 0,
    -21, 0, 0, 0, -30, 0, -64, 0,
    0, -14, -16, 0, -18, -16, -23, -25,
    -27, 0, -22, -34, 0, 0, -18, 0,
    -36, -31, 0, -28, -70, -77, 0, -18,
    -78, -18, -16, 0, 0, 0, -17, -12,
    -25, -20, -33, -61, 0, -54, -49, -54,
    -25, 0, 18, -15, 0, -44, 0, 0,
    -27, 18, -46, 18, 18, 0, 0, 0,
    0, 0, 0, 0, -15, 0, 0, -19,
    19, 0, 0, 22, 0, 0, 0, -12,
    -84, -54, 0, -39, -79, -39, -38, -27,
    0, 0, 0, 0, 0, 0, -16, -65,
    -37, -46, -57, -62, -40, -37, -37, -46,
    -46, -68, -80, -42, 0, -30, -76, -30,
    -29, -22, 0, 0, 0, 0, 0, 0,
    -16, -49, -28, -46, -42, -49, -33, -28,
    -28, -37, -37, -59, -66, -68, -98, -46,
    -82, -46, -46, -33, 0, 0, 0, 0,
    0, 0, -16, -72, -46, -54, -61, -69,
    -45, -46, -46, -56, -56, -76, 0, -56,
    0, -25, -68, -25, -28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -30, -16,
    0, 0, -39, 0, -46, 0, -16, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -12, 0, -33, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -37, 0, 0, 0, 0,
    -33, -37, 0, -29, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -26, 0, -42, 0, 0,
    -17, 0, 0, 0, -16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -35,
    0, 0, 0, 0, -14, -27, 0, -17,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 15, -24, 0,
    0, 0, 0, 0, 0, 0, -85, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -52, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -43, 0, -49, 0, -16,
    -36, -17, -17, 0, -27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -33, -37, 0, -29,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -40, 0, 0, 0, 0, 0, 0,
    0, -17, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -33, 0, -9, -17, 0,
    0, -18, 0, -17, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -19, 0, 0,
    -17, 0, 0, -16, 0, -17, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -27,
    0, 0, 0, 0, 0, 0, 0, -14,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -33,
    0, -46, -25, -29, -17, 0, 0, 0,
    0, -36, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -33, 0, 0, 0, 0, -17, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 18, 0,
    0, 18, 0, 0, 15, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 39,
    .right_class_cnt     = 26,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_Font1_30 = {
#else
lv_font_t ui_font_Font1_30 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 31,          /*The maximum line height required by the font*/
    .base_line = 9,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_FONT1_30*/

