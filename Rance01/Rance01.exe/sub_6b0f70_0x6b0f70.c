// 函数: sub_6b0f70
// 地址: 0x6b0f70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_7c
int32_t eax_1 = data_78c474 ^ &var_7c
PAINTSTRUCT paint
BeginPaint(arg2, &paint)
var_68
int32_t edx = var_68:4.d
int32_t eax_2 = var_68:0xc.d
int32_t ecx = var_68.d
int32_t ebx = var_68:8.d
RECT lprc
lprc.top = edx
RECT lprc_1
lprc_1.top = edx
lprc_1.bottom = eax_2
lprc.bottom = eax_2
int32_t eax_3
int32_t edx_1
edx_1:eax_3 = sx.q(eax_2)
int32_t eax_5 = (eax_3 + (edx_1 & 3)) s>> 2
lprc.left = ecx
lprc_1.left = ecx
lprc_1.bottom = eax_5
lprc.top = eax_5 * 3
lprc.right = ebx
lprc_1.right = ebx
HBRUSH eax_7 =
    CreateSolidBrush((zx.d(*(arg1 + 0x9a)) << 8 | zx.d(*(arg1 + 0x99))) << 8 | zx.d(*(arg1 + 0x98)))
HBRUSH var_78 = CreateSolidBrush(
    (zx.d(*(arg1 + 0x9a) - 0x14) << 8 | zx.d(*(arg1 + 0x99) - 0x14)) << 8
    | zx.d(*(arg1 + 0x98) - 0x14))
HBRUSH eax_13
eax_13.b = *(arg1 + 0x9a)
eax_13.b += 0x14
HBRUSH eax_16 = CreateSolidBrush((zx.d(eax_13.b) << 8 | zx.d(*(arg1 + 0x99) + 0x14)) << 8
    | zx.d(*(arg1 + 0x98) + 0x14))
FillRect(*(arg1 + 0x6c), &var_68, eax_7)
FillRect(*(arg1 + 0x6c), &lprc, var_78)
FillRect(*(arg1 + 0x6c), &lprc_1, eax_16)
DeleteObject(eax_7)
DeleteObject(var_78)
DeleteObject(eax_16)
BitBlt(paint.hdc, 0, 0, *(arg1 + 0x64), *(arg1 + 0x68), *(arg1 + 0x6c), 0, 0, SRCCOPY)
EndPaint(arg2, &paint)
sub_6b4885(eax_1 ^ &var_7c)
return 0
