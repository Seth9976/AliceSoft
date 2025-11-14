// 函数: sub_4488e0
// 地址: 0x4488e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = (*(*arg3 + 8))(arg4, arg2)
int128_t* edi = (*(*arg5 + 8))(arg6, arg7)
int128_t* ebx = (*(*arg10 + 8))(arg11, arg12)
int32_t eax_11 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t eax_14 = (*(*arg5 + 0x1c))() - arg8 * 4
int32_t eax_17 = (*(*arg10 + 0x1c))() - arg8 * 4
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
int32_t* result = arg9
uint32_t xmm7_1[0x4] = _mm_slli_epi32(xmm0_1, 0x10)
int128_t xmm6_1 = xmm7_1 | xmm0_1

if (result s> 0)
    arg9 = result
    int32_t* i
    
    do
        int32_t* edx_8 = arg8
        result = nullptr
        void* ecx_16 = esi & 0xf
        arg10 = nullptr
        arg3 = nullptr
        void* ecx_18
        
        if (ecx_16 != 0)
            if ((ecx_16.b & 4) == 0)
                edx_8 = 4 - (ecx_16 u>> 2)
                void* ecx_21 = arg8 - edx_8
                result = ecx_21 & 0xfffffffc
                arg10 = result
                arg3 = ecx_21 - result
            
            if (edx_8 s> 0)
                int32_t var_10_1 = 0
                arg5 = edx_8
                int32_t* j
                
                do
                    uint32_t eax_20 = zx.d(*esi)
                    uint32_t eax_21 = zx.d(*(esi + 1))
                    int32_t ecx_25 = (zx.d(*(ebx + 3)) * zx.d(*(edi + 3))) s>> 8
                    char edx_15 =
                        (((((zx.d(*edi) * eax_20) s>> 8) - eax_20) * ecx_25) s>> 8).b + *esi
                    esi += 4
                    *(esi - 4) = edx_15
                    uint32_t eax_22 = zx.d(*(esi - 2))
                    char edx_21 =
                        (((((zx.d(*(edi + 1)) * eax_21) s>> 8) - eax_21) * ecx_25) s>> 8).b
                        + *(esi - 3)
                    edi += 4
                    *(esi - 3) = edx_21
                    ebx += 4
                    j = arg5
                    arg5 -= 1
                    *(esi - 2) +=
                        (((((zx.d(*(edi - 2)) * eax_22) s>> 8) - eax_22) * ecx_25) s>> 8).b
                while (j != 1)
                result = arg10
            
            ecx_18 = arg3
        else
            result = edx_8 & 0xfffffffc
            ecx_18 = edx_8 - result
        
        if (result s> 0)
            result = ((result - 1) u>> 2) + 1
            int32_t* j_1
            
            do
                uint32_t xmm2_1[0x4] = *edi
                uint32_t xmm5_1[0x4] = *esi
                int32_t xmm0_3[0x4] = xmm6_1 & _mm_srli_epi32(xmm2_1, 8)
                uint32_t xmm2_6[0x4] = _mm_srli_epi32(
                    _mm_mullo_epi16(_mm_srli_epi32(*ebx, 0x18), 
                        _mm_srli_epi32(xmm7_1 & xmm0_3, 0x10)), 
                    8)
                int32_t xmm3_6[0x4] = _mm_slli_epi32(xmm2_6, 0x10) | xmm2_6
                int32_t xmm2_8[0x4] = xmm6_1 & xmm5_1
                int32_t xmm1_3[0x4] = _mm_mullo_epi16(xmm6_1 & xmm2_1, xmm2_8)
                int32_t xmm4_2[0x4] = xmm6_1 & _mm_srli_epi32(xmm5_1, 8)
                uint16_t xmm0_5[0x8] = _mm_srli_epi16(_mm_mullo_epi16(xmm0_3, xmm4_2), 8)
                uint16_t xmm1_4[0x8] = _mm_srli_epi16(xmm1_3, 8)
                int32_t xmm0_6[0x4] = _mm_subs_epi16(xmm0_5, xmm4_2)
                int32_t xmm1_5[0x4] = _mm_subs_epi16(xmm1_4, xmm2_8)
                int32_t xmm0_7[0x4] = _mm_mullo_epi16(xmm0_6, xmm3_6)
                int32_t xmm1_6[0x4] = _mm_mullo_epi16(xmm1_5, xmm3_6)
                int32_t xmm0_8[0x4] = _mm_srli_epi16(xmm0_7, 8)
                int32_t xmm1_7[0x4] = _mm_srli_epi16(xmm1_6, 8)
                int32_t xmm0_9[0x4] = _mm_adds_epi16(xmm0_8, xmm4_2)
                *esi = _mm_adds_epi16(xmm1_7, xmm2_8) | _mm_slli_epi32(xmm0_9, 8)
                esi += 0x10
                edi = &edi[1]
                ebx = &ebx[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
        
        if (ecx_18 s> 0)
            arg5 = nullptr
            arg3 = ecx_18
            int32_t* j_2
            
            do
                uint32_t eax_26 = zx.d(*esi)
                uint32_t eax_27 = zx.d(*(esi + 1))
                int32_t ecx_28 = (zx.d(*(ebx + 3)) * zx.d(*(edi + 3))) s>> 8
                char edx_33 = (((((zx.d(*edi) * eax_26) s>> 8) - eax_26) * ecx_28) s>> 8).b + *esi
                esi += 4
                *(esi - 4) = edx_33
                result = zx.d(*(esi - 2))
                char edx_39 =
                    (((((zx.d(*(edi + 1)) * eax_27) s>> 8) - eax_27) * ecx_28) s>> 8).b + *(esi - 3)
                edi += 4
                *(esi - 3) = edx_39
                ebx += 4
                j_2 = arg3
                arg3 -= 1
                *(esi - 2) += (((((zx.d(*(edi - 2)) * result) s>> 8) - result) * ecx_28) s>> 8).b
            while (j_2 != 1)
        
        esi += eax_11
        edi += eax_14
        ebx += eax_17
        i = arg9
        arg9 -= 1
    while (i != 1)

return result
