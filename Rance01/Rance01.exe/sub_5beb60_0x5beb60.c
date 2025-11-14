// 函数: sub_5beb60
// 地址: 0x5beb60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp
int32_t eax_1 = data_78c474 ^ &__saved_ebp
void* ebx = *(arg2 + 4)
int32_t esi = arg8
__alloca_probe_16(esi << 2)
int32_t edx = 0
int32_t __saved_esi
int32_t* var_2c = &__saved_esi
int32_t var_14 = 0
int32_t eax_5

if (*(ebx + 0x1f4) != 0)
    eax_5 = *(ebx + 0x1f8) - arg7

if (*(ebx + 0x1f4) == 0 || eax_5 s> esi)
    eax_5 = esi

int32_t ebx_1 = arg9
float arg_18 = fconvert.s(float.t(0))
int32_t var_c = 0
int32_t mxcsr

if (eax_5 s> 0)
    int32_t* edx_2 = arg6 - arg1
    int32_t* ecx_6 = ebx_1 - arg1
    float* esi_1 = arg1
    int32_t* var_18_1 = edx_2
    int32_t var_1c_1 = eax_5
    var_c = eax_5
    
    while (true)
        if (arg6 == 0 || *(edx_2 + esi_1) == 0)
            long double x87_r7_3 = float.t(0)
            long double temp1_1 = fconvert.t(*(arg4 - arg1 + esi_1))
            x87_r7_3 - temp1_1
            eax_5.w = (x87_r7_3 < temp1_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_3, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == temp1_1 ? 1 : 0) << 0xe
            long double x87_r7_4 =
                fconvert.t(fconvert.s(fconvert.t(*esi_1) / fconvert.t(*(arg5 - arg1 + esi_1))))
            
            if ((eax_5:1.b & 0x41) != 0)
                int16_t x87control_2
                long double st0_3
                st0_3, x87control_2 = __CIasin_default(x87_r7_4)
                *(ecx_6 + esi_1) =
                    sub_70c710(sub_70cb70(mxcsr, x87control_2, fconvert.d(st0_3 + fconvert.t(0.5))))
            else
                int16_t x87control_1
                long double st0_1
                st0_1, x87control_1 = __CIasin_default(x87_r7_4)
                *(ecx_6 + esi_1) = sub_70c710(fneg(sub_70cb70(mxcsr, x87control_1, 
                    fconvert.d(st0_1 + fconvert.t(0.5)))))
        
        esi_1 = &esi_1[1]
        int32_t temp2_1 = var_1c_1
        var_1c_1 -= 1
        
        if (temp2_1 == 1)
            break
        
        edx_2 = var_18_1
    
    edx = var_c
    esi = arg8

if (edx s< esi)
    float* eax_9 = arg5 - ebx_1
    float* ecx_10 = arg4 - ebx_1
    float* eax_11 = arg1 - ebx_1
    int32_t* esi_2 = ebx_1 + (edx << 2)
    float* var_20_2 = ecx_10
    
    do
        if (arg6 == 0 || *(arg6 - arg4 + ecx_10 + esi_2) == 0)
            void* ebx_3 = eax_11 + esi_2
            long double x87_r7_14 = fconvert.t(0.25f)
            long double x87_r6_1 =
                fconvert.t(fconvert.s(fconvert.t(*(eax_11 + esi_2)) / fconvert.t(*(eax_9 + esi_2))))
            x87_r6_1 - x87_r7_14
            float* eax_14
            eax_14.w = (x87_r6_1 < x87_r7_14 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_14) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_14 ? 1 : 0) << 0xe | 0x3000
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (p_1 || (arg6 != 0 && edx s< arg3 - arg7))
                long double x87_r6_2 = float.t(0)
                long double temp3_1 = fconvert.t(*(ecx_10 + esi_2))
                x87_r6_2 - temp3_1
                eax_14.w = (x87_r6_2 < temp3_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == temp3_1 ? 1 : 0) << 0xe | 0x3800
                long double x87_r7_19
                
                if ((eax_14:1.b & 0x41) != 0)
                    int16_t x87control_4
                    long double st0_7
                    st0_7, x87control_4 = __CIasin_default(x87_r7_14)
                    x87_r7_19 = sub_70cb70(mxcsr, x87control_4, fconvert.d(st0_7 + fconvert.t(0.5)))
                else
                    int16_t x87control_3
                    long double st0_5
                    st0_5, x87control_3 = __CIasin_default(x87_r7_14)
                    x87_r7_19 =
                        fneg(sub_70cb70(mxcsr, x87control_3, fconvert.d(st0_5 + fconvert.t(0.5))))
                
                int32_t eax_18 = sub_70c710(x87_r7_19)
                ecx_10 = var_20_2
                *esi_2 = eax_18
                *ebx_3 = fconvert.s(float.t(eax_18 * eax_18) * fconvert.t(*(eax_9 + esi_2)))
            else
                var_2c[var_14] = ebx_3
                arg_18 = fconvert.s(x87_r7_14 + fconvert.t(arg_18))
                var_14 += 1
            
            edx = var_c
            ebx_1 = arg9
        
        edx += 1
        esi_2 = &esi_2[1]
        var_c = edx
    while (edx s< arg8)
    
    if (var_14 != 0)
        sub_6b6b50(var_2c, var_14, 0x5bea9000000004)
        int32_t ecx_12 = 0
        int32_t var_c_1 = 0
        
        if (var_14 s> 0)
            long double x87_r6_3 = fconvert.t(arg_18)
            long double result = float.t(0)
            
            while (true)
                long double temp4_1 = fconvert.t(*(ebx + 0x200))
                x87_r6_3 - temp4_1
                int32_t esi_5 = (var_2c[ecx_12] - arg1) s>> 2
                void* eax_22
                eax_22.w = (x87_r6_3 < temp4_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_3, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r6_3 == temp4_1 ? 1 : 0) << 0xe | 0x2800
                long double x87_r5_3
                
                if ((eax_22:1.b & 1) != 0)
                    *(ebx_1 + (esi_5 << 2)) = 0
                    arg1[esi_5] = fconvert.s(result)
                    x87_r5_3 = x87_r6_3
                else
                    ecx_12 = var_c_1
                    *(ebx_1 + (esi_5 << 2)) = sub_70c710(fconvert.t((
                        fconvert.s(fconvert.t(*(arg4 + (esi_5 << 2)))) & 0xbf800000) | 0x3f800000))
                    arg1[esi_5] = fconvert.s(fconvert.t(*(arg5 + (esi_5 << 2))))
                    x87_r5_3 = fconvert.t(fconvert.s(x87_r6_3 - float.t(1)))
                
                ecx_12 += 1
                var_c_1 = ecx_12
                
                if (ecx_12 s>= var_14)
                    break
                
                result = result
                x87_r6_3 = x87_r5_3
            
            sub_6b4885(eax_1 ^ &__saved_ebp)
            return result

sub_6b4885(eax_1 ^ &__saved_ebp)
return fconvert.t(arg_18)
