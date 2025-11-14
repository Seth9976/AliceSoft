// 函数: sub_44ac50
// 地址: 0x44ac50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_98 = ebx
int32_t ebx_1 = *(arg11 + 0x20)
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
uint128_t xmm6 = zx.o(ecx_18 << 8) | zx.o(eax_17)
int128_t var_30 = zx.o(0)
uint128_t var_50 = xmm6
uint32_t result = arg8
uint32_t xmm4_1[0x4] = _mm_slli_epi32(xmm1_2, 8)
uint32_t xmm3_2[0x4] = _mm_shuffle_epi32(xmm2, 0)
int32_t xmm5_3[0x4] = xmm1_2 & _mm_srli_epi32(xmm3_2, 8)
int32_t xmm2_1[0x4] = _mm_unpacklo_epi8(xmm2, 0)
uint32_t xmm5_4[0x4] = _mm_shuffle_epi32(xmm6, 0)
int32_t var_40[0x4] = xmm2_1

if (result s> 0)
    uint32_t var_8c_1 = result
    uint32_t i
    
    do
        int32_t j_5 = arg7
        int32_t edx_17 = 0
        void* ecx_22 = esi_1 & 0xf
        uint32_t result_1 = 0
        
        if (ecx_22 != 0)
            if ((ecx_22.b & 4) == 0)
                j_5 = 4 - (ecx_22 u>> 2)
                int32_t ecx_25 = arg7 - j_5
                edx_17 = ecx_25 & 0xfffffffc
                result_1 = ecx_25 - edx_17
            
            if (j_5 s> 0)
                int32_t j_3 = j_5
                int32_t j
                
                do
                    uint32_t ecx_28 = zx.d(*esi_1)
                    int24_t xmm3_9 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm2_1), 8), 
                            zx.o(0)), 
                        xmm6)
                    uint32_t eax_21 = zx.d(*(esi_1 + 1))
                    *esi_1 = *(zx.d(xmm3_9.b) + (ecx_28 << 8) + ebx_1)
                    int32_t eax_23
                    eax_23.b = *(zx.d(xmm3_9:1.b) + (eax_21 << 8) + ebx_1)
                    uint32_t ecx_33 = zx.d(*(esi_1 + 2))
                    *(esi_1 + 1) = eax_23.b
                    *(esi_1 + 2) = *(zx.d(xmm3_9:2.b) + (ecx_33 << 8) + ebx_1)
                    esi_1 += 4
                    edi_1 += 4
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            result = result_1
        else
            edx_17 = j_5 & 0xfffffffc
            result = j_5 - edx_17
        
        if (edx_17 s> 0)
            int32_t j_4 = ((edx_17 - 1) u>> 2) + 1
            int32_t j_1
            
            do
                uint32_t xmm3_10[0x4] = *edi_1
                int32_t xmm0_6[0x4] = _mm_adds_epu8(
                    _mm_srli_epi16(__pmullw_xmmdq_memdq(xmm1_2 & xmm3_10, xmm1_2 & xmm3_2), 8), 
                    xmm5_4)
                int32_t xmm6_3[0x4] =
                    __pmullw_xmmdq_memdq(xmm1_2 & _mm_srli_epi32(xmm3_10, 8), xmm5_3)
                uint32_t xmm3_13[0x4] = *esi_1 ^ (xmm1_2 | xmm4_1)
                uint32_t xmm6_6[0x4] = _mm_srli_epi32(_mm_adds_epu8(xmm6_3, xmm5_4) & xmm4_1, 8)
                *esi_1 = (xmm1_2 ^ _mm_srli_epi16(
                    _mm_mullo_epi16((xmm0_6 & xmm1_2) ^ xmm1_2, xmm1_2 & xmm3_13), 8)) | _mm_slli_epi32(
                    xmm1_2 ^ _mm_srli_epi16(
                        _mm_mullo_epi16((xmm1_2 & xmm6_6) ^ xmm1_2, 
                            xmm1_2 & _mm_srli_epi32(xmm3_13, 8)), 
                        8), 
                    8)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                j_1 = j_4
                j_4 -= 1
            while (j_1 != 1)
            xmm6 = var_50
            xmm2_1 = var_40
        
        if (result s> 0)
            uint32_t var_90_1 = result
            uint32_t j_2
            
            do
                uint32_t ecx_37 = zx.d(*esi_1)
                int24_t xmm3_20 = _mm_adds_epu8(
                    _mm_packus_epi16(
                        _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm2_1), 
                            8), 
                        zx.o(0)), 
                    xmm6)
                int32_t edx_26 = (zx.d(*(esi_1 + 1)) << 8) + ebx_1
                *esi_1 = *(zx.d(xmm3_20.b) + (ecx_37 << 8) + ebx_1)
                result = zx.d(xmm3_20:2.b)
                int32_t edx_29 = (zx.d(*(esi_1 + 2)) << 8) + ebx_1
                *(esi_1 + 1) = *(zx.d(xmm3_20:1.b) + edx_26)
                *(esi_1 + 2) = *(result + edx_29)
                esi_1 += 4
                edi_1 += 4
                j_2 = var_90_1
                var_90_1 -= 1
            while (j_2 != 1)
        
        esi_1 += eax_9
        edi_1 += eax_12
        i = var_8c_1
        var_8c_1 -= 1
    while (i != 1)

return result
