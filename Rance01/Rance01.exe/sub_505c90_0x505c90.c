// 函数: sub_505c90
// 地址: 0x505c90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_b4
int32_t eax_1 = data_78c474 ^ &var_b4
var_b4 = arg1
int32_t var_ac
sub_51bfa0(&var_ac, arg3 + 0x20, arg3 + 0xd4)
char eax_5
int80_t st0
st0, eax_5 = sub_51c5a0(&var_ac, arg2)

if (eax_5 != 0)
    float var_50[0x11]
    float* eax_6 = sub_4b6800(&var_50, arg3 + 0x20)
    float var_9c
    float var_90[0x10]
    sub_51e1c0(arg3 + 0xd4, &var_9c, sub_4b65f0(eax_6, eax_6, arg3 + 0xd4, &var_90), arg2)
    long double x87_r7_1 = fconvert.t(-1f)
    long double x87_r6_1 = fconvert.t(var_9c)
    x87_r6_1 - x87_r7_1
    float* eax_8
    eax_8.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r5_1 = float.t(1)
        x87_r5_1 - x87_r6_1
        eax_8.w = (x87_r5_1 < x87_r6_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_1, x87_r6_1) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x2800
        bool p_2 = unimplemented  {test ah, 0x41}
        
        if (p_2)
            float var_98
            long double x87_r4_1 = fconvert.t(var_98)
            x87_r4_1 - x87_r7_1
            eax_8.w = (x87_r4_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r4_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x2000
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (p_3)
                x87_r5_1 - x87_r7_1
                eax_8.w = (x87_r5_1 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r5_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                bool p_4 = unimplemented  {test ah, 0x41}
                
                if (p_4)
                    long double x87_r5_2 = fconvert.t(0.5)
                    int32_t eax_9 =
                        sub_70c710((x87_r6_1 * x87_r5_2 + x87_r5_2) * float.t(*(arg3 + 0x140)))
                    *arg4 = eax_9
                    
                    if (eax_9 s>= 0)
                        int32_t ecx_1 = *(arg3 + 0x140)
                        
                        if (eax_9 s>= ecx_1)
                            *arg4 = ecx_1 - 1
                    else
                        *arg4 = 0
                    
                    int32_t eax_10 =
                        sub_70c710((x87_r5_2 - x87_r7_1 * x87_r5_2) * float.t(*(arg3 + 0x144)))
                    int32_t* ecx_3 = var_b4
                    *ecx_3 = eax_10
                    
                    if (eax_10 s< 0)
                        *ecx_3 = 0
                        sub_65ab60(&var_ac)
                        int32_t eax_11
                        eax_11.b = 1
                        sub_6b4885(eax_1 ^ &var_b4)
                        return eax_11
                    
                    int32_t ebx_1 = *(arg3 + 0x144)
                    
                    if (eax_10 s>= ebx_1)
                        *ecx_3 = ebx_1 - 1
                    
                    sub_65ab60(&var_ac)
                    int32_t eax_12
                    eax_12.b = 1
                    sub_6b4885(eax_1 ^ &var_b4)
                    return eax_12

int32_t eax_13 = var_ac

if (eax_13 != 0)
    int32_t var_c4_4 = eax_13
    sub_6b4d5b()

eax_13.b = 0
sub_6b4885(eax_1 ^ &var_b4)
return eax_13
