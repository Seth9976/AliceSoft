// 函数: sub_4427f0
// 地址: 0x4427f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *arg13
int128_t* esi = (*(*arg1 + 8))(arg2, arg3)
int128_t* edi = (*(*arg4 + 8))(arg5, arg6)
arg13 = (*(*arg9 + 8))(arg10, arg11)
int32_t eax_12 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_15 = (*(*arg4 + 0x1c))() - arg7 * 4
int32_t result_1 = (*(*arg9 + 0x1c))() - arg7 * 4
int32_t result = arg8
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
int128_t xmm3_2 = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1
uint32_t xmm4[0x4] = _mm_shuffle_epi32(zx.o(arg12), 0)

if (result s> 0)
    arg8 = result
    int32_t i
    
    do
        int32_t* edx_10 = arg7
        int32_t* eax_18 = nullptr
        void* ecx_16 = esi & 0xf
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
                    int32_t ecx_24 = (zx.d(*(arg13 + 3)) * arg12) s>> 8
                    int32_t edx_14
                    edx_14.b = *(zx.d(*esi) + ((zx.d(*edi) * ecx_24) s>> 8) + ebx)
                    *esi = edx_14.b
                    arg13 = &arg13[1]
                    int32_t eax_25
                    eax_25.b = *(zx.d(*(esi + 1)) + ((zx.d(*(edi + 1)) * ecx_24) s>> 8) + ebx)
                    *(esi + 1) = eax_25.b
                    ecx_24.b = *(zx.d(*(esi + 2)) + ((zx.d(*(edi + 2)) * ecx_24) s>> 8) + ebx)
                    *(esi + 2) = ecx_24.b
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
                uint32_t xmm2_1[0x4] = *edi
                uint32_t xmm0_6[0x4] =
                    _mm_srli_epi32(_mm_mullo_epi16(_mm_srli_epi32(*arg13, 0x18), xmm4), 8)
                int32_t xmm1_3[0x4] = _mm_slli_epi32(xmm0_6, 0x10) | xmm0_6
                uint32_t xmm0_7[0x4] = *esi
                *esi = _mm_adds_epu8(xmm3_2 & xmm0_7, 
                    _mm_srli_epi16(_mm_mullo_epi16(xmm3_2 & xmm2_1, xmm1_3), 8)) | _mm_slli_epi32(
                    _mm_adds_epu8(xmm3_2 & _mm_srli_epi32(xmm0_7, 8), 
                        _mm_srli_epi16(_mm_mullo_epi16(xmm3_2 & _mm_srli_epi32(xmm2_1, 8), xmm1_3), 
                            8)), 
                    8)
                esi = &esi[1]
                edi = &edi[1]
                j_1 = j_3
                j_3 -= 1
                arg13 = &arg13[4]
            while (j_1 != 1)
        
        if (edx_9 s> 0)
            arg4 = nullptr
            arg1 = edx_9
            int32_t* j_2
            
            do
                int32_t ecx_29 = (zx.d(*(arg13 + 3)) * arg12) s>> 8
                int32_t eax_32
                eax_32.b = *(zx.d(*esi) + ((zx.d(*edi) * ecx_29) s>> 8) + ebx)
                *esi = eax_32.b
                arg13 = &arg13[1]
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
        arg13 += result
        i = arg8
        arg8 -= 1
    while (i != 1)

return result
