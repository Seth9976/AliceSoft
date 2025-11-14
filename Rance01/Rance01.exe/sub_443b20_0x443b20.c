// 函数: sub_443b20
// 地址: 0x443b20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *arg12
int128_t* esi = (*(*arg1 + 8))(arg2, arg3)
int128_t* edi = (*(*arg4 + 8))(arg5, arg6)
arg12 = (*(*arg9 + 8))(arg10, arg11)
int32_t eax_12 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_15 = (*(*arg4 + 0x1c))() - arg7 * 4
int32_t result_1 = (*(*arg9 + 0x1c))() - arg7 * 4
int32_t result = arg8
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm5_1[0x4] = _mm_slli_epi32(xmm0_1, 0x10)
int128_t xmm3_1 = xmm5_1 | xmm0_1

if (result s> 0)
    arg8 = result
    int32_t i
    
    do
        int32_t* edx_10 = arg7
        int32_t* eax_18 = nullptr
        int32_t* ecx_16 = esi & 0xf
        arg9 = nullptr
        arg1 = nullptr
        int32_t* edx_9
        
        if (ecx_16 != 0)
            if ((ecx_16.b & 4) == 0)
                edx_10 = 4 - (ecx_16 u>> 2)
                void* ecx_19 = arg7 - edx_10
                eax_18 = ecx_19 & 0xfffffffc
                arg9 = eax_18
                arg1 = ecx_19 - eax_18
            
            if (edx_10 s> 0)
                int32_t var_10_1 = 0
                arg4 = edx_10
                int32_t* j
                
                do
                    int32_t ecx_23 = (zx.d(*(arg12 + 3)) * zx.d(*(edi + 3))) s>> 8
                    int32_t eax_24
                    eax_24.b = *(zx.d(*esi) + ((zx.d(*edi) * ecx_23) s>> 8) + ebx)
                    *esi = eax_24.b
                    arg12 = &arg12[1]
                    *(esi + 1) = *(zx.d(*(esi + 1)) + ((zx.d(*(edi + 1)) * ecx_23) s>> 8) + ebx)
                    *(esi + 2) = *(zx.d(*(esi + 2)) + ((zx.d(*(edi + 2)) * ecx_23) s>> 8) + ebx)
                    esi += 4
                    edi += 4
                    j = arg4
                    arg4 -= 1
                while (j != 1)
                eax_18 = arg9
            
            edx_9 = arg1
        else
            eax_18 = edx_10 & 0xfffffffc
            edx_9 = edx_10 - eax_18
        
        if (eax_18 s> 0)
            int32_t j_3 = ((eax_18 - 1) u>> 2) + 1
            int32_t j_1
            
            do
                uint32_t xmm4_1[0x4] = *edi
                int32_t xmm0_3[0x4] = xmm3_1 & _mm_srli_epi32(xmm4_1, 8)
                uint32_t xmm1_6[0x4] = _mm_srli_epi32(
                    _mm_mullo_epi16(_mm_srli_epi32(*arg12, 0x18), 
                        _mm_srli_epi32(xmm5_1 & xmm0_3, 0x10)), 
                    8)
                int32_t xmm2_6[0x4] = _mm_slli_epi32(xmm1_6, 0x10) | xmm1_6
                uint32_t xmm1_7[0x4] = *esi
                int32_t xmm4_3[0x4] = xmm3_1 & _mm_srli_epi32(xmm1_7, 8)
                int32_t xmm0_4[0x4] = _mm_mullo_epi16(xmm0_3, xmm2_6)
                int32_t xmm7_3[0x4] = _mm_mullo_epi16(xmm3_1 & xmm4_1, xmm2_6)
                uint16_t xmm0_5[0x8] = _mm_srli_epi16(xmm0_4, 8)
                uint16_t xmm7_4[0x8] = _mm_srli_epi16(xmm7_3, 8)
                int32_t xmm4_4[0x4] = _mm_adds_epu8(xmm4_3, xmm0_5)
                *esi = _mm_adds_epu8(xmm3_1 & xmm1_7, xmm7_4) | _mm_slli_epi32(xmm4_4, 8)
                esi = &esi[1]
                edi = &edi[1]
                j_1 = j_3
                j_3 -= 1
                arg12 = &arg12[4]
            while (j_1 != 1)
        
        if (edx_9 s> 0)
            arg4 = nullptr
            arg1 = edx_9
            int32_t* j_2
            
            do
                int32_t ecx_29 = (zx.d(*(arg12 + 3)) * zx.d(*(edi + 3))) s>> 8
                int32_t eax_36
                eax_36.b = *(zx.d(*esi) + ((zx.d(*edi) * ecx_29) s>> 8) + ebx)
                *esi = eax_36.b
                arg12 = &arg12[1]
                *(esi + 1) = *(zx.d(*(esi + 1)) + ((zx.d(*(edi + 1)) * ecx_29) s>> 8) + ebx)
                *(esi + 2) = *(zx.d(*(esi + 2)) + ((zx.d(*(edi + 2)) * ecx_29) s>> 8) + ebx)
                esi += 4
                edi += 4
                j_2 = arg1
                arg1 -= 1
            while (j_2 != 1)
        
        result = result_1
        esi += eax_12
        edi += eax_15
        arg12 += result
        i = arg8
        arg8 -= 1
    while (i != 1)

return result
