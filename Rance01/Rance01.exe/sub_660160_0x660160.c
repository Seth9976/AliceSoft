// 函数: sub_660160
// 地址: 0x660160
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_3 = ecx
long double x87_r7 = fconvert.t(arg1[1])
int32_t var_8 = ecx
long double x87_r6 = fconvert.t(*arg1)
long double x87_r5 = fconvert.t(arg1[2])
int32_t result
long double st0
st0, result = sub_4d9250(fconvert.s(fconvert.t(fconvert.s(x87_r7 * x87_r7 + x87_r6 * x87_r6
    + x87_r5 * x87_r5))))
long double x87_r7_6 = fconvert.t(fconvert.s(st0))
long double x87_r5_2 = float.t(0)
x87_r5_2 - x87_r7_6
result.w = (x87_r5_2 < x87_r7_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_2, x87_r7_6) ? 1 : 0) << 0xa
    | (x87_r5_2 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    return result

long double x87_r6_5 = float.t(1)
long double x87_r6_6 = fconvert.t(fconvert.s(x87_r6_5 / x87_r6_5))
*arg1 = fconvert.s(fconvert.t(*arg1) * x87_r6_6)
arg1[1] = fconvert.s(x87_r6_6 * fconvert.t(arg1[1]))
arg1[2] = fconvert.s(x87_r6_6 * fconvert.t(arg1[2]))
return result
