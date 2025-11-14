// 函数: sub_42c0f0
// 地址: 0x42c0f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = sub_660160(arg1)
*arg2 += 1

if (*arg2 s>= 0x209)
    sub_595240(ecx, arg2)
    *arg2 = 0

int32_t eax = *arg2
int32_t ecx_1 = arg2[eax + 1]
long double x87_r7 = float.t(arg2[eax + 1])

if (ecx_1 s< 0)
    x87_r7 = x87_r7 + fconvert.t(4294967296.0)

long double x87_r7_7 = float.t(0)
long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r7 / fconvert.t(4294967295.0)))
    * fconvert.t(arg3) * fconvert.t(3.1415927410125732) / fconvert.t(180.0) * fconvert.t(0.5)))
x87_r6 - x87_r7_7
eax.w = (x87_r6 < x87_r7_7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_7) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7_7 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x41}

if (not(p))
    return eax

int32_t var_1c = ecx_1
int32_t edx_2
long double st0
st0, edx_2 = sub_42a880(fconvert.s(x87_r7_7))
long double x87_r7_9 = float.t(0)
int32_t i = 0
float var_c = fconvert.s(x87_r7_9)
float var_8 = fconvert.s(x87_r7_9)
float var_4 = fconvert.s(x87_r7_9)
int32_t eax_2

do
    eax_2, edx_2 = sub_42c200(&var_c, edx_2, arg2)
    long double x87_r7_14 = fconvert.t(fconvert.s(fconvert.t(*arg1) * fconvert.t(var_c)
        + fconvert.t(arg1[1]) * fconvert.t(var_8) + fconvert.t(arg1[2]) * fconvert.t(var_4)))
    long double x87_r6_5 = fconvert.t(fconvert.s(st0))
    x87_r6_5 - x87_r7_14
    eax_2.w = (x87_r6_5 < x87_r7_14 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_5, x87_r7_14) ? 1 : 0) << 0xa
        | (x87_r6_5 == x87_r7_14 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x41}
    
    if (not(p_1))
        *arg1 = var_c
        arg1[1] = var_8
        arg1[2] = var_4
        return var_8
    
    i += 1
while (i s< 0x3e8)

return eax_2
