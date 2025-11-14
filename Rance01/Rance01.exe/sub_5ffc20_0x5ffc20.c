// 函数: sub_5ffc20
// 地址: 0x5ffc20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = float.t(1)
int32_t* ebx = arg6
long double x87_r6 = fconvert.t(2.0)
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, ebx[1] - *ebx)
int32_t edx_3 = edx_2 s>> 1
int32_t eax_3 = (edx_3 u>> 0x1f) + edx_3
int32_t i = 0
int32_t var_4 = eax_3
int32_t i_1 = 0

if (eax_3 s>= 4)
    int32_t var_c_1 = 2
    int32_t edx_4 = 0
    long double x87_r5_2 = fconvert.t(fconvert.s(float.t(var_4)))
    
    do
        float* eax_4 = *ebx
        long double x87_r4_3 = fconvert.t(fconvert.s(float.t(i_1) / x87_r5_2))
        long double x87_r2_1 = fconvert.t(fconvert.s(x87_r7 - x87_r4_3))
        long double x87_r3_5 = x87_r4_3 * x87_r6 * x87_r2_1
        long double x87_r4_4 = x87_r4_3 * x87_r4_3
        long double x87_r2_2 = x87_r2_1 * x87_r2_1
        arg6 = fconvert.s(fconvert.t(arg4[1]) * x87_r3_5 + fconvert.t(arg3[1]) * x87_r4_4
            + fconvert.t(arg5[1]) * x87_r2_2)
        float var_10_1 = fconvert.s(fconvert.t(arg3[2]) * x87_r4_4 + fconvert.t(arg4[2]) * x87_r3_5
            + fconvert.t(arg5[2]) * x87_r2_2)
        *(eax_4 + edx_4) = fconvert.s(x87_r4_4 * fconvert.t(*arg3) + x87_r3_5 * fconvert.t(*arg4)
            + x87_r2_2 * fconvert.t(*arg5))
        *(eax_4 + edx_4 + 4) = fconvert.s(fconvert.t(arg6))
        *(eax_4 + edx_4 + 8) = fconvert.s(fconvert.t(var_10_1))
        long double x87_r4_12 = fconvert.t(fconvert.s(float.t(var_c_1 - 1) / x87_r5_2))
        long double x87_r2_4 = fconvert.t(fconvert.s(x87_r7 - x87_r4_12))
        long double x87_r3_13 = x87_r4_12 * x87_r6 * x87_r2_4
        long double x87_r4_13 = x87_r4_12 * x87_r4_12
        long double x87_r2_5 = x87_r2_4 * x87_r2_4
        arg6 = fconvert.s(fconvert.t(arg4[1]) * x87_r3_13 + fconvert.t(arg3[1]) * x87_r4_13
            + fconvert.t(arg5[1]) * x87_r2_5)
        float* eax_8 = edx_4 + *ebx + 0xc
        float var_10_2 = fconvert.s(fconvert.t(arg3[2]) * x87_r4_13
            + fconvert.t(arg4[2]) * x87_r3_13 + fconvert.t(arg5[2]) * x87_r2_5)
        *eax_8 = fconvert.s(x87_r4_13 * fconvert.t(*arg3) + x87_r3_13 * fconvert.t(*arg4)
            + x87_r2_5 * fconvert.t(*arg5))
        eax_8[1] = fconvert.s(fconvert.t(arg6))
        eax_8[2] = fconvert.s(fconvert.t(var_10_2))
        float* eax_10 = *ebx + edx_4 + 0x18
        long double x87_r4_21 = fconvert.t(fconvert.s(float.t(var_c_1) / x87_r5_2))
        long double x87_r2_7 = fconvert.t(fconvert.s(x87_r7 - x87_r4_21))
        long double x87_r3_21 = x87_r4_21 * x87_r6 * x87_r2_7
        long double x87_r4_22 = x87_r4_21 * x87_r4_21
        long double x87_r2_8 = x87_r2_7 * x87_r2_7
        arg6 = fconvert.s(fconvert.t(arg4[1]) * x87_r3_21 + fconvert.t(arg3[1]) * x87_r4_22
            + fconvert.t(arg5[1]) * x87_r2_8)
        float var_10_3 = fconvert.s(fconvert.t(arg3[2]) * x87_r4_22
            + fconvert.t(arg4[2]) * x87_r3_21 + fconvert.t(arg5[2]) * x87_r2_8)
        *eax_10 = fconvert.s(x87_r4_22 * fconvert.t(*arg3) + x87_r3_21 * fconvert.t(*arg4)
            + x87_r2_8 * fconvert.t(*arg5))
        eax_10[1] = fconvert.s(fconvert.t(arg6))
        eax_10[2] = fconvert.s(fconvert.t(var_10_3))
        long double x87_r4_30 = fconvert.t(fconvert.s(float.t(var_c_1 + 1) / x87_r5_2))
        long double x87_r2_10 = fconvert.t(fconvert.s(x87_r7 - x87_r4_30))
        long double x87_r3_29 = x87_r4_30 * x87_r6 * x87_r2_10
        long double x87_r4_31 = x87_r4_30 * x87_r4_30
        int32_t eax_13 = *ebx
        var_c_1 += 4
        long double x87_r2_11 = x87_r2_10 * x87_r2_10
        i = i_1 + 4
        edx_4 += 0x30
        i_1 = i
        arg6 = fconvert.s(fconvert.t(arg4[1]) * x87_r3_29 + fconvert.t(arg3[1]) * x87_r4_31
            + fconvert.t(arg5[1]) * x87_r2_11)
        float var_10_4 = fconvert.s(fconvert.t(arg3[2]) * x87_r4_31
            + fconvert.t(arg4[2]) * x87_r3_29 + fconvert.t(arg5[2]) * x87_r2_11)
        *(eax_13 + edx_4 - 0xc) = fconvert.s(x87_r4_31 * fconvert.t(*arg3)
            + x87_r3_29 * fconvert.t(*arg4) + x87_r2_11 * fconvert.t(*arg5))
        *(eax_13 + edx_4 - 8) = fconvert.s(fconvert.t(arg6))
        *(eax_13 + edx_4 - 4) = fconvert.s(fconvert.t(var_10_4))
    while (i s< var_4 - 3)
    
    eax_3 = var_4
    x87_r6 = x87_r5_2

if (i s>= eax_3)
    return x87_r7

int32_t edx_7 = i * 0xc

do
    int32_t eax_16 = *ebx
    i += 1
    edx_7 += 0xc
    long double x87_r4_38 = float.t(i_1) / fconvert.t(fconvert.s(float.t(var_4)))
    i_1 = i
    long double x87_r4_39 = fconvert.t(fconvert.s(x87_r4_38))
    long double x87_r2_13 = fconvert.t(fconvert.s(x87_r7 - x87_r4_39))
    long double x87_r3_37 = x87_r4_39 * x87_r6 * x87_r2_13
    long double x87_r4_40 = x87_r4_39 * x87_r4_39
    long double x87_r2_14 = x87_r2_13 * x87_r2_13
    arg6 = fconvert.s(fconvert.t(arg4[1]) * x87_r3_37 + fconvert.t(arg3[1]) * x87_r4_40
        + fconvert.t(arg5[1]) * x87_r2_14)
    float var_10_5 = fconvert.s(fconvert.t(arg3[2]) * x87_r4_40 + fconvert.t(arg4[2]) * x87_r3_37
        + fconvert.t(arg5[2]) * x87_r2_14)
    *(eax_16 + edx_7 - 0xc) = fconvert.s(x87_r4_40 * fconvert.t(*arg3)
        + x87_r3_37 * fconvert.t(*arg4) + x87_r2_14 * fconvert.t(*arg5))
    *(eax_16 + edx_7 - 8) = fconvert.s(fconvert.t(arg6))
    *(eax_16 + edx_7 - 4) = fconvert.s(fconvert.t(var_10_5))
while (i s< var_4)

return x87_r6
