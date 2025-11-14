// 函数: sub_4419d0
// 地址: 0x4419d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_a8 = ebx
int32_t esi
int32_t var_ac = esi
int32_t edi
int32_t var_b0 = edi
int32_t var_88 = *arg14
int128_t* esi_1 = (*(*arg1 + 8))(arg2, arg3)
int128_t* edi_1 = (*(*arg4 + 8))(arg5, arg6)
int128_t* ebx_1 = (*(*arg9 + 8))(arg10, arg11)
int32_t eax_12 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_15 = (*(*arg4 + 0x1c))() - arg7 * 4
int32_t eax_18 = (*(*arg9 + 0x1c))() - arg7 * 4
int32_t ecx_18 = arg13[3] << 8 | zx.d((*arg13).b)
char edx_11 = (arg13[1]).b
char eax_20 = (arg13[2]).b
uint32_t xmm1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm0_3[0x4] = _mm_slli_epi32(xmm1, 0x10) | xmm1
int128_t var_30 = zx.o(0)
uint128_t xmm2 = zx.o((ecx_18 << 8 | zx.d(edx_11)) << 8) | zx.o(eax_20)
char eax_23 = (arg12[2]).b
int32_t ecx_27 = (arg12[3] << 8 | zx.d((*arg12).b)) << 8 | zx.d((arg12[1]).b)
uint32_t xmm3_1[0x4] = _mm_slli_epi32(xmm0_3, 8)
uint32_t xmm3_2[0x4] = _mm_shuffle_epi32(xmm2, 0)
int32_t result = arg8
int32_t xmm4_3[0x4] = xmm0_3 & _mm_srli_epi32(xmm3_2, 8)
uint128_t xmm5 = zx.o(ecx_27 << 8) | zx.o(eax_23)
int32_t xmm2_1[0x4] = _mm_unpacklo_epi8(xmm2, 0)
uint128_t var_70 = xmm5
uint32_t xmm4_4[0x4] = _mm_shuffle_epi32(xmm5, 0)
int32_t var_50[0x4] = xmm2_1

if (result s> 0)
    int32_t var_90_1 = result
    int32_t i
    
    do
        int32_t j_6 = arg7
        result = 0
        void* ecx_31 = esi_1 & 0xf
        int32_t result_1 = 0
        int32_t j_7 = 0
        int32_t result_2
        int32_t j_5
        
        if (ecx_31 != 0)
            if ((ecx_31.b & 4) == 0)
                j_6 = 4 - (ecx_31 u>> 2)
                int32_t ecx_35 = arg7 - j_6
                result = ecx_35 & 0xfffffffc
                result_1 = result
                j_7 = ecx_35 - result
            
            if (j_6 s> 0)
                int32_t j_3 = j_6
                int32_t j
                
                do
                    uint32_t ecx_38 = zx.d(*(ebx_1 + 3))
                    int24_t xmm3_9 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm2_1), 8), 
                            zx.o(0)), 
                        xmm5)
                    *esi_1 = *(zx.d(*esi_1) + ((zx.d(xmm3_9.b) * ecx_38) s>> 8) + result_2)
                    int32_t ecx_43
                    ecx_43.b =
                        *(zx.d(*(esi_1 + 1)) + ((zx.d(xmm3_9:1.b) * ecx_38) s>> 8) + result_2)
                    *(esi_1 + 1) = ecx_43.b
                    *(esi_1 + 2) =
                        *(zx.d(*(esi_1 + 2)) + ((zx.d(xmm3_9:2.b) * ecx_38) s>> 8) + result_2)
                    esi_1 += 4
                    edi_1 += 4
                    ebx_1 += 4
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
                uint32_t xmm2_2[0x4] = *edi_1
                uint32_t xmm3_11[0x4] = _mm_srli_epi32(*ebx_1, 0x18)
                int32_t xmm6_6[0x4] = _mm_adds_epu8(
                    _mm_srli_epi16(__pmullw_xmmdq_memdq(xmm0_3 & xmm2_2, xmm0_3 & xmm3_2), 8), 
                    xmm4_4) & xmm0_3
                int32_t xmm1_3[0x4] = _mm_slli_epi32(xmm3_11, 0x10) | xmm3_11
                uint32_t xmm3_12[0x4] = *esi_1
                *esi_1 = _mm_adds_epu8(xmm0_3 & xmm3_12, 
                    _mm_srli_epi16(_mm_mullo_epi16(xmm6_6, xmm1_3), 8)) | _mm_slli_epi32(
                    _mm_adds_epu8(xmm0_3 & _mm_srli_epi32(xmm3_12, 8), 
                        _mm_srli_epi16(
                            _mm_mullo_epi16(
                                xmm0_3 & _mm_srli_epi32(
                                    _mm_adds_epu8(
                                        __pmullw_xmmdq_memdq(xmm0_3 & _mm_srli_epi32(xmm2_2, 8), 
                                            xmm4_3), 
                                        xmm4_4) & xmm3_1, 
                                    8), 
                                xmm1_3), 
                            8)), 
                    8)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                ebx_1 = &ebx_1[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
            xmm5 = var_70
            xmm2_1 = var_50
        
        if (j_5 s> 0)
            int32_t j_4 = j_5
            int32_t j_2
            
            do
                uint32_t ecx_45 = zx.d(*(ebx_1 + 3))
                int24_t xmm3_23 = _mm_adds_epu8(
                    _mm_packus_epi16(
                        _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm2_1), 
                            8), 
                        zx.o(0)), 
                    xmm5)
                result = result_2
                *esi_1 = *(zx.d(*esi_1) + ((zx.d(xmm3_23.b) * ecx_45) s>> 8) + result)
                int32_t ecx_50
                ecx_50.b = *(zx.d(*(esi_1 + 1)) + ((zx.d(xmm3_23:1.b) * ecx_45) s>> 8) + result)
                *(esi_1 + 1) = ecx_50.b
                *(esi_1 + 2) = *(zx.d(*(esi_1 + 2)) + ((zx.d(xmm3_23:2.b) * ecx_45) s>> 8) + result)
                esi_1 += 4
                edi_1 += 4
                ebx_1 += 4
                j_2 = j_4
                j_4 -= 1
            while (j_2 != 1)
        
        esi_1 += eax_12
        edi_1 += eax_15
        ebx_1 += eax_18
        i = var_90_1
        var_90_1 -= 1
    while (i != 1)

return result
