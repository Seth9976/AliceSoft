// 函数: sub_51e2a0
// 地址: 0x51e2a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_3 = ecx
long double x87_r7 = fconvert.t(arg1[1])
int32_t var_8 = ecx
long double x87_r6 = fconvert.t(*arg1)
long double x87_r5 = fconvert.t(arg1[2])
int32_t eax
long double st0
st0, eax = sub_4d9250(fconvert.s(fconvert.t(fconvert.s(x87_r7 * x87_r7 + x87_r6 * x87_r6
    + x87_r5 * x87_r5))))
long double x87_r7_6 = fconvert.t(fconvert.s(st0))
long double x87_r5_2 = float.t(0)
x87_r5_2 - x87_r7_6
eax.w = (x87_r5_2 < x87_r7_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_2, x87_r7_6) ? 1 : 0) << 0xa
    | (x87_r5_2 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    int32_t ecx_2 = arg1[1]
    int32_t edx = arg1[2]
    *arg2 = *arg1
    arg2[1] = ecx_2
    arg2[2] = edx
    return arg2

long double x87_r6_5 = float.t(1)
long double x87_r6_6 = fconvert.t(fconvert.s(x87_r6_5 / x87_r6_5))
*arg2 = fconvert.s(fconvert.t(*arg1) * x87_r6_6)
arg2[1] = fconvert.s(x87_r6_6 * fconvert.t(arg1[1]))
arg2[2] = fconvert.s(x87_r6_6 * fconvert.t(arg1[2]))
return arg2
