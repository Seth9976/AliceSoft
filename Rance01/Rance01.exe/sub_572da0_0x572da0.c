// 函数: sub_572da0
// 地址: 0x572da0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t mxcsr
int16_t x87control
int32_t eax =
    sub_70c710(fconvert.t(fconvert.s(sub_6b4ef0(mxcsr, x87control, fconvert.d(fconvert.t(arg2))))))
int32_t edi_2 = eax * 2 * *(arg1 + 0x34) + 1
int32_t ecx_1 = edi_2 * edi_2
char* result

if (*(arg1 + 0x3c) - *(arg1 + 0x38) != ecx_1)
label_572e00:
    sub_404f60(ecx_1, &arg1[0x38])
    result = *(arg1 + 0x38)
    int32_t ebx = 0
    char* result_1 = result
    
    if (edi_2 s> 0)
        do
            int32_t esi_1 = 0
            
            do
                int32_t eax_2 = *(arg1 + 0x34)
                int32_t eax_3 = eax_2 * eax
                int32_t edx_3 = ebx - eax_3
                int32_t ecx_4 = esi_1 - eax_3
                int32_t ecx_5 = ecx_4 * ecx_4
                double var_88_1
                var_88_1:4.d = ecx_5
                var_88_1:4.d = fconvert.s(float.t(edx_3 * edx_3 + ecx_5))
                long double st0_1 = sub_4d9250()
                long double x87_r6_4 = fconvert.t(fconvert.s(float.t(eax_2) * fconvert.t(arg2)))
                x87_r6_4 - st0_1
                
                if ((((x87_r6_4 < st0_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_4, st0_1) ? 1 : 0) << 0xa
                        | (x87_r6_4 == st0_1 ? 1 : 0) << 0xe):1.b & 1) != 0)
                    result = nullptr
                else
                    result = 0xff
                
                *result_1 = result.b
                esi_1 += 1
                result_1 = &result_1[1]
            while (esi_1 s< edi_2)
            
            ebx += 1
        while (ebx s< edi_2)
    
    *(arg1 + 0x48) = fconvert.s(fconvert.t(arg2))
else
    long double x87_r7_3 = fconvert.t(*(arg1 + 0x48))
    long double x87_r6_1 = fconvert.t(arg2)
    x87_r6_1 - x87_r7_3
    result.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        goto label_572e00

return result
