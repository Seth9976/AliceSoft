// 函数: sub_595780
// 地址: 0x595780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double result = float.t(0)
long double x87_r6 = fconvert.t(arg1)
x87_r6 - result
int32_t eax
eax.w = (x87_r6 < result ? 1 : 0) << 8 | (is_unordered.t(x87_r6, result) ? 1 : 0) << 0xa
    | (x87_r6 == result ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x5}

if (p)
    return result

return fneg(result)
