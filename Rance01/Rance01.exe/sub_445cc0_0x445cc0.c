// 函数: sub_445cc0
// 地址: 0x445cc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_78 = ebx
int32_t esi
int32_t var_7c = esi
int32_t edi
int32_t var_80 = edi
int128_t* esi_1 = (*(*arg3 + 8))(arg4, arg2)
int128_t* edi_1 = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_8 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t eax_10 = (*(*arg5 + 0x1c))()
int32_t ecx_16 =
    ((arg11[3] << 8 | zx.d((*arg11).b)) << 8 | zx.d((arg11[1]).b)) << 8 | zx.d((arg11[2]).b)
char edx_9 = (*arg10).b
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm2_2[0x4] = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1
uint128_t xmm0_2 = zx.o(ecx_16)
uint128_t xmm7 =
    zx.o(((arg10[3] << 8 | zx.d(edx_9)) << 8 | zx.d((arg10[1]).b)) << 8) | zx.o((arg10[2]).b)
int128_t var_30 = zx.o(0)
uint128_t var_50 = xmm7
uint32_t xmm5_1[0x4] = _mm_slli_epi32(xmm2_2, 8)
uint32_t xmm3[0x4] = _mm_shuffle_epi32(xmm0_2, 0)
int32_t result = arg9
int32_t xmm4_1[0x4] = xmm2_2 & _mm_srli_epi32(xmm3, 8)
int32_t xmm0_3[0x4] = _mm_unpacklo_epi8(xmm0_2, 0)
uint32_t xmm4_2[0x4] = _mm_shuffle_epi32(xmm7, 0)
int32_t var_40[0x4] = xmm0_3

if (result s> 0)
    int32_t var_70_1 = result
    int32_t i
    
    do
        int32_t j_7 = arg8
        int32_t j_4 = 0
        int32_t edx_13 = 0
        result = esi_1 & 0xf
        int32_t j_6 = 0
        
        if (result != 0)
            if ((result.b & 4) == 0)
                result u>>= 2
                j_7 = 4 - result
                int32_t ecx_26 = arg8 - j_7
                edx_13 = ecx_26 & 0xfffffffc
                j_4 = ecx_26 - edx_13
                j_6 = j_4
            
            if (j_7 s> 0)
                int32_t j_3 = j_7
                int32_t j
                
                do
                    uint32_t ebx_2 = zx.d(*esi_1)
                    int24_t xmm3_7 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm0_3), 8), 
                            zx.o(0)), 
                        xmm7)
                    *esi_1 = ((zx.d(xmm3_7.b) * ebx_2) s>> 8).b
                    uint32_t ecx_32 = zx.d(*(esi_1 + 2))
                    *(esi_1 + 1) = ((zx.d(xmm3_7:1.b) * zx.d(*(esi_1 + 1))) s>> 8).b
                    result = (zx.d(xmm3_7:2.b) * ecx_32) s>> 8
                    *(esi_1 + 2) = result.b
                    esi_1 += 4
                    edi_1 += 4
                    j = j_3
                    j_3 -= 1
                while (j != 1)
                j_4 = j_6
        else
            edx_13 = j_7 & 0xfffffffc
            j_4 = j_7 - edx_13
        
        if (edx_13 s> 0)
            int32_t j_5 = ((edx_13 - 1) u>> 2) + 1
            int32_t j_1
            
            do
                uint32_t xmm3_8[0x4] = *edi_1
                uint32_t xmm3_9[0x4] = _mm_srli_epi32(xmm3_8, 8)
                uint16_t xmm0_6[0x8] = _mm_mullo_epi16(xmm2_2 & xmm3_8, xmm2_2 & xmm3)
                int32_t xmm7_3[0x4] = __pmullw_xmmdq_memdq(xmm2_2 & xmm3_9, xmm4_1)
                uint32_t xmm3_10[0x4] = *esi_1
                uint32_t xmm7_6[0x4] = _mm_srli_epi32(_mm_adds_epu8(xmm7_3, xmm4_2) & xmm5_1, 8)
                int32_t xmm0_10[0x4] = _mm_mullo_epi16(
                    _mm_adds_epu8(_mm_srli_epi16(xmm0_6, 8), xmm4_2) & xmm2_2, xmm2_2 & xmm3_10)
                uint16_t xmm1_4[0x8] = _mm_srli_epi16(
                    _mm_mullo_epi16(xmm2_2 & xmm7_6, xmm2_2 & _mm_srli_epi32(xmm3_10, 8)), 8)
                *esi_1 = _mm_srli_epi16(xmm0_10, 8) | _mm_slli_epi32(xmm1_4, 8)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                j_1 = j_5
                j_5 -= 1
            while (j_1 != 1)
            xmm7 = var_50
            xmm0_3 = var_40
        
        if (j_4 s> 0)
            int32_t j_2
            
            do
                uint32_t ebx_3 = zx.d(*esi_1)
                int24_t xmm3_17 = _mm_adds_epu8(
                    _mm_packus_epi16(
                        _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm0_3), 
                            8), 
                        zx.o(0)), 
                    xmm7)
                *esi_1 = ((zx.d(xmm3_17.b) * ebx_3) s>> 8).b
                uint32_t edx_23 = zx.d(*(esi_1 + 2))
                *(esi_1 + 1) = ((zx.d(xmm3_17:1.b) * zx.d(*(esi_1 + 1))) s>> 8).b
                result = (zx.d(xmm3_17:2.b) * edx_23) s>> 8
                *(esi_1 + 2) = result.b
                esi_1 += 4
                edi_1 += 4
                j_2 = j_4
                j_4 -= 1
            while (j_2 != 1)
        
        esi_1 += eax_8
        edi_1 += eax_10 - arg8 * 4
        i = var_70_1
        var_70_1 -= 1
    while (i != 1)

return result
