// 函数: sub_449850
// 地址: 0x449850
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_a8 = ebx
int32_t esi
int32_t var_ac = esi
int32_t edi
int32_t var_b0 = edi
int128_t* esi_1 = (*(*arg3 + 8))(arg4, arg2)
int128_t* edi_1 = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_8 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t eax_10 = (*(*arg5 + 0x1c))()
uint128_t xmm1 =
    zx.o(((arg12[3] << 8 | zx.d((*arg12).b)) << 8 | zx.d((arg12[1]).b)) << 8) | zx.o((arg12[2]).b)
char eax_15 = (arg11[2]).b
int32_t ecx_21 = (arg11[3] << 8 | zx.d((*arg11).b)) << 8 | zx.d((arg11[1]).b)
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm3_2[0x4] = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1
uint32_t xmm2_1[0x4] = _mm_shuffle_epi32(zx.o(arg10), 0)
uint128_t xmm4 = zx.o(ecx_21 << 8) | zx.o(eax_15)
int128_t var_30 = zx.o(0)
uint128_t var_70 = xmm4
uint32_t result = arg9
uint32_t xmm2_3[0x4] = _mm_slli_epi32(xmm3_2, 8)
uint32_t xmm2_4[0x4] = _mm_shuffle_epi32(xmm1, 0)
int32_t xmm5_3[0x4] = xmm3_2 & _mm_srli_epi32(xmm2_4, 8)
int32_t xmm1_1[0x4] = _mm_unpacklo_epi8(xmm1, 0)
uint32_t xmm7[0x4] = _mm_shuffle_epi32(xmm4, 0)
int32_t var_50[0x4] = xmm1_1

if (result s> 0)
    uint32_t var_9c_1 = result
    uint32_t i
    
    do
        int32_t j_6 = arg8
        result = 0
        int32_t j_5 = 0
        void* edx_14 = esi_1 & 0xf
        uint32_t result_1 = 0
        int32_t j_7 = 0
        
        if (edx_14 != 0)
            if ((edx_14.b & 4) == 0)
                j_6 = 4 - (edx_14 u>> 2)
                int32_t ecx_26 = arg8 - j_6
                result = ecx_26 & 0xfffffffc
                j_5 = ecx_26 - result
                result_1 = result
                j_7 = j_5
            
            if (j_6 s> 0)
                int32_t j_4 = j_6
                int32_t j
                
                do
                    uint32_t eax_19 = zx.d(*esi_1)
                    int32_t xmm2_11 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm1_1), 8), 
                            zx.o(0)), 
                        xmm4)
                    int32_t ebx_5 = ((zx.d(xmm2_11.b) * eax_19) s>> 8) - eax_19
                    eax_19.b = *(esi_1 + 1)
                    int32_t ecx_30 = (zx.d(xmm2_11:3.b) * arg10) s>> 8
                    *esi_1 += ((ebx_5 * ecx_30) s>> 8).b
                    uint32_t ebx_8 = zx.d(eax_19.b)
                    char edx_22 = (((((zx.d(xmm2_11:1.b) * ebx_8) s>> 8) - ebx_8) * ecx_30) s>> 8).b
                        + eax_19.b
                    eax_19.b = *(esi_1 + 2)
                    *(esi_1 + 1) = edx_22
                    uint32_t edx_23 = zx.d(eax_19.b)
                    *(esi_1 + 2) =
                        (((((zx.d(xmm2_11:2.b) * edx_23) s>> 8) - edx_23) * ecx_30) s>> 8).b
                        + eax_19.b
                    esi_1 += 4
                    edi_1 += 4
                    j = j_4
                    j_4 -= 1
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
                uint32_t xmm2_12[0x4] = *edi_1
                uint32_t xmm6_1[0x4] = *esi_1
                uint16_t xmm0_4[0x8] = __pmullw_xmmdq_memdq(xmm3_2 & xmm2_12, xmm3_2 & xmm2_4)
                uint32_t xmm1_3[0x4] = xmm3_2 & _mm_srli_epi32(
                    _mm_adds_epu8(
                        __pmullw_xmmdq_memdq(xmm3_2 & _mm_srli_epi32(xmm2_12, 8), xmm5_3), xmm7)
                        & xmm2_3, 
                    8)
                uint32_t xmm2_17[0x4] =
                    _mm_srli_epi32(__pmullw_xmmdq_memdq(_mm_srli_epi32(xmm1_3, 0x10), xmm2_1), 8)
                int32_t xmm0_7[0x4] = _mm_adds_epu8(_mm_srli_epi16(xmm0_4, 8), xmm7) & xmm3_2
                int32_t xmm4_9[0x4] = _mm_slli_epi32(xmm2_17, 0x10) | xmm2_17
                int32_t xmm2_19[0x4] = xmm3_2 & xmm6_1
                int32_t xmm0_8[0x4] = _mm_mullo_epi16(xmm0_7, xmm2_19)
                int32_t xmm5_5[0x4] = xmm3_2 & _mm_srli_epi32(xmm6_1, 8)
                uint16_t xmm1_5[0x8] = _mm_srli_epi16(_mm_mullo_epi16(xmm1_3, xmm5_5), 8)
                uint16_t xmm0_9[0x8] = _mm_srli_epi16(xmm0_8, 8)
                int32_t xmm1_6[0x4] = _mm_subs_epi16(xmm1_5, xmm5_5)
                int32_t xmm0_10[0x4] = _mm_subs_epi16(xmm0_9, xmm2_19)
                uint16_t xmm1_7[0x8] = _mm_mullo_epi16(xmm1_6, xmm4_9)
                int32_t xmm0_11[0x4] = _mm_mullo_epi16(xmm0_10, xmm4_9)
                int32_t xmm1_8[0x4] = _mm_srli_epi16(xmm1_7, 8)
                int32_t xmm0_12[0x4] = _mm_srli_epi16(xmm0_11, 8)
                int32_t xmm1_9[0x4] = _mm_adds_epi16(xmm1_8, xmm5_5)
                *esi_1 = _mm_adds_epi16(xmm0_12, xmm2_19) | _mm_slli_epi32(xmm1_9, 8)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
            xmm4 = var_70
            xmm1_1 = var_50
        
        if (j_5 s> 0)
            int32_t j_3 = j_5
            int32_t j_2
            
            do
                result = zx.d(*esi_1)
                int32_t xmm2_25 = _mm_adds_epu8(
                    _mm_packus_epi16(
                        _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm1_1), 
                            8), 
                        zx.o(0)), 
                    xmm4)
                int32_t ebx_18 = ((zx.d(xmm2_25.b) * result) s>> 8) - result
                result.b = *(esi_1 + 1)
                int32_t ecx_33 = (zx.d(xmm2_25:3.b) * arg10) s>> 8
                *esi_1 += ((ebx_18 * ecx_33) s>> 8).b
                uint32_t ebx_21 = zx.d(result.b)
                char edx_30 =
                    (((((zx.d(xmm2_25:1.b) * ebx_21) s>> 8) - ebx_21) * ecx_33) s>> 8).b + result.b
                result.b = *(esi_1 + 2)
                *(esi_1 + 1) = edx_30
                uint32_t edx_31 = zx.d(result.b)
                *(esi_1 + 2) =
                    (((((zx.d(xmm2_25:2.b) * edx_31) s>> 8) - edx_31) * ecx_33) s>> 8).b + result.b
                esi_1 += 4
                edi_1 += 4
                j_2 = j_3
                j_3 -= 1
            while (j_2 != 1)
        
        esi_1 += eax_8
        edi_1 += eax_10 - arg8 * 4
        i = var_9c_1
        var_9c_1 -= 1
    while (i != 1)

return result
