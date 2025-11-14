// 函数: sub_44c1b0
// 地址: 0x44c1b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_bc = ebx
int32_t ebx_1 = *(arg12 + 0x20)
int32_t esi
int32_t var_c0 = esi
int128_t* esi_1 = (*(*arg2 + 8))(arg3, arg4)
void* var_c4_1 = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_9 = (*(*arg2 + 0x1c))() - arg8 * 4
int32_t result_1 = (*(*arg5 + 0x1c))() - arg8 * 4
uint128_t xmm3 =
    zx.o(((arg11[3] << 8 | zx.d((*arg11).b)) << 8 | zx.d((arg11[1]).b)) << 8) | zx.o((arg11[2]).b)
char eax_16 = (arg10[2]).b
int32_t ecx_17 = (arg10[3] << 8 | zx.d((*arg10).b)) << 8
uint32_t edx_16 = zx.d((arg10[1]).b)
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm1_2[0x4] = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1
uint128_t xmm2 = zx.o((ecx_17 | edx_16) << 8) | zx.o(eax_16)
int128_t var_30 = zx.o(0)
uint128_t var_90 = xmm2
uint32_t xmm0_3[0x4] = _mm_shuffle_epi32(zx.o(arg1), 0)
int32_t result = arg9
uint32_t xmm0_5[0x4] = _mm_slli_epi32(xmm1_2, 8)
int32_t xmm0_7[0x4] = _mm_mullo_epi16(xmm1_2, xmm1_2)
int32_t xmm4_3[0x4] = xmm0_7 | _mm_srli_epi16(xmm0_7, 8)
uint32_t xmm0_9[0x4] = _mm_shuffle_epi32(xmm3, 0)
int32_t xmm6_3[0x4] = xmm1_2 & _mm_srli_epi32(xmm0_9, 8)
int32_t xmm3_1[0x4] = _mm_unpacklo_epi8(xmm3, 0)
int32_t var_50[0x4] = xmm3_1

if (result s> 0)
    uint32_t xmm0_11[0x4] = xmm0_3
    int32_t var_b0_1 = result
    int32_t i
    
    do
        int32_t j_7 = arg8
        int32_t eax_18 = 0
        void* ecx_22 = esi_1 & 0xf
        int32_t var_c0_1 = 0
        int32_t j_8 = 0
        int32_t j_6
        
        if (ecx_22 != 0)
            if ((ecx_22.b & 4) == 0)
                j_7 = 4 - (ecx_22 u>> 2)
                int32_t ecx_26 = arg8 - j_7
                eax_18 = ecx_26 & 0xfffffffc
                var_c0_1 = eax_18
                j_8 = ecx_26 - eax_18
            
            if (j_7 s> 0)
                int32_t j_4 = j_7
                int32_t j
                
                do
                    uint32_t eax_21 = zx.d(*esi_1)
                    int24_t xmm6_9 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*var_c4_1), 0), xmm3_1), 8), 
                            zx.o(0)), 
                        xmm2)
                    *esi_1 += (((zx.d(*(zx.d(xmm6_9.b) + (eax_21 << 8) + ebx_1)) - eax_21) * arg1)
                        s>> 8).b
                    char eax_27 = *(esi_1 + 1)
                    char edx_25 = (((zx.d(*(zx.d(xmm6_9:1.b) + (zx.d(eax_27) << 8) + ebx_1))
                        - zx.d(eax_27)) * arg1) s>> 8).b + eax_27
                    eax_27 = *(esi_1 + 2)
                    *(esi_1 + 1) = edx_25
                    var_c4_1 += 4
                    *(esi_1 + 2) = (((zx.d(*(zx.d(xmm6_9:2.b) + (zx.d(eax_27) << 8) + ebx_1))
                        - zx.d(eax_27)) * arg1) s>> 8).b + eax_27
                    esi_1 += 4
                    j = j_4
                    j_4 -= 1
                while (j != 1)
                eax_18 = var_c0_1
            
            j_6 = j_8
        else
            eax_18 = j_7 & 0xfffffffc
            j_6 = j_7 - eax_18
        
        if (eax_18 s> 0)
            int32_t xmm5_3[0x4] = _mm_slli_epi32(xmm0_11, 0x10) | xmm0_11
            int32_t j_5 = ((eax_18 - 1) u>> 2) + 1
            int32_t j_1
            
            do
                int128_t* ecx_36 = var_c4_1
                uint32_t xmm3_2[0x4] = *ecx_36
                uint32_t xmm6_10[0x4] = _mm_shuffle_epi32(xmm2, 0)
                int32_t xmm0_16[0x4] = _mm_adds_epu8(
                    _mm_srli_epi16(__pmullw_xmmdq_memdq(xmm1_2 & xmm3_2, xmm1_2 & xmm0_9), 8), 
                    xmm6_10)
                int32_t xmm7_3[0x4] =
                    __pmullw_xmmdq_memdq(xmm1_2 & _mm_srli_epi32(xmm3_2, 8), xmm6_3)
                uint32_t xmm3_5[0x4] = *esi_1 ^ (xmm1_2 | xmm0_5)
                uint32_t xmm7_5[0x4] = _mm_adds_epu8(xmm7_3, xmm6_10) & xmm0_5
                int32_t xmm0_18[0x4] = _mm_mullo_epi16(xmm0_16 & xmm1_2, xmm5_3)
                uint32_t xmm7_6[0x4] = _mm_srli_epi32(xmm7_5, 8)
                int32_t xmm0_20[0x4] = _mm_srli_epi16(xmm0_18, 8) ^ xmm1_2
                int32_t xmm2_3[0x4] = _mm_mullo_epi16(xmm1_2 & xmm7_6, xmm5_3)
                int32_t xmm0_21[0x4] = _mm_mullo_epi16(xmm0_20, xmm1_2 & xmm3_5)
                uint16_t xmm2_4[0x8] = _mm_srli_epi16(xmm2_3, 8)
                int32_t xmm6_12[0x4] = _mm_subs_epi16(xmm4_3, xmm0_21)
                xmm2 = var_90
                uint16_t xmm0_24[0x8] = _mm_srli_epi16(
                    _mm_subs_epi16(xmm4_3, 
                        _mm_mullo_epi16(xmm2_4 ^ xmm1_2, xmm1_2 & _mm_srli_epi32(xmm3_5, 8))), 
                    8)
                *esi_1 = _mm_srli_epi16(xmm6_12, 8) | _mm_slli_epi32(xmm0_24, 8)
                esi_1 = &esi_1[1]
                j_1 = j_5
                j_5 -= 1
                var_c4_1 = &ecx_36[1]
            while (j_1 != 1)
            xmm0_11 = xmm0_3
            xmm3_1 = var_50
        
        if (j_6 s> 0)
            int32_t j_3 = j_6
            int32_t j_2
            
            do
                uint32_t eax_31 = zx.d(*esi_1)
                int24_t xmm6_20 = _mm_adds_epu8(
                    _mm_packus_epi16(
                        _mm_srli_epi16(
                            _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*var_c4_1), 0), xmm3_1), 8), 
                        zx.o(0)), 
                    xmm2)
                *esi_1 +=
                    (((zx.d(*(zx.d(xmm6_20.b) + (eax_31 << 8) + ebx_1)) - eax_31) * arg1) s>> 8).b
                char eax_37 = *(esi_1 + 1)
                char edx_38 = (((zx.d(*(zx.d(xmm6_20:1.b) + (zx.d(eax_37) << 8) + ebx_1))
                    - zx.d(eax_37)) * arg1) s>> 8).b + eax_37
                eax_37 = *(esi_1 + 2)
                *(esi_1 + 1) = edx_38
                var_c4_1 += 4
                *(esi_1 + 2) = (((zx.d(*(zx.d(xmm6_20:2.b) + (zx.d(eax_37) << 8) + ebx_1))
                    - zx.d(eax_37)) * arg1) s>> 8).b + eax_37
                esi_1 += 4
                j_2 = j_3
                j_3 -= 1
            while (j_2 != 1)
        
        result = result_1
        esi_1 += eax_9
        var_c4_1 += result
        i = var_b0_1
        var_b0_1 -= 1
    while (i != 1)

return result
