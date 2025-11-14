// 函数: sub_65d060
// 地址: 0x65d060
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_30
int32_t eax_1 = data_78c474 ^ &var_30
int32_t ecx = *(arg1 + 0xc0)
RECT lprc
lprc.top = *(arg1 + 0x64)
lprc.left = 0
int32_t eax_4 = GetScrollPos(*(arg1 + 0x130), *(arg1 + 0x138))
int32_t eax_5 = sub_70c710(float.t(ecx) * fconvert.t(*(arg1 + 0x70)))
int32_t ecx_1 = *(arg1 + 0xc4)
lprc.right = eax_5 - eax_4
int32_t eax_8 = GetScrollPos(*(arg1 + 0x114), *(arg1 + 0x11c))
lprc.bottom = sub_70c710(float.t(ecx_1) * fconvert.t(*(arg1 + 0x70))) - eax_8
FillRect(*(arg1 + 0xa8), &lprc, *(arg1 + 0x1b4))
int32_t eax_12 = sub_70c710(float.t(*(arg1 + 0xc0)) * fconvert.t(*(arg1 + 0x70)))
long double x87_r7_6 = float.t(*(arg1 + 0xc4))
*(arg1 + 0x140) = eax_12
*(arg1 + 0x124) = sub_70c710(x87_r7_6 * fconvert.t(*(arg1 + 0x70)))
sub_64d800(arg1 + 0x12c)
sub_64d800(arg1 + 0x110)
long double x87_r7_8 = fconvert.t(*(arg1 + 0x70))
long double x87_r6 = float.t(1)
x87_r6 - x87_r7_8
int32_t eax_14
eax_14.w = (x87_r6 < x87_r7_8 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_8) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7_8 ? 1 : 0) << 0xe
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    int32_t y1 = GetScrollPos(*(arg1 + 0x114), *(arg1 + 0x11c))
    int32_t x1 = GetScrollPos(*(arg1 + 0x130), *(arg1 + 0x138))
    BOOL eax_25 = BitBlt(*(arg1 + 0xa8), 0, *(arg1 + 0x64), *(arg1 + 0xc0), *(arg1 + 0xc4), 
        *(arg1 + 0xc8), x1, y1, SRCCOPY)
    sub_6b4885(eax_1 ^ &var_30)
    return eax_25

int32_t mode = SetStretchBltMode(*(arg1 + 0xa8), COLORONCOLOR)
int32_t hSrc = *(arg1 + 0xc4)
int32_t wSrc = *(arg1 + 0xc0)
int32_t eax_17 = GetScrollPos(*(arg1 + 0x114), *(arg1 + 0x11c))
int32_t eax_19 = GetScrollPos(*(arg1 + 0x130), *(arg1 + 0x138))
int32_t ySrc = sub_70c710(float.t(eax_17) / fconvert.t(*(arg1 + 0x70)))
int32_t xSrc = sub_70c710(float.t(eax_19) / fconvert.t(*(arg1 + 0x70)))
HDC hdcSrc = *(arg1 + 0xc8)
int32_t hDest = sub_70c710(float.t(*(arg1 + 0xc4)) * fconvert.t(*(arg1 + 0x70)))
int32_t wDest = sub_70c710(float.t(*(arg1 + 0xc0)) * fconvert.t(*(arg1 + 0x70)))
StretchBlt(*(arg1 + 0xa8), 0, *(arg1 + 0x64), wDest, hDest, hdcSrc, xSrc, ySrc, wSrc, hSrc, SRCCOPY)
int32_t eax_21 = SetStretchBltMode(*(arg1 + 0xa8), mode)
sub_6b4885(eax_1 ^ &var_30)
return eax_21
