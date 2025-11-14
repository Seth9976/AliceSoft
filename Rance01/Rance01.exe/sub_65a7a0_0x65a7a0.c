// 函数: sub_65a7a0
// 地址: 0x65a7a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HBRUSH ho
int32_t eax_1 = data_78c474 ^ &ho
PAINTSTRUCT paint
BeginPaint(arg2, &paint)
int32_t bottom = paint.rcPaint.bottom
RECT lprc
lprc.top = paint.rcPaint.top
int32_t right = paint.rcPaint.right
lprc.left = paint.rcPaint.left
lprc.right = right
int32_t eax_4
int32_t edx_1
edx_1:eax_4 = sx.q(right)
int32_t eax_6
int32_t edx_3
edx_3:eax_6 = sx.q(bottom)
lprc.bottom = bottom
int32_t edi_1 = ((edx_1 & 3) + eax_4) s>> 2
int32_t ebx_1 = ((edx_3 & 3) + eax_6) s>> 2
HBRUSH hbr =
    CreateSolidBrush((zx.d(*(arg1 + 0x9a)) << 8 | zx.d(*(arg1 + 0x99))) << 8 | zx.d(*(arg1 + 0x98)))
HDC hDC = *(arg1 + 0x6c)
ho = hbr
FillRect(hDC, &lprc, hbr)
DeleteObject(ho)
POINT pptl
__builtin_memset(&pptl, 0, 8)
int32_t var_24 = edi_1
int32_t var_20 = 0
int32_t var_1c = edi_1
int32_t var_18 = ebx_1
int32_t var_14 = 0
int32_t var_10 = ebx_1
HRGN hrgn = CreatePolygonRgn(&pptl, 4, WINDING)
HBRUSH hbr_1 = CreateSolidBrush(
    (zx.d(*(arg1 + 0x9a) + 0x14) << 8 | zx.d(*(arg1 + 0x99) + 0x14)) << 8
    | zx.d(*(arg1 + 0x98) + 0x14))
HDC hdc = *(arg1 + 0x6c)
ho = hbr_1
FillRgn(hdc, hrgn, hbr_1)
DeleteObject(ho)
int32_t eax_15 = edi_1 * 3
int32_t ecx_7 = ebx_1 * 3
pptl.x = eax_15
int32_t var_14_1 = eax_15
int32_t edi_2 = edi_1 * 5
int32_t ebx_2 = ebx_1 * 5
pptl.y = ecx_7
int32_t var_24_1 = edi_2
int32_t var_20_1 = ecx_7
int32_t var_1c_1 = edi_2
int32_t var_18_1 = ebx_2
int32_t var_10_1 = ebx_2
HRGN hrgn_1 = CreatePolygonRgn(&pptl, 4, WINDING)
HBRUSH eax_18 = CreateSolidBrush(
    (zx.d(*(arg1 + 0x9a) - 0x14) << 8 | zx.d(*(arg1 + 0x99) - 0x14)) << 8
    | zx.d(*(arg1 + 0x98) - 0x14))
FillRgn(*(arg1 + 0x6c), hrgn_1, eax_18)
DeleteObject(eax_18)
BitBlt(paint.hdc, 0, 0, *(arg1 + 0x64), *(arg1 + 0x68), *(arg1 + 0x6c), 0, 0, SRCCOPY)
EndPaint(arg2, &paint)
sub_6b4885(eax_1 ^ &ho)
return 0
