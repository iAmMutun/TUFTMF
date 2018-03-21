#pragma once
#include <cstdint>

static const uint16_t _double_quote = L'\"';

static const uint16_t _at_sign = L'@';

static const uint16_t _zero_width_space = L'\x200B';

static const uint16_t _digits[] =
{
    L'0', L'1', L'2', L'3', L'4', L'5', L'6', L'7', L'8', L'9'
};

static const uint16_t _floating_vowels[] =
{
    L'\x0E31', // ั
    L'\x0E34', // ิ
    L'\x0E35', // ี
    L'\x0E36', // ึ
    L'\x0E37', // ื
    L'\x0E47', // ็
};

static const uint16_t _floating_vowels_left[] =
{
    L'\xF710', // ั
    L'\xF701', // ิ
    L'\xF702', // ี
    L'\xF703', // ึ
    L'\xF704', // ื
    L'\xF712', // ็
};

static const uint16_t _backward_floating_vowels[] =
{
    L'\x0E33', // ำ
};

static const uint16_t _sub_vowels[] =
{
    L'\x0E38', // ุ
    L'\x0E39', // ู
    L'\x0E3A', // ฺ
};

static const uint16_t _long_tail[] =
{
    L'\x0E1B', // ป
    L'\x0E1D', // ฝ
    L'\x0E1F', // ฟ
    L'\x0E2C', // ฬ
};

static const uint16_t _tone_marker_high[] =
{
    L'\x0E48', // '
    L'\x0E49', // ้
    L'\x0E4A', // ๊
    L'\x0E4B', // ๋
    L'\x0E4C', // ์
};

static const uint16_t _tone_marker_left_low[] =
{
    L'\xF705', // '
    L'\xF706', // ้
    L'\xF707', // ๊
    L'\xF708', // ๋
    L'\xF709', // ์
};

static const uint16_t _tone_marker_low[] =
{
    L'\xF70A', // '
    L'\xF70B', // ้
    L'\xF70C', // ๊
    L'\xF70D', // ๋
    L'\xF70E', // ์
};

static const uint16_t _tone_marker_left_high[] =
{
    L'\xF713', // '
    L'\xF714', // ้
    L'\xF715', // ๊
    L'\xF716', // ๋
    L'\xF717', // ์
};

static const uint16_t _lower_foot[] =
{
    L'\x0E0D', // ญ
    L'\x0E10', // ฐ
};

static const uint16_t _lower_foot_stripped[] =
{
    L'\xF70F', // ญ
    L'\xF700', // ฐ
};

static const uint16_t _lower_vowels[] =
{
    L'\x0E38', // ุ
    L'\x0E39', // ู
    L'\x0E3A', // ฺ
};

static const uint16_t _lower_vowels_left[] =
{
    L'\xF718', // ุ
    L'\xF719', // ู
    L'\xF71A', // ฺ
};

static const uint16_t _lower_tail[] =
{
    L'\x0E0E', // ฎ
    L'\x0E0F', // ฏ
    L'\x0E24', // ฤ
    L'\x0E26', // ฦ
};
