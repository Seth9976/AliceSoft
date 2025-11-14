// 函数: sub_446b20
// 地址: 0x446b20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = (*(*arg3 + 8))(arg4, arg2)
int128_t* edi = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_8 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t eax_11 = (*(*arg5 + 0x1c))() - arg8 * 4
void* result = arg9
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
int128_t xmm5_2 = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1
uint32_t xmm7[0x4] = _mm_shuffle_epi32(zx.o(arg10), 0)

if (result s> 0)
    void* var_4_1 = result
    void* i
    
    do
        int32_t* edx_5 = arg8
        result = nullptr
        int32_t* ecx_11 = esi & 0xf
        arg9 = nullptr
        arg3 = nullptr
        void* ecx_13
        
        if (ecx_11 != 0)
            if ((ecx_11.b & 4) == 0)
                edx_5 = 4 - (ecx_11 u>> 2)
                void* ecx_16 = arg8 - edx_5
                result = ecx_16 & 0xfffffffc
                arg9 = result
                arg3 = ecx_16 - result
            
            if (edx_5 s> 0)
                int32_t var_10_1 = 0
                arg5 = edx_5
                int32_t* j
                
                do
                    ecx_11.b = *esi
                    uint32_t eax_14 = zx.d(ecx_11.b)
                    int32_t edx_9 = ((zx.d(*edi) * eax_14) s>> 8) - eax_14
                    eax_14.b = *(esi + 1)
                    *esi = ((edx_9 * arg10) s>> 8).b + ecx_11.b
                    uint32_t ecx_17 = zx.d(eax_14.b)
                    char edx_17 = (((((zx.d(*(edi + 1)) * ecx_17) s>> 8) - ecx_17) * arg10) s>> 8).b
                        + eax_14.b
                    eax_14.b = *(esi + 2)
                    *(esi + 1) = edx_17
                    ecx_11 = zx.d(eax_14.b)
                    *(esi + 2) = (((((zx.d(*(edi + 2)) * ecx_11) s>> 8) - ecx_11) * arg10) s>> 8).b
                        + eax_14.b
                    esi += 4
                    edi += 4
                    j = arg5
                    arg5 -= 1
                while (j != 1)
                result = arg9
            
            ecx_13 = arg3
        else
            result = edx_5 & 0xfffffffc
            ecx_13 = edx_5 - result
        
        if (result s> 0)
            int32_t xmm6_3[0x4] = _mm_slli_epi32(xmm7, 0x10) | xmm7
            result = ((result - 1) u>> 2) + 1
            void* j_1
            
            do
                uint32_t xmm2_1[0x4] = *edi
                uint32_t xmm4_1[0x4] = *esi
                int32_t xmm1_2[0x4] = xmm5_2 & _mm_srli_epi32(xmm2_1, 8)
                int32_t xmm2_4[0x4] = xmm5_2 & xmm4_1
                int32_t xmm0_5[0x4] = _mm_mullo_epi16(xmm5_2 & xmm2_1, xmm2_4)
                int32_t xmm3_2[0x4] = xmm5_2 & _mm_srli_epi32(xmm4_1, 8)
                uint16_t xmm1_4[0x8] = _mm_srli_epi16(_mm_mullo_epi16(xmm1_2, xmm3_2), 8)
                uint16_t xmm0_6[0x8] = _mm_srli_epi16(xmm0_5, 8)
                int32_t xmm1_5[0x4] = _mm_subs_epi16(xmm1_4, xmm3_2)
                int32_t xmm0_7[0x4] = _mm_subs_epi16(xmm0_6, xmm2_4)
                int32_t xmm1_6[0x4] = _mm_mullo_epi16(xmm1_5, xmm6_3)
                int32_t xmm0_8[0x4] = _mm_mullo_epi16(xmm0_7, xmm6_3)
                int32_t xmm1_7[0x4] = _mm_srli_epi16(xmm1_6, 8)
                int32_t xmm0_9[0x4] = _mm_srli_epi16(xmm0_8, 8)
                int32_t xmm1_8[0x4] = _mm_adds_epi16(xmm1_7, xmm3_2)
                *esi = _mm_adds_epi16(xmm0_9, xmm2_4) | _mm_slli_epi32(xmm1_8, 8)
                esi += 0x10
                edi = &edi[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
        
        if (ecx_13 s> 0)
            arg5 = nullptr
            arg3 = ecx_13
            int32_t* j_2
            
            do
                ecx_13.b = *esi
                result = zx.d(ecx_13.b)
                void* edx_27 = ((zx.d(*edi) * result) s>> 8) - result
                result.b = *(esi + 1)
                *esi = ((edx_27 * arg10) s>> 8).b + ecx_13.b
                uint32_t ecx_18 = zx.d(result.b)
                char edx_35 =
                    (((((zx.d(*(edi + 1)) * ecx_18) s>> 8) - ecx_18) * arg10) s>> 8).b + result.b
                result.b = *(esi + 2)
                *(esi + 1) = edx_35
                ecx_13 = zx.d(result.b)
                *(esi + 2) =
                    (((((zx.d(*(edi + 2)) * ecx_13) s>> 8) - ecx_13) * arg10) s>> 8).b + result.b
                esi += 4
                edi += 4
                j_2 = arg3
                arg3 -= 1
            while (j_2 != 1)
        
        esi += eax_8
        edi += eax_11
        i = var_4_1
        var_4_1 -= 1
    while (i != 1)

return result
