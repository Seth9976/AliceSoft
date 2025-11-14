// 函数: sub_4eedc0
// 地址: 0x4eedc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_11c
int32_t eax_1 = data_78c474 ^ &var_11c
float* var_118 = arg10
int32_t* eax_4 = *(arg3 + 0x29c)

if (eax_4 == 0)
    eax_4.b = 1
else
    eax_4[0x15] = *arg1
    eax_4[0x16] = arg1[1]
    int32_t ecx = arg1[2]
    eax_4[0x17] = ecx
    var_11c = fconvert.s(fconvert.t(*(arg4 + 0x48)))
    int32_t var_130_1 = ecx
    long double x87_r7_3 = fconvert.t(var_11c) + fconvert.t(arg8)
    float var_cc = 0f
    int32_t var_c8
    __builtin_memset(&var_c8, 0, 0x3c)
    var_11c = fconvert.s(x87_r7_3)
    int32_t ecx_1 = sub_6602e0(&var_cc, fconvert.s(fconvert.t(var_11c)))
    var_11c = fconvert.s(fconvert.t(*(arg4 + 0x44)))
    int32_t var_130_3 = ecx_1
    long double x87_r7_7 = fconvert.t(var_11c) + fconvert.t(arg6)
    float var_4c = 0f
    int32_t var_48
    __builtin_memset(&var_48, 0, 0x3c)
    var_11c = fconvert.s(x87_r7_7)
    int32_t ecx_2 = sub_529c30(&var_4c, fconvert.s(fconvert.t(var_11c)))
    var_11c = fconvert.s(fconvert.t(*(arg4 + 0x40)))
    long double x87_r7_10 = fconvert.t(var_11c)
    float var_8c = 0f
    int32_t var_88
    __builtin_memset(&var_88, 0, 0x3c)
    var_11c = fconvert.s(x87_r7_10 + fconvert.t(arg7))
    int32_t var_130_5 = ecx_2
    float var_10c[0x10]
    float* eax_6 =
        sub_4b65f0(sub_660260(&var_8c, fconvert.s(fconvert.t(var_11c))), &var_8c, &var_4c, &var_10c)
    float* eax_7 = sub_4b65f0(eax_6, eax_6, &var_cc, &var_8c)
    sub_4b65f0(eax_7, eax_7, arg2, &var_cc)
    __builtin_memcpy(*(arg3 + 0x29c) + 0x60, &var_cc, 0x40)
    long double x87_r6_1 = fconvert.t(arg5)
    var_11c = fconvert.s(fconvert.t(*(arg4 + 0x4c)) * x87_r6_1)
    *(*(arg3 + 0x29c) + 0xa0) = fconvert.s(fconvert.t(var_11c))
    void* ecx_6 = *(arg3 + 0x29c)
    var_11c = fconvert.s(fconvert.t(*(arg4 + 0x50)) * x87_r6_1)
    *(ecx_6 + 0xa4) = fconvert.s(fconvert.t(var_11c))
    void* edx_6 = *(arg3 + 0x29c)
    var_11c = fconvert.s(x87_r6_1 * fconvert.t(*(arg4 + 0x54)))
    *(edx_6 + 0xa8) = fconvert.s(fconvert.t(var_11c))
    void* eax_9 = *(arg3 + 0x29c)
    long double x87_r7_18 = fconvert.t(arg9)
    *(eax_9 + 0xac) = *(arg4 + 0x78)
    *(eax_9 + 0xb0) = *(arg4 + 0x7c)
    *(eax_9 + 0xb4) = *(arg4 + 0x80)
    *(eax_9 + 0xb8) = *(arg4 + 0x84)
    void* eax_10 = *(arg3 + 0x29c)
    *(eax_10 + 0xbc) = *(arg4 + 0x98)
    *(eax_10 + 0xc0) = *(arg4 + 0x9c)
    *(eax_10 + 0xc4) = *(arg4 + 0xa0)
    *(eax_10 + 0xc8) = *(arg4 + 0xa4)
    void* eax_11 = *(arg3 + 0x29c)
    void** ecx_11 = *(eax_11 + 0x24)
    *(eax_11 + 0xcc) = fconvert.s(x87_r7_18)
    int32_t eax_12 = *(eax_11 + 0x28)
    
    while (ecx_11 != eax_12)
        void* edx_11 = *ecx_11
        ecx_11 = &ecx_11[1]
        *(edx_11 + 0xb8) = fconvert.s(x87_r7_18)
    
    ecx_11.b = *(arg4 + 0xb5)
    *(*(arg3 + 0x29c) + 0x164) = ecx_11.b
    void* eax_13
    eax_13.b = *(arg4 + 0xb6)
    *(*(arg3 + 0x29c) + 0x165) = eax_13.b
    void* edx_12
    edx_12.b = *(arg4 + 0xb7)
    *(*(arg3 + 0x29c) + 0x166) = edx_12.b
    void* eax_14 = *(arg3 + 0x29c)
    char eax_15
    
    if (*(eax_14 + 0xc) != 0)
        eax_15 = sub_502ee0(eax_14, var_118, arg11, 0)
    
    if (*(eax_14 + 0xc) == 0 || eax_15 != 0)
        var_118 = *(arg3 + 0x29c)
        sub_61b5a0(&var_118, arg12)
        eax_4.b = 1

sub_6b4885(eax_1 ^ &var_11c)
