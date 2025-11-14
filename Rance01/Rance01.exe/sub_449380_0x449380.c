// 函数: sub_449380
// 地址: 0x449380
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_48 = ebx
int32_t esi
int32_t var_4c = esi
int32_t edi
int32_t var_50 = edi
int128_t* esi_1 = (*(*arg3 + 8))(arg4, arg2)
int128_t* edi_1 = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_7 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t eax_10 = (*(*arg5 + 0x1c))() - arg8 * 4
uint32_t result = arg9
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm7_1[0x4] = _mm_slli_epi32(xmm0_1, 0x10)
int128_t xmm6_1 = xmm7_1 | xmm0_1
uint32_t xmm0_3[0x4] = _mm_shuffle_epi32(zx.o(arg10), 0)

if (result s> 0)
    uint32_t var_40_1 = result
    uint32_t i
    
    do
        int32_t j_6 = arg8
        result = 0
        int32_t j_5 = 0
        uint32_t edx_6 = esi_1 & 0xf
        uint32_t result_1 = 0
        int32_t j_7 = 0
        
        if (edx_6 != 0)
            if ((edx_6.b & 4) == 0)
                j_6 = 4 - (edx_6 u>> 2)
                int32_t ecx_13 = arg8 - j_6
                result = ecx_13 & 0xfffffffc
                j_5 = ecx_13 - result
                result_1 = result
                j_7 = j_5
            
            if (j_6 s> 0)
                int32_t var_34_1 = 0
                int32_t j_3 = j_6
                int32_t j
                
                do
                    edx_6.b = *esi_1
                    uint32_t eax_13 = zx.d(edx_6.b)
                    int32_t ebx_5 = ((zx.d(*edi_1) * eax_13) s>> 8) - eax_13
                    eax_13.b = *(esi_1 + 1)
                    int32_t ecx_16 = (zx.d(*(edi_1 + 3)) * arg10) s>> 8
                    *esi_1 = ((ebx_5 * ecx_16) s>> 8).b + edx_6.b
                    uint32_t edx_7 = zx.d(eax_13.b)
                    char ebx_13 =
                        (((((zx.d(*(edi_1 + 1)) * edx_7) s>> 8) - edx_7) * ecx_16) s>> 8).b
                        + eax_13.b
                    eax_13.b = *(esi_1 + 2)
                    *(esi_1 + 1) = ebx_13
                    edx_6 = zx.d(eax_13.b)
                    *(esi_1 + 2) =
                        (((((zx.d(*(edi_1 + 2)) * edx_6) s>> 8) - edx_6) * ecx_16) s>> 8).b
                        + eax_13.b
                    esi_1 += 4
                    edi_1 += 4
                    j = j_3
                    j_3 -= 1
                while (j != 1)
                j_5 = j_7
                result = result_1
        else
            result = j_6 & 0xfffffffc
            j_5 = j_6 - result
        
        if (result s> 0)
            result = ((result - 1) u>> 2) + 1
            uint32_t j_1
            
            do
                uint32_t xmm2_1[0x4] = *edi_1
                uint32_t xmm5_1[0x4] = *esi_1
                int32_t xmm0_5[0x4] = xmm6_1 & _mm_srli_epi32(xmm2_1, 8)
                uint32_t xmm2_7[0x4] = _mm_srli_epi32(
                    __pmullw_xmmdq_memdq(_mm_srli_epi32(xmm7_1 & xmm0_5, 0x10), xmm0_3), 8)
                int32_t xmm3_3[0x4] = _mm_slli_epi32(xmm2_7, 0x10) | xmm2_7
                int32_t xmm2_9[0x4] = xmm6_1 & xmm5_1
                int32_t xmm1_3[0x4] = _mm_mullo_epi16(xmm6_1 & xmm2_1, xmm2_9)
                int32_t xmm4_2[0x4] = xmm6_1 & _mm_srli_epi32(xmm5_1, 8)
                uint16_t xmm0_7[0x8] = _mm_srli_epi16(_mm_mullo_epi16(xmm0_5, xmm4_2), 8)
                uint16_t xmm1_4[0x8] = _mm_srli_epi16(xmm1_3, 8)
                int32_t xmm0_8[0x4] = _mm_subs_epi16(xmm0_7, xmm4_2)
                int32_t xmm1_5[0x4] = _mm_subs_epi16(xmm1_4, xmm2_9)
                int32_t xmm0_9[0x4] = _mm_mullo_epi16(xmm0_8, xmm3_3)
                int32_t xmm1_6[0x4] = _mm_mullo_epi16(xmm1_5, xmm3_3)
                int32_t xmm0_10[0x4] = _mm_srli_epi16(xmm0_9, 8)
                int32_t xmm1_7[0x4] = _mm_srli_epi16(xmm1_6, 8)
                int32_t xmm0_11[0x4] = _mm_adds_epi16(xmm0_10, xmm4_2)
                *esi_1 = _mm_adds_epi16(xmm1_7, xmm2_9) | _mm_slli_epi32(xmm0_11, 8)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
        
        if (j_5 s> 0)
            int32_t var_34_2 = 0
            int32_t j_4 = j_5
            int32_t j_2
            
            do
                edx_6.b = *esi_1
                result = zx.d(edx_6.b)
                int32_t ebx_23 = ((zx.d(*edi_1) * result) s>> 8) - result
                result.b = *(esi_1 + 1)
                int32_t ecx_19 = (zx.d(*(edi_1 + 3)) * arg10) s>> 8
                *esi_1 = ((ebx_23 * ecx_19) s>> 8).b + edx_6.b
                uint32_t edx_8 = zx.d(result.b)
                char ebx_31 =
                    (((((zx.d(*(edi_1 + 1)) * edx_8) s>> 8) - edx_8) * ecx_19) s>> 8).b + result.b
                result.b = *(esi_1 + 2)
                *(esi_1 + 1) = ebx_31
                edx_6 = zx.d(result.b)
                *(esi_1 + 2) =
                    (((((zx.d(*(edi_1 + 2)) * edx_6) s>> 8) - edx_6) * ecx_19) s>> 8).b + result.b
                esi_1 += 4
                edi_1 += 4
                j_2 = j_4
                j_4 -= 1
            while (j_2 != 1)
        
        esi_1 += eax_7
        edi_1 += eax_10
        i = var_40_1
        var_40_1 -= 1
    while (i != 1)

return result
