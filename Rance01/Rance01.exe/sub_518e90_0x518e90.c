// 函数: sub_518e90
// 地址: 0x518e90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_e4
void* var_8 = data_78c474 ^ &var_e4
void* result
int32_t ecx_1

if (*(arg1 + 0xc) != 0)
    result, ecx_1 = (*(**(arg1 + 0xc) + 0x14))()

if (*(arg1 + 0xc) == 0 || result == 0)
    result.b = 0
else
    long double x87_r7_1 = float.t(0)
    float* ebx_2 = result + 0x1c
    ebx_2[-7] = fconvert.s(x87_r7_1)
    int32_t var_d8_1 = 1
    long double x87_r6_1 = float.t(1)
    ebx_2[-6] = fconvert.s(x87_r6_1)
    ebx_2[-5] = fconvert.s(x87_r7_1)
    ebx_2[-4] = fconvert.s(x87_r7_1)
    ebx_2[-2] = fconvert.s(x87_r7_1)
    ebx_2[-3] = fconvert.s(x87_r6_1)
    ebx_2[-1] = 0x80ff0000
    int32_t eax_3 = *(arg1 + 4) - 1
    int32_t var_e0_1 = eax_3
    long double x87_r7_29
    
    if (eax_3 s<= 1)
        x87_r7_29 = x87_r6_1
    else
        int32_t edi_1 = *(arg1 + 8)
        float var_bc = fconvert.s(x87_r7_1)
        int32_t var_cc_1 = edi_1
        float var_b4_1 = fconvert.s(x87_r7_1)
        float var_b8_1 = fconvert.s(x87_r6_1)
        int32_t eax_10
        
        do
            int32_t var_f8_1 = ecx_1
            float var_8c = 0f
            int32_t var_88
            __builtin_memset(&var_88, 0, 0x3c)
            float var_a4
            float* eax_5
            int32_t ecx_3
            eax_5, ecx_3 = sub_51e1c0(
                sub_6602e0(&var_8c, 
                    fconvert.s(fconvert.t(fconvert.s(
                        fconvert.t(fconvert.s(float.t(var_d8_1) / float.t(var_e0_1)))
                        * fconvert.t(180.0))))), 
                &var_a4, &var_8c, &var_bc)
            float var_d0_1 = fconvert.s(fconvert.t(eax_5[1]))
            int32_t var_f8_4 = ecx_3
            long double x87_r7_11 = fconvert.t(var_d0_1)
            int32_t ecx_4
            long double st0_1
            st0_1, ecx_4 =
                sub_4d9250(fconvert.s(fconvert.t(fconvert.s(float.t(1) - x87_r7_11 * x87_r7_11))))
            int32_t ebp_1 = 0
            float var_d4_1 = fconvert.s(st0_1)
            int32_t var_e0_5 = 0
            
            if (edi_1 s> 0)
                float var_b0 = fconvert.s(float.t(0))
                float var_ac_1 = fconvert.s(fconvert.t(var_d0_1))
                float var_a8_1 = fconvert.s(fconvert.t(var_d4_1))
                
                do
                    int32_t var_f8_6 = ecx_4
                    float var_4c = 0f
                    int32_t var_48
                    __builtin_memset(&var_48, 0, 0x3c)
                    sub_660260(&var_4c, 
                        fconvert.s(fconvert.t(fconvert.s(float.t(var_e0_5) * fconvert.t(360.0)
                            / float.t(var_cc_1)))))
                    float var_c8
                    sub_51e1c0(&var_b0, &var_c8, &var_4c, &var_b0)
                    *ebx_2 = fconvert.s(fconvert.t(var_c8))
                    float var_c4
                    ebx_2[1] = fconvert.s(fconvert.t(var_c4))
                    float var_c0
                    ebx_2[2] = fconvert.s(fconvert.t(var_c0))
                    float var_98
                    float* eax_7
                    eax_7, ecx_4 = sub_51e2a0(&var_c8, &var_98)
                    ebx_2[3] = fconvert.s(fconvert.t(*eax_7))
                    ebp_1 += 1
                    ebx_2 = &ebx_2[7]
                    ebx_2[-3] = fconvert.s(fconvert.t(eax_7[1]))
                    var_e0_5 = ebp_1
                    ebx_2[-2] = fconvert.s(fconvert.t(eax_7[2]))
                    ebx_2[-1] = 0x80ff0000
                    edi_1 = *(arg1 + 8)
                    var_cc_1 = edi_1
                while (ebp_1 s< edi_1)
            
            ecx_1 = var_d8_1 + 1
            eax_10 = *(arg1 + 4) - 1
            var_d8_1 = ecx_1
            var_e0_1 = eax_10
        while (ecx_1 s< eax_10)
        x87_r7_29 = float.t(0)
    
    *ebx_2 = fconvert.s(x87_r7_29)
    long double x87_r6_6 = fconvert.t(-1f)
    ebx_2[1] = fconvert.s(x87_r6_6)
    ebx_2[2] = fconvert.s(x87_r7_29)
    ebx_2[3] = fconvert.s(x87_r7_29)
    ebx_2[5] = fconvert.s(x87_r7_29)
    ebx_2[4] = fconvert.s(x87_r6_6)
    ebx_2[6] = 0x80ff0000
    result.b = (*(**(arg1 + 0xc) + 0x18))().b != 0

sub_6b4885(var_8 ^ &var_e4)
return result
