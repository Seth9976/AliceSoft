// 函数: sub_4c7790
// 地址: 0x4c7790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result_1
sub_4c8880(arg1 + 0x274, &result_1, *(arg1 + 0x274), *(arg1 + 0x278))
void* ecx_1 = arg2
void* result = (*(ecx_1 + 0xfc) - *(ecx_1 + 0xf8)) s/ 0x3c
int32_t ebx = 0
result_1 = result
int32_t var_154 = 0

if (result s> 0)
    int32_t var_15c_1 = 0
    
    do
        void* edi_2 = *(ecx_1 + 0xf8) + var_15c_1
        int32_t esi_2 = *(edi_2 + 0x28)
        
        if (esi_2 s>= 0)
            int32_t eax_5
            int32_t edx_6
            edx_6:eax_5 = muls.dp.d(0x2fa0be83, *(ecx_1 + 0xd4) - *(ecx_1 + 0xd0))
            int32_t edx_7 = edx_6 s>> 5
            
            if (esi_2 s< (edx_7 u>> 0x1f) + edx_7)
                int32_t ebx_1
                
                if (ebx != arg3)
                    int32_t ebx_2 = ebx - arg4
                    int32_t ebx_3 = neg.d(ebx_2)
                    ebx_1 = (sbb.d(ebx_3, ebx_3, ebx_2 != 0) & 0xffff41bf) + 0xffff40
                else
                    ebx_1 = 0x40ffff
                
                int32_t eax_8 = *(edi_2 + 8)
                
                if (eax_8 == 0)
                    void var_14
                    int32_t var_178_9 = sub_4c4980(ecx_1, esi_2, &var_14, edi_2 + 0xc)
                    sub_4c7bb0(&var_14, arg1, 
                        fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(edi_2 + 0x24))
                            * fconvert.t(*(arg1 + 0x4c))))), 
                        ebx_1)
                    ecx_1 = arg2
                else if (eax_8 == 1)
                    void var_80
                    sub_4c4980(ecx_1, esi_2, &var_80, edi_2 + 0xc)
                    void var_e0
                    sub_4c4980(arg2, esi_2, &var_e0, edi_2 + 0x18)
                    float var_c4_1 = fconvert.s(fneg(fconvert.t(*(edi_2 + 0x24))))
                    long double x87_r6_1 = float.t(0)
                    float var_134 = fconvert.s(fconvert.t(*(edi_2 + 0xc)) + x87_r6_1)
                    float var_130_1 = fconvert.s(fconvert.t(*(edi_2 + 0x10)) + fconvert.t(var_c4_1))
                    float var_12c_1 = fconvert.s(x87_r6_1 + fconvert.t(*(edi_2 + 0x14)))
                    void var_bc
                    sub_4c4980(arg2, esi_2, &var_bc, &var_134)
                    float var_1c_1 = fconvert.s(fconvert.t(*(edi_2 + 0x24)))
                    long double x87_r6_5 = float.t(0)
                    float var_14c = fconvert.s(fconvert.t(*(edi_2 + 0xc)) + x87_r6_5)
                    float var_148_1 = fconvert.s(fconvert.t(var_1c_1) + fconvert.t(*(edi_2 + 0x10)))
                    float var_144_1 = fconvert.s(x87_r6_5 + fconvert.t(*(edi_2 + 0x14)))
                    void var_8c
                    sub_4c4980(arg2, esi_2, &var_8c, &var_14c)
                    float var_e4_1 = fconvert.s(fconvert.t(*(edi_2 + 0x24)))
                    long double x87_r6_9 = float.t(0)
                    float var_104 = fconvert.s(fconvert.t(*(edi_2 + 0xc)) + x87_r6_9)
                    float var_100_1 = fconvert.s(x87_r6_9 + fconvert.t(*(edi_2 + 0x10)))
                    float var_fc_1 = fconvert.s(fconvert.t(var_e4_1) + fconvert.t(*(edi_2 + 0x14)))
                    void var_5c
                    sub_4c4980(arg2, esi_2, &var_5c, &var_104)
                    float var_60_1 = fconvert.s(fneg(fconvert.t(*(edi_2 + 0x24))))
                    long double x87_r6_11 = float.t(0)
                    float var_11c = fconvert.s(fconvert.t(*(edi_2 + 0xc)) + x87_r6_11)
                    float var_118_1 = fconvert.s(x87_r6_11 + fconvert.t(*(edi_2 + 0x10)))
                    float var_114_1 = fconvert.s(fconvert.t(var_60_1) + fconvert.t(*(edi_2 + 0x14)))
                    void var_2c
                    sub_4c4980(arg2, esi_2, &var_2c, &var_11c)
                    float var_ac_1 = fconvert.s(fneg(fconvert.t(*(edi_2 + 0x24))))
                    long double x87_r6_13 = float.t(0)
                    float var_140 = fconvert.s(fconvert.t(*(edi_2 + 0x18)) + x87_r6_13)
                    float var_13c_1 = fconvert.s(fconvert.t(*(edi_2 + 0x1c)) + fconvert.t(var_ac_1))
                    float var_138_1 = fconvert.s(x87_r6_13 + fconvert.t(*(edi_2 + 0x20)))
                    void var_d4
                    sub_4c4980(arg2, esi_2, &var_d4, &var_140)
                    float var_34_1 = fconvert.s(fconvert.t(*(edi_2 + 0x24)))
                    long double x87_r6_17 = float.t(0)
                    float var_128 = fconvert.s(fconvert.t(*(edi_2 + 0x18)) + x87_r6_17)
                    float var_124_1 = fconvert.s(fconvert.t(*(edi_2 + 0x1c)) + fconvert.t(var_34_1))
                    float var_120_1 = fconvert.s(x87_r6_17 + fconvert.t(*(edi_2 + 0x20)))
                    void var_a4
                    sub_4c4980(arg2, esi_2, &var_a4, &var_128)
                    float var_90_1 = fconvert.s(fconvert.t(*(edi_2 + 0x24)))
                    long double x87_r6_21 = float.t(0)
                    float var_110 = fconvert.s(fconvert.t(*(edi_2 + 0x18)) + x87_r6_21)
                    float var_10c_1 = fconvert.s(x87_r6_21 + fconvert.t(*(edi_2 + 0x1c)))
                    float var_108_1 = fconvert.s(fconvert.t(*(edi_2 + 0x20)) + fconvert.t(var_90_1))
                    void var_74
                    sub_4c4980(arg2, esi_2, &var_74, &var_110)
                    float var_48_1 = fconvert.s(fneg(fconvert.t(*(edi_2 + 0x24))))
                    long double x87_r6_23 = float.t(0)
                    float var_f8 = fconvert.s(fconvert.t(*(edi_2 + 0x18)) + x87_r6_23)
                    float var_f4_1 = fconvert.s(x87_r6_23 + fconvert.t(*(edi_2 + 0x1c)))
                    float var_f0_1 = fconvert.s(fconvert.t(*(edi_2 + 0x20)) + fconvert.t(var_48_1))
                    void var_44
                    int32_t var_178_1 = sub_4c4980(arg2, esi_2, &var_44, &var_f8)
                    int32_t var_178_3 =
                        sub_4c7bb0(&var_80, arg1, fconvert.s(fconvert.t(*(edi_2 + 0x24))), ebx_1)
                    sub_4c7bb0(&var_e0, arg1, fconvert.s(fconvert.t(*(edi_2 + 0x24))), ebx_1)
                    sub_4c7640(&var_bc, arg1, ebx_1, &var_d4, ebx_1)
                    sub_4c7640(&var_8c, arg1, ebx_1, &var_a4, ebx_1)
                    sub_4c7640(&var_5c, arg1, ebx_1, &var_74, ebx_1)
                    sub_4c7640(&var_2c, arg1, ebx_1, &var_44, ebx_1)
                    ecx_1 = arg2
        
        var_15c_1 += 0x3c
        ebx = var_154 + 1
        var_154 = ebx
    while (ebx s< result_1)

result.b = 1
return result
