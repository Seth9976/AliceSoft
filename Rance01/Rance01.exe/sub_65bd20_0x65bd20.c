// 函数: sub_65bd20
// 地址: 0x65bd20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_58
int32_t eax_1 = data_78c474 ^ &var_58
HBRUSH eax_2 = CreateSolidBrush(0xc8c8c8)
RECT lprc
lprc.left = 0
lprc.top = 0
lprc.right = *(arg1 + 0xa0)
lprc.bottom = *(arg1 + 0xa4)
FillRect(*(arg1 + 0xa8), &lprc, eax_2)
DeleteObject(eax_2)
float var_50 = fconvert.s(float.t(0))
WINDOWPLACEMENT lpwndpl
GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
float var_4c = fconvert.s(float.t(lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left)
    / float.t(*(arg1 + 0x88)))
GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
long double x87_r7_5 = fconvert.t(var_4c)
long double x87_r6 = fconvert.t(fconvert.s(
    float.t(lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top)
    / float.t(*(arg1 + 0x8c))))
x87_r6 - x87_r7_5
int32_t eax_8
eax_8.w = (x87_r6 < x87_r7_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_5) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7_5 ? 1 : 0) << 0xe | 0x3000

if ((eax_8:1.b & 1) == 0)
    var_50 = fconvert.s(x87_r7_5)

x87_r6 - x87_r7_5
eax_8.w = (x87_r6 < x87_r7_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_5) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7_5 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x41}

if (not(p))
    var_50 = fconvert.s(x87_r7_5)

long double x87_r7_7 = float.t(1)
long double temp1 = fconvert.t(var_50)
x87_r7_7 - temp1
eax_8.w = (x87_r7_7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_7, temp1) ? 1 : 0) << 0xa
    | (x87_r7_7 == temp1 ? 1 : 0) << 0xe | 0x3800
bool p_1 = unimplemented  {test ah, 0x5}

if (not(p_1))
    var_50 = fconvert.s(x87_r7_7)

HDC edi_1 = *(arg1 + 0xa8)
HDC hdcSrc = *(arg1 + 0xc8)
int32_t mode = SetStretchBltMode(edi_1, COLORONCOLOR)
int32_t hSrc = *(arg1 + 0xc4)
int32_t wSrc = *(arg1 + 0xc0)
long double x87_r6_2 = fconvert.t(var_50)
int32_t hDest = sub_70c710(float.t(hSrc) * x87_r6_2)
int32_t wDest = sub_70c710(x87_r6_2 * float.t(wSrc))
int32_t eax_12
int32_t edx_3
edx_3:eax_12 = sx.q(*(arg1 + 0xa4) - hDest)
int32_t eax_17
int32_t edx_4
edx_4:eax_17 = sx.q(*(arg1 + 0xa0) - wDest)
StretchBlt(edi_1, (eax_17 - edx_4) s>> 1, (eax_12 - edx_3) s>> 1, wDest, hDest, hdcSrc, 0, 0, wSrc, 
    hSrc, SRCCOPY)
int32_t result = SetStretchBltMode(edi_1, mode)
sub_6b4885(eax_1 ^ &var_58)
return result
