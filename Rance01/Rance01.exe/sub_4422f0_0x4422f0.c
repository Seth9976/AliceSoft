// 函数: sub_4422f0
// 地址: 0x4422f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_a8 = ebx
int32_t esi
int32_t var_ac = esi
int32_t edi
int32_t var_b0 = edi
int32_t var_90 = *arg12
int128_t* esi_1 = (*(*arg1 + 8))(arg2, arg3)
int128_t* edi_1 = (*(*arg4 + 8))(arg5, arg6)
int32_t eax_9 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_12 = (*(*arg4 + 0x1c))() - arg7 * 4
int32_t edx_12 =
    ((arg11[3] << 8 | zx.d((*arg11).b)) << 8 | zx.d((arg11[1]).b)) << 8 | zx.d((arg11[2]).b)
int32_t ecx_15 = arg10[3]
uint32_t xmm1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm0_3[0x4] = _mm_slli_epi32(xmm1, 0x10) | xmm1
uint128_t xmm1_1 = zx.o(edx_12)
int128_t var_30 = zx.o(0)
uint128_t xmm5 =
    zx.o(((ecx_15 << 8 | zx.d((*arg10).b)) << 8 | zx.d((arg10[1]).b)) << 8) | zx.o((arg10[2]).b)
int32_t result = arg8
uint32_t xmm6[0x4] = _mm_shuffle_epi32(zx.o(arg9), 0)
var_90.o = _mm_slli_epi32(xmm0_3, 8)
uint32_t xmm3_3[0x4] = _mm_shuffle_epi32(xmm1_1, 0)
int32_t xmm4_3[0x4] = xmm0_3 & _mm_srli_epi32(xmm3_3, 8)
int32_t xmm1_2[0x4] = _mm_unpacklo_epi8(xmm1_1, 0)
uint128_t var_70 = xmm5
uint32_t var_80[0x4] = xmm6
uint32_t xmm4_4[0x4] = _mm_shuffle_epi32(xmm5, 0)
int32_t var_50[0x4] = xmm1_2

if (result s> 0)
    int32_t var_9c_1 = result
    int32_t i
    
    do
        int32_t j_6 = arg7
        result = 0
        void* ecx_23 = esi_1 & 0xf
        int32_t result_1 = 0
        int32_t j_7 = 0
        int32_t var_a0
        int32_t j_5
        
        if (ecx_23 != 0)
            if ((ecx_23.b & 4) == 0)
                j_6 = 4 - (ecx_23 u>> 2)
                int32_t ecx_27 = arg7 - j_6
                result = ecx_27 & 0xfffffffc
                result_1 = result
                j_7 = ecx_27 - result
            
            if (j_6 s> 0)
                int32_t j_3 = j_6
                int32_t j
                
                do
                    uint32_t ecx_30 = zx.d(*esi_1)
                    int24_t xmm3_10 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm1_2), 8), 
                            zx.o(0)), 
                        xmm5)
                    *esi_1 = *(ecx_30 + ((zx.d(xmm3_10.b) * arg9) s>> 8) + var_a0)
                    int32_t ecx_34
                    ecx_34.b = *(zx.d(*(esi_1 + 1)) + ((zx.d(xmm3_10:1.b) * arg9) s>> 8) + var_a0)
                    *(esi_1 + 1) = ecx_34.b
                    *(esi_1 + 2) =
                        *(zx.d(*(esi_1 + 2)) + ((zx.d(xmm3_10:2.b) * arg9) s>> 8) + var_a0)
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
            int32_t xmm3_13[0x4] = _mm_slli_epi32(xmm6, 0x10) | xmm6
            result = ((result - 1) u>> 2) + 1
            int32_t j_1
            
            do
                uint32_t xmm1_3[0x4] = *edi_1
                uint32_t xmm2_1[0x4] = *esi_1
                *esi_1 = _mm_adds_epu8(xmm0_3 & xmm2_1, 
                    _mm_srli_epi16(
                        _mm_mullo_epi16(
                            _mm_adds_epu8(
                                _mm_srli_epi16(
                                    __pmullw_xmmdq_memdq(xmm0_3 & xmm1_3, xmm0_3 & xmm3_3), 8), 
                                xmm4_4) & xmm0_3, 
                            xmm3_13), 
                        8)) | _mm_slli_epi32(
                    _mm_adds_epu8(xmm0_3 & _mm_srli_epi32(xmm2_1, 8), 
                        _mm_srli_epi16(
                            _mm_mullo_epi16(
                                xmm0_3 & _mm_srli_epi32(
                                    _mm_adds_epu8(
                                        __pmullw_xmmdq_memdq(xmm0_3 & _mm_srli_epi32(xmm1_3, 8), 
                                            xmm4_3), 
                                        xmm4_4) & var_90.o, 
                                    8), 
                                xmm3_13), 
                            8)), 
                    8)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
            xmm6 = var_80
            xmm5 = var_70
            xmm1_2 = var_50
        
        if (j_5 s> 0)
            int32_t j_4 = j_5
            int32_t j_2
            
            do
                uint32_t edx_28 = zx.d(*esi_1)
                int24_t xmm3_19 = _mm_adds_epu8(
                    _mm_packus_epi16(
                        _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm1_2), 
                            8), 
                        zx.o(0)), 
                    xmm5)
                int32_t ecx_39
                ecx_39.b = *(edx_28 + ((zx.d(xmm3_19.b) * arg9) s>> 8) + var_a0)
                *esi_1 = ecx_39.b
                int32_t edx_32
                edx_32.b = *(zx.d(*(esi_1 + 1)) + ((zx.d(xmm3_19:1.b) * arg9) s>> 8) + var_a0)
                *(esi_1 + 1) = edx_32.b
                result.b = *(zx.d(*(esi_1 + 2)) + ((zx.d(xmm3_19:2.b) * arg9) s>> 8) + var_a0)
                *(esi_1 + 2) = result.b
                esi_1 += 4
                edi_1 += 4
                j_2 = j_4
                j_4 -= 1
            while (j_2 != 1)
        
        esi_1 += eax_9
        edi_1 += eax_12
        i = var_9c_1
        var_9c_1 -= 1
    while (i != 1)

return result
