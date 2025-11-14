// 函数: sub_43fe80
// 地址: 0x43fe80
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
uint32_t xmm2_2[0x4] = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1
uint32_t xmm3_1[0x4] = _mm_shuffle_epi32(zx.o(arg10), 0)
uint128_t xmm4 = zx.o(ecx_21 << 8) | zx.o(eax_15)
int128_t var_30 = zx.o(0)
uint128_t var_70 = xmm4
uint32_t result = arg9
uint32_t xmm3_3[0x4] = _mm_slli_epi32(xmm2_2, 8)
uint32_t xmm3_4[0x4] = _mm_shuffle_epi32(xmm1, 0)
int32_t xmm5_3[0x4] = xmm2_2 & _mm_srli_epi32(xmm3_4, 8)
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
                    int32_t xmm3_11 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm1_1), 8), 
                            zx.o(0)), 
                        xmm4)
                    uint32_t ebx_3 = zx.d(xmm3_11.b) - eax_19
                    eax_19.b = *(esi_1 + 1)
                    int32_t ecx_30 = (zx.d(xmm3_11:3.b) * arg10) s>> 8
                    *esi_1 += ((ebx_3 * ecx_30) s>> 8).b
                    char edx_20 =
                        (((zx.d(xmm3_11:1.b) - zx.d(eax_19.b)) * ecx_30) s>> 8).b + eax_19.b
                    eax_19.b = *(esi_1 + 2)
                    *(esi_1 + 1) = edx_20
                    *(esi_1 + 2) =
                        (((zx.d(xmm3_11:2.b) - zx.d(eax_19.b)) * ecx_30) s>> 8).b + eax_19.b
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
                uint32_t xmm6_1[0x4] = *edi_1
                uint32_t xmm0_3[0x4] = xmm2_2 & _mm_srli_epi32(
                    _mm_adds_epu8(__pmullw_xmmdq_memdq(xmm2_2 & _mm_srli_epi32(xmm6_1, 8), xmm5_3), 
                        xmm7) & xmm3_3, 
                    8)
                uint32_t xmm1_11[0x4] =
                    _mm_srli_epi32(__pmullw_xmmdq_memdq(_mm_srli_epi32(xmm0_3, 0x10), xmm3_1), 8)
                int32_t xmm3_16[0x4] = _mm_slli_epi32(xmm1_11, 0x10) | xmm1_11
                uint32_t xmm1_12[0x4] = *esi_1
                int32_t xmm4_2[0x4] = xmm2_2 & xmm1_12
                int32_t xmm5_5[0x4] = xmm2_2 & _mm_srli_epi32(xmm1_12, 8)
                int32_t xmm1_19[0x4] = _mm_adds_epu8(
                    _mm_srli_epi16(__pmullw_xmmdq_memdq(xmm2_2 & xmm6_1, xmm2_2 & xmm3_4), 8), xmm7)
                    & xmm2_2
                int32_t xmm0_4[0x4] = _mm_subs_epi16(xmm0_3, xmm5_5)
                int32_t xmm1_20[0x4] = _mm_subs_epi16(xmm1_19, xmm4_2)
                uint16_t xmm0_5[0x8] = _mm_mullo_epi16(xmm0_4, xmm3_16)
                int32_t xmm1_21[0x4] = _mm_mullo_epi16(xmm1_20, xmm3_16)
                int32_t xmm0_6[0x4] = _mm_srli_epi16(xmm0_5, 8)
                int32_t xmm1_22[0x4] = _mm_srli_epi16(xmm1_21, 8)
                int32_t xmm0_7[0x4] = _mm_adds_epi16(xmm0_6, xmm5_5)
                *esi_1 = _mm_adds_epi16(xmm1_22, xmm4_2) | _mm_slli_epi32(xmm0_7, 8)
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
                int32_t xmm3_22 = _mm_adds_epu8(
                    _mm_packus_epi16(
                        _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm1_1), 
                            8), 
                        zx.o(0)), 
                    xmm4)
                uint32_t ebx_9 = zx.d(xmm3_22.b) - result
                result.b = *(esi_1 + 1)
                int32_t ecx_33 = (zx.d(xmm3_22:3.b) * arg10) s>> 8
                *esi_1 += ((ebx_9 * ecx_33) s>> 8).b
                char edx_29 = (((zx.d(xmm3_22:1.b) - zx.d(result.b)) * ecx_33) s>> 8).b + result.b
                result.b = *(esi_1 + 2)
                *(esi_1 + 1) = edx_29
                *(esi_1 + 2) = (((zx.d(xmm3_22:2.b) - zx.d(result.b)) * ecx_33) s>> 8).b + result.b
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
