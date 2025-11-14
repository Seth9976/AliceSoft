// 函数: sub_4bcdb0
// 地址: 0x4bcdb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_64
int32_t eax_1 = data_78c474 ^ &var_64
int32_t esi = arg1[1]
int32_t* edi = *arg1

if (edi != esi)
    long double x87_r7_2 = fconvert.t(arg3)
    int32_t* ecx_1 = edi
    
    while (true)
        float var_5c
        int32_t var_58
        int32_t var_54
        int32_t var_50
        float var_48[0x11]
        
        if (ecx_1 == esi)
            sub_529cb0(&var_5c, sub_4be0b0(&edi[2], &var_48))
            *arg2 = var_5c
            arg2[1] = var_58
            arg2[2] = var_54
            arg2[3] = var_50
            break
        
        long double x87_r6_1 = float.t(*ecx_1)
        x87_r6_1 - x87_r7_2
        int32_t* eax_2
        eax_2.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
        
        if ((eax_2:1.b & 0x41) != 0)
            int32_t* edx_1 = ecx_1
            ecx_1 = &ecx_1[7]
            
            if (ecx_1 != esi)
                long double x87_r6_2 = float.t(*ecx_1)
                x87_r6_2 - x87_r7_2
                eax_2.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
                bool p_1 = unimplemented  {test ah, 0x41}
                
                if (not(p_1))
                    continue
                else
                    int32_t esi_1 = *edx_1
                    int32_t eax_4 = *ecx_1 - esi_1
                    
                    if (eax_4 s> 0)
                        int32_t eax_5 = edx_1[1]
                        long double x87_r7_4
                        
                        if (eax_5 == 0 || eax_5 - 1 u> 1)
                            x87_r7_4 = float.t(0)
                        else
                            x87_r7_4 = (x87_r7_2 - float.t(esi_1)) / float.t(eax_4)
                        
                        int32_t* var_78_1 = ecx_1
                        sub_4bdfa0(&ecx_1[2], &edx_1[2], arg2, 
                            fconvert.s(fconvert.t(fconvert.s(x87_r7_4))), eax_5)
                        break
            
            sub_529cb0(&var_5c, sub_4be0b0(&edx_1[2], &var_48))
            *arg2 = var_5c
            arg2[1] = var_58
            arg2[2] = var_54
            arg2[3] = var_50
            break
        
        ecx_1 = &ecx_1[7]
else
    long double x87_r7 = float.t(0)
    *arg2 = fconvert.s(x87_r7)
    arg2[1] = fconvert.s(x87_r7)
    arg2[2] = fconvert.s(x87_r7)
    arg2[3] = fconvert.s(float.t(1))

sub_6b4885(eax_1 ^ &var_64)
