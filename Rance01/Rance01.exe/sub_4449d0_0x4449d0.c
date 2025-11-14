// 函数: sub_4449d0
// 地址: 0x4449d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_a8 = ebx
int32_t esi
int32_t var_ac = esi
int32_t edi
int32_t var_b0 = edi
int32_t edi_1 = *arg12
int128_t* esi_1 = (*(*arg1 + 8))(arg2, arg3)
int128_t* ebx_1 = (*(*arg4 + 8))(arg5, arg6)
int32_t eax_9 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_12 = (*(*arg4 + 0x1c))() - arg7 * 4
uint128_t xmm1 =
    zx.o(((arg11[3] << 8 | zx.d((*arg11).b)) << 8 | zx.d((arg11[1]).b)) << 8) | zx.o((arg11[2]).b)
char eax_17 = (arg10[2]).b
int32_t ecx_18 = (arg10[3] << 8 | zx.d((*arg10).b)) << 8 | zx.d((arg10[1]).b)
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm2_2[0x4] = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1
uint128_t xmm4 = zx.o(ecx_18 << 8) | zx.o(eax_17)
int128_t var_30 = zx.o(0)
uint128_t var_70 = xmm4
int32_t result = arg8
uint32_t xmm3_1[0x4] = _mm_shuffle_epi32(zx.o(arg9), 0)
uint32_t xmm3_3[0x4] = _mm_slli_epi32(xmm2_2, 8)
uint32_t xmm3_4[0x4] = _mm_shuffle_epi32(xmm1, 0)
int32_t xmm5_3[0x4] = xmm2_2 & _mm_srli_epi32(xmm3_4, 8)
int32_t xmm1_1[0x4] = _mm_unpacklo_epi8(xmm1, 0)
uint32_t xmm5_4[0x4] = _mm_shuffle_epi32(xmm4, 0)
int32_t var_50[0x4] = xmm1_1

if (result s> 0)
    int32_t var_9c_1 = result
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
                int32_t j_4 = j_6
                int32_t j
                
                do
                    int32_t xmm3_11 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*ebx_1), 0), xmm1_1), 8), 
                            zx.o(0)), 
                        xmm4)
                    int32_t ecx_31 = (zx.d(xmm3_11:3.b) * arg9) s>> 8
                    int32_t edx_20
                    edx_20.b = *(zx.d(*esi_1) + ((zx.d(xmm3_11.b) * ecx_31) s>> 8) + edi_1)
                    *esi_1 = edx_20.b
                    int32_t eax_26
                    eax_26.b = *(zx.d(*(esi_1 + 1)) + ((zx.d(xmm3_11:1.b) * ecx_31) s>> 8) + edi_1)
                    *(esi_1 + 1) = eax_26.b
                    ecx_31.b = *(zx.d(*(esi_1 + 2)) + ((zx.d(xmm3_11:2.b) * ecx_31) s>> 8) + edi_1)
                    *(esi_1 + 2) = ecx_31.b
                    esi_1 += 4
                    ebx_1 += 4
                    j = j_4
                    j_4 -= 1
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
                uint32_t xmm4_1[0x4] = *ebx_1
                int32_t xmm0_3[0x4] = xmm2_2 & _mm_srli_epi32(
                    _mm_adds_epu8(__pmullw_xmmdq_memdq(xmm2_2 & _mm_srli_epi32(xmm4_1, 8), xmm5_3), 
                        xmm5_4) & xmm3_3, 
                    8)
                uint32_t xmm1_11[0x4] =
                    _mm_srli_epi32(__pmullw_xmmdq_memdq(_mm_srli_epi32(xmm0_3, 0x10), xmm3_1), 8)
                int32_t xmm7_4[0x4] =
                    _mm_srli_epi16(__pmullw_xmmdq_memdq(xmm2_2 & xmm4_1, xmm2_2 & xmm3_4), 8)
                int32_t xmm3_16[0x4] = _mm_slli_epi32(xmm1_11, 0x10) | xmm1_11
                uint32_t xmm1_12[0x4] = *esi_1
                int32_t xmm7_6[0x4] = _mm_adds_epu8(xmm7_4, xmm5_4) & xmm2_2
                int32_t xmm4_3[0x4] = xmm2_2 & _mm_srli_epi32(xmm1_12, 8)
                int32_t xmm0_4[0x4] = _mm_mullo_epi16(xmm0_3, xmm3_16)
                int32_t xmm7_7[0x4] = _mm_mullo_epi16(xmm7_6, xmm3_16)
                uint16_t xmm0_5[0x8] = _mm_srli_epi16(xmm0_4, 8)
                uint16_t xmm7_8[0x8] = _mm_srli_epi16(xmm7_7, 8)
                int32_t xmm4_4[0x4] = _mm_adds_epu8(xmm4_3, xmm0_5)
                *esi_1 = _mm_adds_epu8(xmm2_2 & xmm1_12, xmm7_8) | _mm_slli_epi32(xmm4_4, 8)
                esi_1 = &esi_1[1]
                ebx_1 = &ebx_1[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
            xmm4 = var_70
            xmm1_1 = var_50
        
        if (j_5 s> 0)
            int32_t j_3 = j_5
            int32_t j_2
            
            do
                uint16_t xmm3_19[0x8] = _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*ebx_1), 0), xmm1_1)
                uint32_t edx_27 = zx.d(*esi_1)
                int32_t xmm3_22 =
                    _mm_adds_epu8(_mm_packus_epi16(_mm_srli_epi16(xmm3_19, 8), zx.o(0)), xmm4)
                int32_t ecx_34 = (zx.d(xmm3_22:3.b) * arg9) s>> 8
                int32_t eax_34
                eax_34.b = *(edx_27 + ((zx.d(xmm3_22.b) * ecx_34) s>> 8) + edi_1)
                *esi_1 = eax_34.b
                uint32_t ecx_35 = zx.d(*(esi_1 + 2))
                result = ((zx.d(xmm3_22:2.b) * ecx_34) s>> 8) + edi_1
                *(esi_1 + 1) = *(zx.d(*(esi_1 + 1)) + ((zx.d(xmm3_22:1.b) * ecx_34) s>> 8) + edi_1)
                *(esi_1 + 2) = *(ecx_35 + result)
                esi_1 += 4
                ebx_1 += 4
                j_2 = j_3
                j_3 -= 1
            while (j_2 != 1)
        
        esi_1 += eax_9
        ebx_1 += eax_12
        i = var_9c_1
        var_9c_1 -= 1
    while (i != 1)

return result
