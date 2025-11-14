// 函数: sub_4ca610
// 地址: 0x4ca610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_44
int32_t eax_1 = data_78c474 ^ &var_44
int32_t var_3c = arg4
void* eax_3 = *(arg3 + 0x28)

if (eax_3 == 0)
    eax_3.b = 1
    sub_6b4885(eax_1 ^ &var_44)
    return 

long double x87_r7 = float.t(0)
*(eax_3 + 0x10) = *(arg2 + 0x28)
float var_34 = fconvert.s(x87_r7)
float var_30 = fconvert.s(x87_r7)
*(eax_3 + 0x14) = *(arg2 + 0x2c)
float var_2c = fconvert.s(x87_r7)
int32_t ecx_3 = *(arg2 + 0x30)
float var_28 = fconvert.s(x87_r7)
*(eax_3 + 0x18) = ecx_3
float var_24 = fconvert.s(x87_r7)
int32_t* ebp = *(arg2 + 0x58)
float var_20 = fconvert.s(x87_r7)
int32_t ecx_4 = *(arg2 + 0x5c)
float var_1c = fconvert.s(x87_r7)
float var_18 = fconvert.s(x87_r7)
float var_14 = fconvert.s(x87_r7)
float var_10 = fconvert.s(x87_r7)
float var_c = fconvert.s(x87_r7)
float var_8 = fconvert.s(x87_r7)
int32_t eax_7 = (ecx_4 - ebp) s/ 0xc

if (eax_7 s> 0)
    int32_t ecx_6 = ebp[1]
    var_34 = *ebp
    int32_t var_30_1 = ecx_6
    var_2c = ebp[2]
    
    if (eax_7 s> 1)
        float edx_5 = ebp[4]
        var_28 = ebp[3]
        int32_t ecx_8 = ebp[5]
        var_24 = edx_5
        int32_t var_20_1 = ecx_8
        
        if (eax_7 s> 2)
            int32_t ecx_9 = ebp[7]
            var_1c = ebp[6]
            int32_t var_18_1 = ecx_9
            int32_t var_14_1 = ebp[8]
            
            if (eax_7 s> 3)
                int32_t ecx_10 = ebp[0xa]
                int32_t edx_8 = ebp[0xb]
                var_10 = ebp[9]
                int32_t var_c_1 = ecx_10
                int32_t var_8_1 = edx_8
                sub_4b3ae0(*(arg3 + 0x28), &var_10, &var_34, &var_28, &var_1c)
                var_34 = fconvert.s(x87_r7)
                int32_t* ecx_12 = *(arg2 + 0x68)
                float var_30_2 = fconvert.s(x87_r7)
                int32_t eax_9 = *(arg2 + 0x6c)
                var_2c = fconvert.s(x87_r7)
                var_28 = fconvert.s(x87_r7)
                var_24 = fconvert.s(x87_r7)
                eax_7 = (eax_9 - ecx_12) s>> 3
                float var_20_2 = fconvert.s(x87_r7)
                var_1c = fconvert.s(x87_r7)
                float var_18_2 = fconvert.s(x87_r7)
                
                if (eax_7 s> 0)
                    var_34 = *ecx_12
                    int32_t var_30_3 = ecx_12[1]
                    
                    if (eax_7 s> 1)
                        var_2c = ecx_12[2]
                        var_28 = ecx_12[3]
                        
                        if (eax_7 s> 2)
                            var_24 = ecx_12[4]
                            int32_t var_20_3 = ecx_12[5]
                            
                            if (eax_7 s> 3)
                                int32_t ecx_13 = ecx_12[7]
                                var_1c = ecx_12[6]
                                int32_t var_18_3 = ecx_13
                                int32_t ecx_15 = sub_4b3b50(&var_34, &var_1c, *(arg3 + 0x28), 
                                    &var_34, &var_2c, &var_24)
                                *(*(arg3 + 0x28) + 0x88) = fconvert.s(fconvert.t(*(arg2 + 0xac)))
                                *(*(arg3 + 0x28) + 0x8c) = fconvert.s(fconvert.t(*(arg2 + 0xb0)))
                                int32_t var_58_3 = ecx_15
                                float var_58_4 =
                                    fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg2 + 0x284)))))
                                int32_t eax_14 =
                                    sub_70c710(fconvert.t(fconvert.s(fconvert.t(*(arg2 + 0x130)))))
                                sub_4b3210(*(arg3 + 0x28), eax_14, arg5, var_58_4, arg1)
                                sub_6b4885(eax_1 ^ &var_44)
                                return 

eax_7.b = 0
sub_6b4885(eax_1 ^ &var_44)
