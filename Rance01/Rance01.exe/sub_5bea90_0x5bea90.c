// 函数: sub_5bea90
// 地址: 0x5bea90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7_2 = fconvert.t(fconvert.s(fconvert.t(**arg1)))
long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(**arg2)))
x87_r6 - x87_r7_2
float* eax
eax.w = (x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
int32_t result

if ((eax:1.b & 0x41) != 0)
    result = 0
else
    result = 1

x87_r6 - x87_r7_2
eax.w = (x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe
bool p = unimplemented  {test ah, 0x5}

if (p)
    return result

return result - 1
