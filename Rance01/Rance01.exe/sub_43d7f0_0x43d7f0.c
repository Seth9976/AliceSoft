// 函数: sub_43d7f0
// 地址: 0x43d7f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_ac = ebx
int32_t esi
int32_t var_b0 = esi
int128_t* esi_1 = (*(*arg4 + 8))(arg5, arg2)
int128_t* ebx_1 = (*(*arg6 + 8))(arg7, arg8)
int32_t eax_8 = (*(*arg4 + 0x1c))() - arg9 * 4
int32_t eax_11 = (*(*arg6 + 0x1c))() - arg9 * 4
uint128_t xmm2 =
    zx.o(((arg12[3] << 8 | zx.d((*arg12).b)) << 8 | zx.d((arg12[1]).b)) << 8) | zx.o((arg12[2]).b)
char eax_16 = (arg11[2]).b
int32_t ecx_20 = (arg11[3] << 8 | zx.d((*arg11).b)) << 8
uint32_t edx_12 = zx.d((arg11[1]).b)
uint32_t xmm1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm7[0x4] = _mm_shuffle_epi32(zx.o(arg3), 0)
uint32_t xmm0_3[0x4] = _mm_slli_epi32(xmm1, 0x10) | xmm1
uint128_t xmm4 = zx.o((ecx_20 | edx_12) << 8) | zx.o(eax_16)
int128_t var_30 = zx.o(0)
uint128_t var_70 = xmm4
uint32_t var_80[0x4] = xmm7
uint32_t xmm3_2[0x4] = _mm_slli_epi32(xmm0_3, 8)
uint32_t result = arg10
uint32_t xmm3_3[0x4] = _mm_shuffle_epi32(xmm2, 0)
int32_t xmm5_3[0x4] = xmm0_3 & _mm_srli_epi32(xmm3_3, 8)
int32_t xmm2_1[0x4] = _mm_unpacklo_epi8(xmm2, 0)
uint32_t xmm6[0x4] = _mm_shuffle_epi32(xmm4, 0)
int32_t var_50[0x4] = xmm2_1

if (result s> 0)
    uint32_t var_a0_1 = result
    uint32_t i
    
    do
        int32_t j_6 = arg9
        result = 0
        void* ecx_25 = esi_1 & 0xf
        uint32_t result_1 = 0
        int32_t j_7 = 0
        int32_t j_5
        
        if (ecx_25 != 0)
            if ((ecx_25.b & 4) == 0)
                j_6 = 4 - (ecx_25 u>> 2)
                int32_t ecx_29 = arg9 - j_6
                result = ecx_29 & 0xfffffffc
                result_1 = result
                j_7 = ecx_29 - result
            
            if (j_6 s> 0)
                int32_t j_4 = j_6
                int32_t j
                
                do
                    uint32_t eax_20 = zx.d(*esi_1)
                    int24_t xmm3_10 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*ebx_1), 0), xmm2_1), 8), 
                            zx.o(0)), 
                        xmm4)
                    uint32_t edx_14 = zx.d(xmm3_10.b) - eax_20
                    eax_20.b = *(esi_1 + 1)
                    *esi_1 += ((edx_14 * arg3) s>> 8).b
                    char ecx_36 = (((zx.d(xmm3_10:1.b) - zx.d(eax_20.b)) * arg3) s>> 8).b + eax_20.b
                    eax_20.b = *(esi_1 + 2)
                    *(esi_1 + 1) = ecx_36
                    *(esi_1 + 2) =
                        (((zx.d(xmm3_10:2.b) - zx.d(eax_20.b)) * arg3) s>> 8).b + eax_20.b
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
            int32_t xmm5_6[0x4] = _mm_slli_epi32(xmm7, 0x10) | xmm7
            result = ((result - 1) u>> 2) + 1
            uint32_t j_1
            
            do
                uint32_t xmm2_2[0x4] = *esi_1
                uint32_t xmm1_1[0x4] = *ebx_1
                int32_t xmm3_12[0x4] = xmm0_3 & xmm2_2
                int32_t xmm4_2[0x4] = xmm0_3 & _mm_srli_epi32(xmm2_2, 8)
                int32_t xmm2_11[0x4] = _mm_mullo_epi16(
                    _mm_subs_epi16(
                        _mm_adds_epu8(
                            _mm_srli_epi16(__pmullw_xmmdq_memdq(xmm0_3 & xmm1_1, xmm0_3 & xmm3_3), 
                                8), 
                            xmm6) & xmm0_3, 
                        xmm3_12), 
                    xmm5_6)
                int32_t xmm7_3[0x4] =
                    __pmullw_xmmdq_memdq(xmm0_3 & _mm_srli_epi32(xmm1_1, 8), xmm5_3)
                *esi_1 = _mm_adds_epi16(_mm_srli_epi16(xmm2_11, 8), xmm3_12) | _mm_slli_epi32(
                    _mm_adds_epi16(
                        _mm_srli_epi16(
                            _mm_mullo_epi16(
                                _mm_subs_epi16(
                                    xmm0_3
                                        & _mm_srli_epi32(_mm_adds_epu8(xmm7_3, xmm6) & xmm3_2, 8), 
                                    xmm4_2), 
                                xmm5_6), 
                            8), 
                        xmm4_2), 
                    8)
                esi_1 = &esi_1[1]
                ebx_1 = &ebx_1[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
            xmm7 = var_80
            xmm4 = var_70
            xmm2_1 = var_50
        
        if (j_5 s> 0)
            int32_t j_3 = j_5
            int32_t j_2
            
            do
                result = zx.d(*esi_1)
                int24_t xmm3_25 = _mm_adds_epu8(
                    _mm_packus_epi16(
                        _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*ebx_1), 0), xmm2_1), 
                            8), 
                        zx.o(0)), 
                    xmm4)
                uint32_t edx_20 = zx.d(xmm3_25.b) - result
                result.b = *(esi_1 + 1)
                *esi_1 += ((edx_20 * arg3) s>> 8).b
                char ecx_45 = (((zx.d(xmm3_25:1.b) - zx.d(result.b)) * arg3) s>> 8).b + result.b
                result.b = *(esi_1 + 2)
                *(esi_1 + 1) = ecx_45
                *(esi_1 + 2) = (((zx.d(xmm3_25:2.b) - zx.d(result.b)) * arg3) s>> 8).b + result.b
                esi_1 += 4
                ebx_1 += 4
                j_2 = j_3
                j_3 -= 1
            while (j_2 != 1)
        
        esi_1 += eax_8
        ebx_1 += eax_11
        i = var_a0_1
        var_a0_1 -= 1
    while (i != 1)

return result
