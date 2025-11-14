// 函数: sub_4b4800
// 地址: 0x4b4800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = fconvert.t(*(arg1 + 0x88))
long double x87_r6 = float.t(0)
x87_r6 - x87_r7
int32_t eax
eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    *(arg1 + 0x7c) = fconvert.s(x87_r7)
    *(arg1 + 0x80) = fconvert.s(x87_r7)
    *(arg1 + 0x84) = fconvert.s(x87_r7)
    return eax

long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x88))))
float var_8 = fconvert.s(fconvert.t(*(arg1 + 0x70)) / x87_r6_1)
long double x87_r7_5 = fconvert.t(*(arg1 + 0x74)) / x87_r6_1
*(arg1 + 0x7c) = fconvert.s(fconvert.t(*(arg1 + 0x6c)) / x87_r6_1)
*(arg1 + 0x80) = var_8
float var_4 = fconvert.s(x87_r7_5)
*(arg1 + 0x84) = var_4
return var_4
