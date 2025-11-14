// 函数: sub_595940
// 地址: 0x595940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7_2 = fconvert.t(arg1)
long double x87_r6 = fconvert.t(arg2)
x87_r6 - x87_r7_2
int32_t eax
eax.w = (x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x5}

if (p)
    return fconvert.t(fconvert.s(x87_r7_2))

return fconvert.t(fconvert.s(x87_r6))
