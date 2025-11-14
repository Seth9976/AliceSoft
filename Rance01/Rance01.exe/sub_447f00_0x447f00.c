// 函数: sub_447f00
// 地址: 0x447f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* esi = (*(*arg3 + 8))(arg4, arg2)
int128_t* edi = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_7 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t eax_10 = (*(*arg5 + 0x1c))() - arg8 * 4
uint32_t result = arg9
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm7_1[0x4] = _mm_slli_epi32(xmm0_1, 0x10)
int128_t xmm6_1 = xmm7_1 | xmm0_1

if (result s> 0)
    uint32_t var_4_1 = result
    uint32_t i
    
    do
        int32_t* ebx_1 = arg8
        result = 0
        int32_t* ecx_11 = nullptr
        uint32_t edx_6 = esi & 0xf
        arg9 = 0
        arg5 = nullptr
        
        if (edx_6 != 0)
            if ((edx_6.b & 4) == 0)
                ebx_1 = 4 - (edx_6 u>> 2)
                void* ecx_14 = arg8 - ebx_1
                result = ecx_14 & 0xfffffffc
                ecx_11 = ecx_14 - result
                arg9 = result
                arg5 = ecx_11
            
            if (ebx_1 s> 0)
                int32_t var_10_1 = 0
                arg3 = ebx_1
                int32_t* j
                
                do
                    edx_6.b = *esi
                    uint32_t ecx_15 = zx.d(*(edi + 3))
                    uint32_t eax_13 = zx.d(edx_6.b)
                    int32_t ebx_6 = ((zx.d(*edi) * eax_13) s>> 8) - eax_13
                    eax_13.b = *(esi + 1)
                    *esi = ((ebx_6 * ecx_15) s>> 8).b + edx_6.b
                    uint32_t edx_7 = zx.d(eax_13.b)
                    char ebx_14 =
                        (((((zx.d(*(edi + 1)) * edx_7) s>> 8) - edx_7) * ecx_15) s>> 8).b + eax_13.b
                    eax_13.b = *(esi + 2)
                    *(esi + 1) = ebx_14
                    edx_6 = zx.d(eax_13.b)
                    ebx_1.b =
                        (((((zx.d(*(edi + 2)) * edx_6) s>> 8) - edx_6) * ecx_15) s>> 8).b + eax_13.b
                    *(esi + 2) = ebx_1.b
                    esi += 4
                    edi += 4
                    j = arg3
                    arg3 -= 1
                while (j != 1)
                ecx_11 = arg5
                result = arg9
        else
            result = ebx_1 & 0xfffffffc
            ecx_11 = ebx_1 - result
        
        if (result s> 0)
            result = ((result - 1) u>> 2) + 1
            uint32_t j_1
            
            do
                uint32_t xmm2_1[0x4] = *edi
                uint32_t xmm5_1[0x4] = *esi
                int32_t xmm0_3[0x4] = xmm6_1 & _mm_srli_epi32(xmm2_1, 8)
                uint32_t xmm2_5[0x4] = _mm_srli_epi32(xmm7_1 & xmm0_3, 0x10)
                int32_t xmm3_3[0x4] = _mm_slli_epi32(xmm2_5, 0x10) | xmm2_5
                int32_t xmm2_7[0x4] = xmm6_1 & xmm5_1
                int32_t xmm1_3[0x4] = _mm_mullo_epi16(xmm6_1 & xmm2_1, xmm2_7)
                int32_t xmm4_2[0x4] = xmm6_1 & _mm_srli_epi32(xmm5_1, 8)
                uint16_t xmm0_5[0x8] = _mm_srli_epi16(_mm_mullo_epi16(xmm0_3, xmm4_2), 8)
                uint16_t xmm1_4[0x8] = _mm_srli_epi16(xmm1_3, 8)
                int32_t xmm0_6[0x4] = _mm_subs_epi16(xmm0_5, xmm4_2)
                int32_t xmm1_5[0x4] = _mm_subs_epi16(xmm1_4, xmm2_7)
                int32_t xmm0_7[0x4] = _mm_mullo_epi16(xmm0_6, xmm3_3)
                int32_t xmm1_6[0x4] = _mm_mullo_epi16(xmm1_5, xmm3_3)
                int32_t xmm0_8[0x4] = _mm_srli_epi16(xmm0_7, 8)
                int32_t xmm1_7[0x4] = _mm_srli_epi16(xmm1_6, 8)
                int32_t xmm0_9[0x4] = _mm_adds_epi16(xmm0_8, xmm4_2)
                *esi = _mm_adds_epi16(xmm1_7, xmm2_7) | _mm_slli_epi32(xmm0_9, 8)
                esi = &esi[1]
                edi = &edi[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
        
        if (ecx_11 s> 0)
            arg5 = nullptr
            arg3 = ecx_11
            int32_t* j_2
            
            do
                edx_6.b = *esi
                uint32_t ecx_16 = zx.d(*(edi + 3))
                result = zx.d(edx_6.b)
                int32_t ebx_24 = ((zx.d(*edi) * result) s>> 8) - result
                result.b = *(esi + 1)
                *esi = ((ebx_24 * ecx_16) s>> 8).b + edx_6.b
                uint32_t edx_8 = zx.d(result.b)
                char ebx_32 =
                    (((((zx.d(*(edi + 1)) * edx_8) s>> 8) - edx_8) * ecx_16) s>> 8).b + result.b
                result.b = *(esi + 2)
                *(esi + 1) = ebx_32
                edx_6 = zx.d(result.b)
                *(esi + 2) =
                    (((((zx.d(*(edi + 2)) * edx_6) s>> 8) - edx_6) * ecx_16) s>> 8).b + result.b
                esi += 4
                edi += 4
                j_2 = arg3
                arg3 -= 1
            while (j_2 != 1)
        
        esi += eax_7
        edi += eax_10
        i = var_4_1
        var_4_1 -= 1
    while (i != 1)

return result
