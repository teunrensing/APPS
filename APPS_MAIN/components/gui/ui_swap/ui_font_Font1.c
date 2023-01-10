/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:\Users\jordi\Documents\SquareLine\assets\Typographica-Blp5.ttf -o C:\Users\jordi\Documents\SquareLine\assets\ui_font_Font1.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_FONT1
#define UI_FONT_FONT1 1
#endif

#if UI_FONT_FONT1

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xf8, 0x1f, 0x80,

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
    0xfc,

    /* U+002F "/" */
    0x0,

    /* U+0030 "0" */
    0x3c, 0x7e, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0x7e, 0x3c,

    /* U+0031 "1" */
    0xff, 0xce, 0x73, 0x9c, 0xe7, 0x39, 0xce,

    /* U+0032 "2" */
    0x7c, 0xfe, 0x67, 0x7, 0x7, 0xf, 0x1e, 0x1c,
    0x38, 0x7f, 0xff,

    /* U+0033 "3" */
    0x3c, 0xff, 0x47, 0x7, 0x3e, 0x3e, 0x7, 0x7,
    0x47, 0xfe, 0x7c,

    /* U+0034 "4" */
    0xee, 0x77, 0x3b, 0x9d, 0xce, 0xe7, 0xff, 0xfe,
    0x1c, 0xe, 0x7, 0x3, 0x80,

    /* U+0035 "5" */
    0x7e, 0x7e, 0x60, 0x7c, 0x7e, 0x4f, 0x7, 0x7,
    0x4f, 0x7e, 0x7c,

    /* U+0036 "6" */
    0xe, 0x1c, 0x38, 0x70, 0x7e, 0xff, 0xe7, 0xe7,
    0xe7, 0x7e, 0x3c,

    /* U+0037 "7" */
    0xff, 0xfc, 0x38, 0xe1, 0xc3, 0x8e, 0x1c, 0x38,
    0xe1, 0xc0,

    /* U+0038 "8" */
    0x3c, 0xff, 0xe7, 0xe7, 0x7e, 0x7e, 0xff, 0xe7,
    0xe7, 0x7e, 0x3c,

    /* U+0039 "9" */
    0x3c, 0x7e, 0xe7, 0xe7, 0xe7, 0xff, 0x7e, 0xe,
    0x1c, 0x38, 0x70,

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
    0x0, 0x0, 0x60, 0x6, 0x0, 0xf0, 0xf, 0x81,
    0xf8, 0x19, 0xc3, 0xfc, 0x7f, 0xe7, 0x6, 0xe0,
    0x70,

    /* U+0042 "B" */
    0xfc, 0xfe, 0xe7, 0xe7, 0xe7, 0xfe, 0xfe, 0xe7,
    0xe7, 0xff, 0xfe,

    /* U+0043 "C" */
    0x1f, 0xf, 0xf7, 0x1b, 0xc0, 0xe0, 0x38, 0xe,
    0x3, 0xc0, 0x71, 0x8f, 0xf1, 0xf0,

    /* U+0044 "D" */
    0xfe, 0x3f, 0xce, 0x7b, 0x8f, 0xe1, 0xf8, 0x7e,
    0x1f, 0x8f, 0xe7, 0xbf, 0xcf, 0xe0,

    /* U+0045 "E" */
    0xff, 0xff, 0x87, 0xe, 0x1f, 0x3e, 0x70, 0xe1,
    0xff, 0xf8,

    /* U+0046 "F" */
    0xff, 0xff, 0x87, 0xe, 0x1f, 0x3e, 0x70, 0xe1,
    0xc3, 0x80,

    /* U+0047 "G" */
    0xf, 0x87, 0xf9, 0xe2, 0x78, 0xe, 0x1, 0xc7,
    0xf8, 0x7f, 0x87, 0x78, 0xe7, 0xfc, 0x7f, 0x0,

    /* U+0048 "H" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7f, 0xff, 0xff, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xe0,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0x80,

    /* U+004A "J" */
    0x1c, 0x71, 0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xcf, 0x7b, 0xce, 0x0,

    /* U+004B "K" */
    0xe3, 0xf3, 0xb9, 0xdd, 0xcf, 0xc7, 0xe3, 0xf1,
    0xdc, 0xe7, 0x73, 0xb8, 0xe0,

    /* U+004C "L" */
    0xe1, 0xc3, 0x87, 0xe, 0x1c, 0x38, 0x70, 0xe1,
    0xff, 0xf8,

    /* U+004D "M" */
    0x0, 0x30, 0x3e, 0x1f, 0xcf, 0xff, 0xff, 0xff,
    0xff, 0xb7, 0xe1, 0xf8, 0x7e, 0x1c,

    /* U+004E "N" */
    0x81, 0xf0, 0x7f, 0x1f, 0xe7, 0xfd, 0xff, 0xfe,
    0xff, 0x8f, 0xe1, 0xf8, 0x3e, 0x4,

    /* U+004F "O" */
    0x1f, 0x83, 0xfc, 0x79, 0xef, 0xf, 0xe0, 0x7e,
    0x7, 0xe0, 0x7f, 0xf, 0x70, 0xe3, 0xfc, 0xf,
    0x0,

    /* U+0050 "P" */
    0xfc, 0xfe, 0xe7, 0xe7, 0xe7, 0xfe, 0xfc, 0xe0,
    0xe0, 0xe0, 0xe0,

    /* U+0051 "Q" */
    0x1f, 0x83, 0xfc, 0x70, 0xef, 0xf, 0xe0, 0x7e,
    0x7, 0xe0, 0x7f, 0xf, 0x7f, 0xe3, 0xfc, 0x2f,
    0x87, 0xfc, 0x3f, 0xe1, 0xc4, 0x0, 0x0,

    /* U+0052 "R" */
    0xfc, 0x7f, 0x39, 0xdc, 0xee, 0x77, 0xf3, 0xf1,
    0xdc, 0xef, 0x73, 0xb9, 0xe0,

    /* U+0053 "S" */
    0x3c, 0xfb, 0x97, 0xf, 0x8f, 0xcf, 0x87, 0x4f,
    0xf9, 0xe0,

    /* U+0054 "T" */
    0xff, 0x3f, 0x87, 0x3, 0x81, 0xc0, 0xe0, 0x70,
    0x38, 0x1c, 0xe, 0x7, 0x0,

    /* U+0055 "U" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xbf, 0x8f, 0x80,

    /* U+0056 "V" */
    0xe0, 0xcc, 0x19, 0xc7, 0x19, 0xc3, 0xb8, 0x3e,
    0x7, 0xc0, 0x70, 0xe, 0x0, 0x80, 0x10, 0x0,

    /* U+0057 "W" */
    0xe0, 0x1d, 0x8c, 0x77, 0x31, 0x9d, 0xee, 0x37,
    0xb8, 0xff, 0xc3, 0xcf, 0x7, 0x38, 0x18, 0x60,
    0x61, 0x80, 0x0, 0x0,

    /* U+0058 "X" */
    0xe1, 0xce, 0x38, 0xee, 0x1f, 0x81, 0xe0, 0x1c,
    0x7, 0xc1, 0xf8, 0x3b, 0x8e, 0x3b, 0x87, 0x0,

    /* U+0059 "Y" */
    0xe3, 0xfb, 0xdd, 0xc7, 0xc3, 0xe0, 0xe0, 0x70,
    0x38, 0x1c, 0xe, 0x7, 0x0,

    /* U+005A "Z" */
    0x7f, 0xbf, 0xc1, 0xc1, 0xc0, 0xe0, 0xe0, 0xf0,
    0x70, 0x70, 0x3f, 0xff, 0xe0,

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
    0x3e, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0xbd, 0xfe,
    0x7f,

    /* U+0062 "b" */
    0xe0, 0x70, 0x38, 0x1f, 0xcf, 0xf7, 0xbf, 0x8f,
    0xc7, 0xf7, 0xbf, 0x8f, 0x80,

    /* U+0063 "c" */
    0x3e, 0x7e, 0xf0, 0xe0, 0xe0, 0xf0, 0x7f, 0x3e,

    /* U+0064 "d" */
    0x3, 0x81, 0xc0, 0xe7, 0xf7, 0xff, 0xbf, 0x8f,
    0xc7, 0xf7, 0xbf, 0x8f, 0x80,

    /* U+0065 "e" */
    0x3e, 0x3f, 0xbf, 0xff, 0xfe, 0x7, 0x1, 0xf8,
    0x7c,

    /* U+0066 "f" */
    0x3b, 0xdd, 0xff, 0xb9, 0xce, 0x73, 0x9c,

    /* U+0067 "g" */
    0x3e, 0x3f, 0xbc, 0xfc, 0x3e, 0x1f, 0x9d, 0xfe,
    0x7f, 0x1, 0xb9, 0xdf, 0xc7, 0xc0,

    /* U+0068 "h" */
    0xe0, 0xe0, 0xe0, 0xfe, 0xff, 0xe7, 0xe7, 0xe7,
    0xe7, 0xe7, 0xe7,

    /* U+0069 "i" */
    0xd8, 0x7f, 0xff, 0xff, 0x80,

    /* U+006A "j" */
    0x31, 0x80, 0x73, 0x9c, 0xe7, 0x39, 0xcf, 0xf7,
    0x0,

    /* U+006B "k" */
    0xe0, 0x70, 0x38, 0x1c, 0xee, 0xe7, 0xe3, 0xf1,
    0xf8, 0xee, 0x73, 0xb8, 0xe0,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xff, 0x80,

    /* U+006D "m" */
    0x7b, 0xdf, 0xff, 0xbb, 0xf7, 0x7e, 0xef, 0xdd,
    0xfb, 0xbf, 0x77,

    /* U+006E "n" */
    0x7d, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xf7,

    /* U+006F "o" */
    0x3e, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0xbd, 0xfc,
    0x7c,

    /* U+0070 "p" */
    0x3e, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0xbf, 0xfd,
    0xfc, 0xe0, 0x70, 0x38, 0x0,

    /* U+0071 "q" */
    0x3e, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0xbd, 0xfe,
    0x7f, 0x3, 0x81, 0xc0, 0xe0,

    /* U+0072 "r" */
    0x7f, 0xee, 0xee, 0xee,

    /* U+0073 "s" */
    0x7d, 0xfb, 0x87, 0xc7, 0xe1, 0xff, 0xbe,

    /* U+0074 "t" */
    0x38, 0x70, 0xe3, 0xff, 0xc7, 0xe, 0x1c, 0x38,
    0x7c, 0x70,

    /* U+0075 "u" */
    0xef, 0xdf, 0xbf, 0x7e, 0xfd, 0xff, 0xbe,

    /* U+0076 "v" */
    0xe7, 0x67, 0x7e, 0x3c, 0x3c, 0x18, 0x18, 0x0,

    /* U+0077 "w" */
    0xee, 0xfd, 0xdf, 0xbb, 0xf7, 0x7e, 0xef, 0xdd,
    0xff, 0xfb, 0xde,

    /* U+0078 "x" */
    0x63, 0x3b, 0x8f, 0x83, 0x83, 0xc1, 0xf1, 0xdd,
    0xce,

    /* U+0079 "y" */
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xf7, 0xff, 0x7f,
    0x7, 0x67, 0xfe, 0x7c,

    /* U+007A "z" */
    0x7e, 0x7e, 0x1c, 0x1c, 0x38, 0x70, 0x7f, 0xfe
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 33, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 58, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 84, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 133, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 104, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9, .adv_w = 152, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 138, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11, .adv_w = 37, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 77, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13, .adv_w = 77, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 87, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 134, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 50, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 85, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 51, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 83, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 136, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 68, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 38, .adv_w = 138, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 49, .adv_w = 136, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 141, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 129, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 136, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 135, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 136, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 51, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 53, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 162, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 115, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 162, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 120, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 133, .adv_w = 288, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 202, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 136, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 157, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 163, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 119, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 114, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 174, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 150, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 50, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 94, .box_w = 6, .box_h = 15, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 256, .adv_w = 147, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 172, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 293, .adv_w = 163, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 307, .adv_w = 194, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 324, .adv_w = 131, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 194, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 358, .adv_w = 142, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 371, .adv_w = 122, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 137, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 152, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 407, .adv_w = 178, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 236, .box_w = 14, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 443, .adv_w = 177, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 459, .adv_w = 163, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 472, .adv_w = 162, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 485, .adv_w = 59, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 486, .adv_w = 106, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 59, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 92, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 90, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 490, .adv_w = 61, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 491, .adv_w = 153, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 153, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 513, .adv_w = 127, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 153, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 534, .adv_w = 147, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 543, .adv_w = 94, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 146, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 564, .adv_w = 126, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 575, .adv_w = 48, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 580, .adv_w = 75, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 589, .adv_w = 143, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 602, .adv_w = 46, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 607, .adv_w = 192, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 618, .adv_w = 119, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 153, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 634, .adv_w = 153, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 647, .adv_w = 153, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 660, .adv_w = 72, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 664, .adv_w = 111, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 104, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 681, .adv_w = 119, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 688, .adv_w = 139, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 192, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 707, .adv_w = 147, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 716, .adv_w = 130, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 728, .adv_w = 129, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0}
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
    0, 0, 0, 0, -31, 0, 0, 0,
    -40, 0, -41, -35, 0, -46, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -45, -10,
    -15, 0, -40, 0, -41, -10, 0, -35,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -36, 0,
    -45, 0, 0, 0, -44, 0, -29, -20,
    -39, -34, -39, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -36,
    0, -23, -40, -23, -13, 0, -44, -14,
    0, 0, 0, 0, 0, -16, -19, 0,
    0, 0, -33, -12, -43, 0, -15, 0,
    0, 0, -13, 0, -30, 0, 0, 0,
    -9, 0, -15, -11, -12, -19, -13, 0,
    0, -27, 0, 0, -6, 0, 0, -9,
    0, -10, 0, -19, -8, -13, -36, -13,
    -14, 0, 0, 0, -8, 0, -8, -10,
    -8, -8, -14, -19, 0, 0, -19, 0,
    -15, -8, 0, -8, -12, 0, -26, 0,
    -34, 0, 0, 0, -23, 7, -23, -24,
    -26, -27, -26, 0, 0, -18, 0, 0,
    0, 6, 0, -13, 0, -9, 0, -10,
    0, -10, -33, -10, -9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -8, 0,
    0, 0, -16, 0, -8, 0, 0, 0,
    -30, -6, -50, -10, -36, -10, -8, 0,
    0, 0, 0, 0, 0, 0, -9, -19,
    0, -21, -18, -21, -13, 0, 0, 0,
    -8, -24, 0, 0, 0, 6, -29, 6,
    0, 0, -9, 11, -13, -10, 0, -15,
    0, 7, 0, -13, 11, 0, 0, 10,
    -8, 0, 0, 0, 0, 0, 0, 0,
    -45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 0, 0,
    0, 10, -10, 10, 11, 7, 0, 17,
    0, 0, 0, 0, 0, 7, 0, 0,
    12, 0, 0, 12, 0, 0, 8, 0,
    0, -36, 0, -21, -37, -21, -13, 0,
    0, 0, 0, 0, 0, 0, 0, -19,
    -19, 0, 0, 0, -23, -13, -29, 0,
    -15, 0, 0, -44, -9, -8, -39, -8,
    -10, 0, -40, 0, -55, -41, -9, -47,
    -9, 0, -16, -13, 0, 0, -24, 0,
    -38, -9, 0, -9, -34, 0, -44, 0,
    -34, 0, 0, 0, 0, 8, -11, -8,
    -17, -15, -20, 0, 0, -18, 0, 0,
    0, 0, 0, 0, 0, -9, -17, 0,
    -26, 0, -13, 0, 0, 0, -20, 7,
    -22, -16, -25, -26, -26, 0, 0, -13,
    0, 0, 0, 6, 0, -10, 0, -9,
    0, -15, 0, -14, -39, -14, -12, 0,
    -24, -8, -28, -25, 0, -31, 0, -16,
    -15, 0, 0, 0, -19, -9, -19, 0,
    -11, 0, 0, 0, -16, 0, -34, 0,
    0, -8, -8, 0, -10, -9, -12, -13,
    -14, 0, -11, -18, 0, 0, -10, 0,
    -19, -17, 0, -15, -37, -41, 0, -10,
    -41, -10, -8, 0, 0, 0, -9, -7,
    -13, -11, -18, -32, 0, -29, -26, -29,
    -13, 0, 10, -8, 0, -23, 0, 0,
    -14, 10, -25, 10, 9, 0, 0, 0,
    0, 0, 0, 0, -8, 0, 0, -10,
    10, 0, 0, 12, 0, 0, 0, -6,
    -45, -29, 0, -21, -42, -21, -20, -14,
    0, 0, 0, 0, 0, 0, -9, -35,
    -20, -25, -30, -33, -21, -20, -20, -25,
    -25, -36, -42, -22, 0, -16, -40, -16,
    -15, -12, 0, 0, 0, 0, 0, 0,
    -9, -26, -15, -25, -22, -26, -18, -15,
    -15, -20, -20, -31, -35, -36, -52, -24,
    -44, -24, -24, -17, 0, 0, 0, 0,
    0, 0, -9, -38, -25, -29, -32, -37,
    -24, -25, -25, -30, -30, -40, 0, -30,
    0, -13, -36, -13, -15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -16, -8,
    0, 0, -21, 0, -25, 0, -9, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -6, 0, -17, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -20, 0, 0, 0, 0,
    -17, -19, 0, -15, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -14, 0, -22, 0, 0,
    -9, 0, 0, 0, -9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -19,
    0, 0, 0, 0, -7, -14, 0, -9,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 8, -13, 0,
    0, 0, 0, 0, 0, 0, -45, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -27, 0, 0, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -23, 0, -26, 0, -9,
    -19, -9, -9, 0, -14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -17, -19, 0, -15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -21, 0, 0, 0, 0, 0, 0,
    0, -9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -17, 0, -5, -9, 0,
    0, -10, 0, -9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -10, 0, 0,
    -9, 0, 0, -9, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -14,
    0, 0, 0, 0, 0, 0, 0, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -18,
    0, -25, -13, -15, -9, 0, 0, 0,
    0, -19, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -17, 0, 0, 0, 0, -9, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0,
    0, 9, 0, 0, 8, 0
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
const lv_font_t ui_font_Font1 = {
#else
lv_font_t ui_font_Font1 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 15,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_FONT1*/

