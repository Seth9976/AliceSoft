// 函数: sub_65ccc0
// 地址: 0x65ccc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0
int32_t var_8 = 0x9c97
int16_t var_4 = 0x205
sub_64db40(&var_c, arg1 + 0x150)
var_c = 1
int32_t var_8_1 = 0x9c98
int16_t var_4_1 = 0x205
sub_64db40(&var_c, arg1 + 0x150)
var_c = 2
int32_t var_8_2 = 0
int16_t var_4_2 = 0x104
sub_64db40(&var_c, arg1 + 0x150)
var_c = 3
int32_t var_8_3 = 0x9c9a
int16_t var_4_3 = 4
sub_64db40(&var_c, arg1 + 0x150)
var_c = 4
int32_t var_8_4 = 0x9c9b
int16_t var_4_4 = 4
sub_64db40(&var_c, arg1 + 0x150)
var_c = 5
int32_t var_8_5 = 0
int16_t var_4_5 = 0x104
sub_64db40(&var_c, arg1 + 0x150)
var_c = 6
int32_t var_8_6 = 0x9ca0
int16_t var_4_6 = 0x205
sub_64db40(&var_c, arg1 + 0x150)
sub_64da50(arg1 + 0x148, arg2, *(arg1 + 0x18))
sub_65de80(arg1)
int32_t ecx = *(arg1 + 0x60)
*(arg1 + 0x114) = arg2
*(arg1 + 0x130) = arg2
*(arg1 + 0x188) = ecx
sub_64d730(arg1 + 0x174)
HGDIOBJ ho = *(arg1 + 0x1b4)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0x1b4) = 0

*(arg1 + 0x1b8) = 0xff
COLORREF color = zx.d(*(arg1 + 0x1b8))
*(arg1 + 0x1bc) = 0
*(arg1 + 0x1c0) = 0
*(arg1 + 0x1b4) = CreateSolidBrush(color)
HGDIOBJ ho_1 = *(arg1 + 0x1c8)

if (ho_1 != 0)
    DeleteObject(ho_1)
    *(arg1 + 0x1c8) = 0

*(arg1 + 0x1cc) = 0xc8
uint32_t ecx_2 = zx.d(*(arg1 + 0x1cc))
*(arg1 + 0x1d0) = 0xc8
uint32_t edx = zx.d(*(arg1 + 0x1d0))
*(arg1 + 0x1d4) = 0xc8
*(arg1 + 0x1c8) = CreateSolidBrush((0xc800 | edx) << 8 | ecx_2)
return 0
