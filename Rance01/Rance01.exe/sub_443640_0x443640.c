// 函数: sub_443640
// 地址: 0x443640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_98 = ebx
int32_t ebx_1 = *arg11
int32_t esi
int32_t var_9c = esi
int32_t edi
int32_t var_a0 = edi
int128_t* esi_1 = (*(*arg1 + 8))(arg2, arg3)
int128_t* edi_1 = (*(*arg4 + 8))(arg5, arg6)
int32_t eax_9 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_12 = (*(*arg4 + 0x1c))() - arg7 * 4
uint128_t xmm2 =
    zx.o(((arg10[3] << 8 | zx.d((*arg10).b)) << 8 | zx.d((arg10[1]).b)) << 8) | zx.o((arg10[2]).b)
char eax_17 = (arg9[2]).b
int32_t ecx_18 = (arg9[3] << 8 | zx.d((*arg9).b)) << 8 | zx.d((arg9[1]).b)
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm1_2[0x4] = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1
uint128_t xmm4 = zx.o(ecx_18 << 8) | zx.o(eax_17)
int128_t var_30 = zx.o(0)
uint128_t var_50 = xmm4
int32_t result = arg8
uint32_t xmm3_1[0x4] = _mm_slli_epi32(xmm1_2, 8)
uint32_t xmm3_2[0x4] = _mm_shuffle_epi32(xmm2, 0)
int32_t xmm5_3[0x4] = xmm1_2 & _mm_srli_epi32(xmm3_2, 8)
int32_t xmm2_1[0x4] = _mm_unpacklo_epi8(xmm2, 0)
uint32_t xmm5_4[0x4] = _mm_shuffle_epi32(xmm4, 0)
int32_t var_40[0x4] = xmm2_1

if (result s> 0)
    int32_t var_8c_1 = result
    int32_t i
    
    do
        int32_t j_6 = arg7
        result = 0
        void* ecx_22 = esi_1 & 0xf
        int32_t result_1 = 0
        int32_t j_7 = 0
        int32_t j_5
        
        if (ecx_22 != 0)
            if ((ecx_22.b & 4) == 0)
                j_6 = 4 - (ecx_22 u>> 2)
                int32_t ecx_26 = arg7 - j_6
                result = ecx_26 & 0xfffffffc
                result_1 = result
                j_7 = ecx_26 - result
            
            if (j_6 s> 0)
                int32_t j_3 = j_6
                int32_t j
                
                do
                    int32_t xmm3_9 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm2_1), 8), 
                            zx.o(0)), 
                        xmm4)
                    uint32_t ecx_29 = zx.d(xmm3_9:3.b)
                    int32_t edx_20
                    edx_20.b = *(zx.d(*esi_1) + ((zx.d(xmm3_9.b) * ecx_29) s>> 8) + ebx_1)
                    *esi_1 = edx_20.b
                    int32_t eax_26
                    eax_26.b = *(zx.d(*(esi_1 + 1)) + ((zx.d(xmm3_9:1.b) * ecx_29) s>> 8) + ebx_1)
                    *(esi_1 + 1) = eax_26.b
                    ecx_29.b = *(zx.d(*(esi_1 + 2)) + ((zx.d(xmm3_9:2.b) * ecx_29) s>> 8) + ebx_1)
                    *(esi_1 + 2) = ecx_29.b
                    esi_1 += 4
                    edi_1 += 4
                    j = j_3
                    j_3 -= 1
                while (j != 1)
                result = result_1
            
            j_5 = j_7
        else
            result = j_6 & 0xfffffffc
            j_5 = j_6 - result
        
        if (result s> 0)
            result = ((result - 1) u>> 2) + 1
            int32_t j_1
            
            do
                uint32_t xmm4_1[0x4] = *edi_1
                uint32_t xmm0_3[0x4] = xmm1_2 & _mm_srli_epi32(
                    _mm_adds_epu8(__pmullw_xmmdq_memdq(xmm1_2 & _mm_srli_epi32(xmm4_1, 8), xmm5_3), 
                        xmm5_4) & xmm3_1, 
                    8)
                uint32_t xmm3_13[0x4] = _mm_srli_epi32(xmm0_3, 0x10)
                int32_t xmm7_4[0x4] =
                    _mm_srli_epi16(__pmullw_xmmdq_memdq(xmm1_2 & xmm4_1, xmm1_2 & xmm3_2), 8)
                int32_t xmm2_10[0x4] = _mm_slli_epi32(xmm3_13, 0x10) | xmm3_13
                uint32_t xmm3_14[0x4] = *esi_1
                int32_t xmm7_6[0x4] = _mm_adds_epu8(xmm7_4, xmm5_4) & xmm1_2
                int32_t xmm4_3[0x4] = xmm1_2 & _mm_srli_epi32(xmm3_14, 8)
                int32_t xmm0_4[0x4] = _mm_mullo_epi16(xmm0_3, xmm2_10)
                int32_t xmm7_7[0x4] = _mm_mullo_epi16(xmm7_6, xmm2_10)
                uint16_t xmm0_5[0x8] = _mm_srli_epi16(xmm0_4, 8)
                uint16_t xmm7_8[0x8] = _mm_srli_epi16(xmm7_7, 8)
                int32_t xmm4_4[0x4] = _mm_adds_epu8(xmm4_3, xmm0_5)
                *esi_1 = _mm_adds_epu8(xmm1_2 & xmm3_14, xmm7_8) | _mm_slli_epi32(xmm4_4, 8)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
            xmm4 = var_50
            xmm2_1 = var_40
        
        if (j_5 s> 0)
            int32_t j_4 = j_5
            int32_t j_2
            
            do
                uint32_t edx_27 = zx.d(*esi_1)
                int32_t xmm3_21 = _mm_adds_epu8(
                    _mm_packus_epi16(
                        _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm2_1), 
                            8), 
                        zx.o(0)), 
                    xmm4)
                uint32_t ecx_30 = zx.d(xmm3_21:3.b)
                int32_t eax_34
                eax_34.b = *(edx_27 + ((zx.d(xmm3_21.b) * ecx_30) s>> 8) + ebx_1)
                *esi_1 = eax_34.b
                uint32_t ecx_31 = zx.d(*(esi_1 + 2))
                result = ((zx.d(xmm3_21:2.b) * ecx_30) s>> 8) + ebx_1
                *(esi_1 + 1) = *(zx.d(*(esi_1 + 1)) + ((zx.d(xmm3_21:1.b) * ecx_30) s>> 8) + ebx_1)
                *(esi_1 + 2) = *(ecx_31 + result)
                esi_1 += 4
                edi_1 += 4
                j_2 = j_4
                j_4 -= 1
            while (j_2 != 1)
        
        esi_1 += eax_9
        edi_1 += eax_12
        i = var_8c_1
        var_8c_1 -= 1
    while (i != 1)

return result
