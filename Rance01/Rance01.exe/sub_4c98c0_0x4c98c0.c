// 函数: sub_4c98c0
// 地址: 0x4c98c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_11c
int32_t eax_1 = data_78c474 ^ &var_11c
void* eax_3 = *(arg2 + 8)

if (eax_3 == 0)
    eax_3.b = 1
else
    *(eax_3 + 0x54) = *(arg3 + 0x28)
    int32_t ecx = *(arg3 + 0x2c)
    *(eax_3 + 0x58) = ecx
    *(eax_3 + 0x5c) = *(arg3 + 0x30)
    int32_t var_130_1 = ecx
    float var_130_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg3 + 0x48)))))
    float var_4c = 0f
    int32_t var_48
    __builtin_memset(&var_48, 0, 0x3c)
    int32_t var_130_3 = sub_6602e0(&var_4c, var_130_2)
    float var_130_4 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg3 + 0x44)))))
    float var_8c = 0f
    int32_t var_88
    __builtin_memset(&var_88, 0, 0x3c)
    int32_t var_130_5 = sub_529c30(&var_8c, var_130_4)
    float var_130_6 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg3 + 0x40)))))
    float var_cc = 0f
    int32_t var_c8
    __builtin_memset(&var_c8, 0, 0x3c)
    sub_660260(&var_cc, var_130_6)
    float var_10c[0x10]
    float* eax_5 = sub_4b65f0(&var_10c, &var_cc, &var_8c, &var_10c)
    sub_4b65f0(eax_5, eax_5, &var_4c, &var_cc)
    __builtin_memcpy(*(arg2 + 8) + 0x60, &var_cc, 0x40)
    *(*(arg2 + 8) + 0xa0) = fconvert.s(fconvert.t(*(arg3 + 0x4c)))
    *(*(arg2 + 8) + 0xa4) = fconvert.s(fconvert.t(*(arg3 + 0x50)))
    *(*(arg2 + 8) + 0xa8) = fconvert.s(fconvert.t(*(arg3 + 0x54)))
    void* eax_6
    eax_6.b = *(arg3 + 0xb5)
    *(*(arg2 + 8) + 0x164) = eax_6.b
    void* edx_6
    edx_6.b = *(arg3 + 0xb6)
    *(*(arg2 + 8) + 0x165) = edx_6.b
    void* ecx_6
    ecx_6.b = *(arg3 + 0xb7)
    *(*(arg2 + 8) + 0x166) = ecx_6.b
    void* eax_8 = *(arg2 + 8)
    *(eax_8 + 0xac) = *(arg3 + 0x78)
    *(eax_8 + 0xb0) = *(arg3 + 0x7c)
    *(eax_8 + 0xb4) = *(arg3 + 0x80)
    *(eax_8 + 0xb8) = *(arg3 + 0x84)
    void* eax_9 = *(arg2 + 8)
    *(eax_9 + 0xbc) = *(arg3 + 0x98)
    *(eax_9 + 0xc0) = *(arg3 + 0x9c)
    *(eax_9 + 0xc4) = *(arg3 + 0xa0)
    *(eax_9 + 0xc8) = *(arg3 + 0xa4)
    void* eax_10 = *(arg2 + 8)
    long double x87_r7_11 = fconvert.t(fconvert.s(fconvert.t(*(arg3 + 0xac))))
    void** ecx_11 = *(eax_10 + 0x24)
    *(eax_10 + 0xcc) = fconvert.s(x87_r7_11)
    int32_t eax_11 = *(eax_10 + 0x28)
    
    while (ecx_11 != eax_11)
        void* edx_11 = *ecx_11
        ecx_11 = &ecx_11[1]
        *(edx_11 + 0xb8) = fconvert.s(x87_r7_11)
    
    void* ecx_12 = *(arg2 + 8)
    eax_3 = *(ecx_12 + 0x24)
    int32_t ecx_13 = *(ecx_12 + 0x28)
    
    if (eax_3 != ecx_13)
        long double x87_r7_13 = fconvert.t(fconvert.s(fconvert.t(*(arg3 + 0xb0))))
        
        do
            void* edx_12 = *eax_3
            eax_3 += 4
            *(edx_12 + 0xbc) = fconvert.s(x87_r7_13)
        while (eax_3 != ecx_13)
    
    void* ebp_1 = *(arg2 + 8)
    
    if (*(ebp_1 + 0xc) == 0)
        eax_3.b = 1
    else if (sub_502ee0(ebp_1, arg4, arg1, arg5).b != 0)
        eax_3.b = 1

sub_6b4885(eax_1 ^ &var_11c)
