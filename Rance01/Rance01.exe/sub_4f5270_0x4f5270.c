// 函数: sub_4f5270
// 地址: 0x4f5270
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

for (void* i = *arg1; i != arg1[1]; i += 0x1c)
    int32_t ecx_1 = *(i + 0xc)
    int32_t eax
    int32_t edx_3
    edx_3:eax = muls.dp.d(0x2aaaaaab, *(i + 0x10) - ecx_1)
    int32_t edx_4 = edx_3 s>> 1
    int32_t eax_3 = (edx_4 u>> 0x1f) + edx_4
    
    if (eax_3 s> 4)
        if (eax_3 - 1 s> 0)
            int32_t* edi_1 = nullptr
            int32_t j_4 = 1
            
            do
                int32_t j = j_4
                
                if (j_4 s< eax_3)
                    int32_t* ebx_1 = &edi_1[3]
                    int32_t edx_12
                    
                    do
                        long double x87_r7_1 = fconvert.t(*(edi_1 + ecx_1 + 8))
                        long double x87_r6_1 = fconvert.t(*(ebx_1 + ecx_1 + 8))
                        x87_r6_1 - x87_r7_1
                        eax_3.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                        
                        if ((eax_3:1.b & 0x41) == 0)
                            int32_t eax_4 = *(edi_1 + ecx_1 + 4)
                            int32_t edx_7 = *(edi_1 + ecx_1)
                            int32_t eax_5 = *(edi_1 + ecx_1 + 8)
                            *(edi_1 + ecx_1) = *(ebx_1 + ecx_1)
                            *(edi_1 + ecx_1 + 4) = *(ebx_1 + ecx_1 + 4)
                            *(edi_1 + ecx_1 + 8) = *(ebx_1 + ecx_1 + 8)
                            int32_t* eax_9 = *(i + 0xc)
                            *(eax_9 + edi_1) = edx_7
                            *(eax_9 + edi_1 + 4) = eax_4
                            *(eax_9 + edi_1 + 8) = eax_5
                        
                        ecx_1 = *(i + 0xc)
                        j += 1
                        int32_t eax_10
                        int32_t edx_11
                        edx_11:eax_10 = muls.dp.d(0x2aaaaaab, *(i + 0x10) - ecx_1)
                        edx_12 = edx_11 s>> 1
                        ebx_1 = &ebx_1[3]
                    while (j s< (edx_12 u>> 0x1f) + edx_12)
                
                ecx_1 = *(i + 0xc)
                j_4 += 1
                int32_t eax_13
                int32_t edx_15
                edx_15:eax_13 = muls.dp.d(0x2aaaaaab, *(i + 0x10) - ecx_1)
                int32_t edx_16 = edx_15 s>> 1
                eax_3 = (edx_16 u>> 0x1f) + edx_16
                edi_1 = &edi_1[3]
            while (j_4 - 1 s< eax_3 - 1)
        
        sub_4f5460(4, i + 0xc)
        void* ecx_3 = *(i + 0xc)
        float var_14_1 = fconvert.s(float.t(0))
        int32_t eax_16
        int32_t edx_21
        edx_21:eax_16 = muls.dp.d(0x2aaaaaab, *(i + 0x10) - ecx_3)
        int32_t edx_22 = edx_21 s>> 1
        int32_t eax_19 = (edx_22 u>> 0x1f) + edx_22
        int32_t ebx_3 = 0
        
        if (eax_19 s>= 4)
            int32_t j_6 = ((eax_19 - 4) u>> 2) + 1
            void* edx_23 = ecx_3 + 0x14
            ebx_3 = j_6 << 2
            int32_t j_1
            
            do
                long double x87_r7_3 = fconvert.t(*(edx_23 - 0xc))
                edx_23 += 0x30
                j_1 = j_6
                j_6 -= 1
                var_14_1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(x87_r7_3 + fconvert.t(var_14_1)))
                    + fconvert.t(*(edx_23 - 0x30)))) + fconvert.t(*(edx_23 - 0x24))))
                    + fconvert.t(*(edx_23 - 0x18)))
            while (j_1 != 1)
        
        if (ebx_3 s< eax_19)
            float* edi_4 = ecx_3 + ebx_3 * 0xc + 8
            int32_t j_5 = eax_19 - ebx_3
            int32_t j_2
            
            do
                long double x87_r7_11 = fconvert.t(*edi_4)
                edi_4 = &edi_4[3]
                j_2 = j_5
                j_5 -= 1
                var_14_1 = fconvert.s(x87_r7_11 + fconvert.t(var_14_1))
            while (j_2 != 1)
        
        int32_t j_3 = 0
        
        if (eax_19 s> 0)
            int32_t edi_5 = 0
            int32_t edx_29
            
            do
                long double x87_r6_3 = fconvert.t(*(edi_5 + ecx_3 + 8)) / fconvert.t(var_14_1)
                j_3 += 1
                edi_5 += 0xc
                *(edi_5 + ecx_3 - 4) = fconvert.s(x87_r6_3)
                ecx_3 = *(i + 0xc)
                int32_t eax_20
                int32_t edx_28
                edx_28:eax_20 = muls.dp.d(0x2aaaaaab, *(i + 0x10) - ecx_3)
                edx_29 = edx_28 s>> 1
            while (j_3 s< (edx_29 u>> 0x1f) + edx_29)
