// 函数: sub_40c970
// 地址: 0x40c970
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = arg1
int32_t ecx_1 = (arg1 + 3) << 4
long double x87_r7 = fconvert.t(*(ecx_1 + arg3 + 0xc))
float* ecx_2 = ecx_1 + arg3
long double x87_r6 = float.t(0)
x87_r6 - x87_r7
int32_t eax
eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
bool p = unimplemented  {test ah, 0x44}
long double x87_r7_2

if (not(p))
    x87_r7_2 = float.t(1)
else
    ecx_2[3]
    long double x87_r6_1 = float.t(1)
    x87_r7_2 = x87_r6_1 / x87_r6_1

int32_t eax_2 = neg.d(*(arg3 + 0x74))
long double x87_r6_2 = fconvert.t(0.5)
long double x87_r4 = fconvert.t(fconvert.s(x87_r7_2))
*arg2 = fconvert.s(fconvert.t(*ecx_2) * x87_r4 * float.t(*(arg3 + 0x70)) * x87_r6_2)
arg2[1] = fconvert.s(x87_r6_2 * float.t(eax_2) * fconvert.t(ecx_2[1]) * x87_r4)
arg2[2] = fconvert.s(x87_r4 * fconvert.t(ecx_2[2]))
arg2[3] = fconvert.s(fconvert.t(ecx_2[3]))
return arg2
