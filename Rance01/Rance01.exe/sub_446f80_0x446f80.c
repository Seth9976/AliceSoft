// 函数: sub_446f80
// 地址: 0x446f80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_ac = ebx
int32_t esi
int32_t var_b0 = esi
int128_t* esi_1 = (*(*arg4 + 8))(arg5, arg2)
int128_t* ebx_1 = (*(*arg6 + 8))(arg7, arg8)
int32_t eax_8 = (*(*arg4 + 0x1c))() - arg9 * 4
int32_t eax_11 = (*(*arg6 + 0x1c))() - arg9 * 4
uint128_t xmm1 =
    zx.o(((arg12[3] << 8 | zx.d((*arg12).b)) << 8 | zx.d((arg12[1]).b)) << 8) | zx.o((arg12[2]).b)
char eax_16 = (arg11[2]).b
int32_t ecx_21 = (arg11[3] << 8 | zx.d((*arg11).b)) << 8 | zx.d((arg11[1]).b)
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm5[0x4] = _mm_shuffle_epi32(zx.o(arg3), 0)
uint32_t xmm2_2[0x4] = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1
uint128_t xmm4 = zx.o(ecx_21 << 8) | zx.o(eax_16)
int128_t var_30 = zx.o(0)
uint128_t var_70 = xmm4
uint32_t var_80[0x4] = xmm5
uint32_t xmm3_2[0x4] = _mm_slli_epi32(xmm2_2, 8)
uint32_t result = arg10
uint32_t xmm3_3[0x4] = _mm_shuffle_epi32(xmm1, 0)
int32_t xmm6_3[0x4] = xmm2_2 & _mm_srli_epi32(xmm3_3, 8)
int32_t xmm1_1[0x4] = _mm_unpacklo_epi8(xmm1, 0)
uint32_t xmm7[0x4] = _mm_shuffle_epi32(xmm4, 0)
int32_t var_50[0x4] = xmm1_1

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
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*ebx_1), 0), xmm1_1), 8), 
                            zx.o(0)), 
                        xmm4)
                    int32_t edx_16 = ((zx.d(xmm3_10.b) * eax_20) s>> 8) - eax_20
                    eax_20.b = *(esi_1 + 1)
                    *esi_1 += ((edx_16 * arg3) s>> 8).b
                    uint32_t edx_19 = zx.d(eax_20.b)
                    char ecx_38 = (((((zx.d(xmm3_10:1.b) * edx_19) s>> 8) - edx_19) * arg3) s>> 8).b
                        + eax_20.b
                    eax_20.b = *(esi_1 + 2)
                    *(esi_1 + 1) = ecx_38
                    uint32_t ecx_39 = zx.d(eax_20.b)
                    *(esi_1 + 2) =
                        (((((zx.d(xmm3_10:2.b) * ecx_39) s>> 8) - ecx_39) * arg3) s>> 8).b
                        + eax_20.b
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
            int32_t xmm6_6[0x4] = _mm_slli_epi32(xmm5, 0x10) | xmm5
            result = ((result - 1) u>> 2) + 1
            uint32_t j_1
            
            do
                uint32_t xmm3_11[0x4] = *ebx_1
                uint32_t xmm5_1[0x4] = *esi_1
                uint16_t xmm0_4[0x8] = __pmullw_xmmdq_memdq(xmm2_2 & xmm3_11, xmm2_2 & xmm3_3)
                uint32_t xmm3_12[0x4] = _mm_srli_epi32(xmm3_11, 8)
                int32_t xmm0_5[0x4] = _mm_srli_epi16(xmm0_4, 8)
                uint32_t xmm4_5[0x4] =
                    _mm_adds_epu8(__pmullw_xmmdq_memdq(xmm2_2 & xmm3_12, xmm6_3), xmm7) & xmm3_2
                int32_t xmm0_7[0x4] = _mm_adds_epu8(xmm0_5, xmm7) & xmm2_2
                int32_t xmm1_3[0x4] = xmm2_2 & _mm_srli_epi32(xmm4_5, 8)
                int32_t xmm3_14[0x4] = xmm2_2 & xmm5_1
                int32_t xmm0_8[0x4] = _mm_mullo_epi16(xmm0_7, xmm3_14)
                int32_t xmm4_8[0x4] = xmm2_2 & _mm_srli_epi32(xmm5_1, 8)
                uint16_t xmm1_5[0x8] = _mm_srli_epi16(_mm_mullo_epi16(xmm1_3, xmm4_8), 8)
                uint16_t xmm0_9[0x8] = _mm_srli_epi16(xmm0_8, 8)
                int32_t xmm1_6[0x4] = _mm_subs_epi16(xmm1_5, xmm4_8)
                int32_t xmm0_10[0x4] = _mm_subs_epi16(xmm0_9, xmm3_14)
                int32_t xmm1_7[0x4] = _mm_mullo_epi16(xmm1_6, xmm6_6)
                int32_t xmm0_11[0x4] = _mm_mullo_epi16(xmm0_10, xmm6_6)
                int32_t xmm1_8[0x4] = _mm_srli_epi16(xmm1_7, 8)
                int32_t xmm0_12[0x4] = _mm_srli_epi16(xmm0_11, 8)
                int32_t xmm1_9[0x4] = _mm_adds_epi16(xmm1_8, xmm4_8)
                *esi_1 = _mm_adds_epi16(xmm0_12, xmm3_14) | _mm_slli_epi32(xmm1_9, 8)
                esi_1 = &esi_1[1]
                ebx_1 = &ebx_1[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
            xmm5 = var_80
            xmm4 = var_70
            xmm1_1 = var_50
        
        if (j_5 s> 0)
            int32_t j_3 = j_5
            int32_t j_2
            
            do
                result = zx.d(*esi_1)
                int24_t xmm3_20 = _mm_adds_epu8(
                    _mm_packus_epi16(
                        _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*ebx_1), 0), xmm1_1), 
                            8), 
                        zx.o(0)), 
                    xmm4)
                int32_t edx_29 = ((zx.d(xmm3_20.b) * result) s>> 8) - result
                result.b = *(esi_1 + 1)
                *esi_1 += ((edx_29 * arg3) s>> 8).b
                uint32_t edx_32 = zx.d(result.b)
                char ecx_46 =
                    (((((zx.d(xmm3_20:1.b) * edx_32) s>> 8) - edx_32) * arg3) s>> 8).b + result.b
                result.b = *(esi_1 + 2)
                *(esi_1 + 1) = ecx_46
                uint32_t ecx_47 = zx.d(result.b)
                *(esi_1 + 2) =
                    (((((zx.d(xmm3_20:2.b) * ecx_47) s>> 8) - ecx_47) * arg3) s>> 8).b + result.b
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
