// 函数: sub_44cd50
// 地址: 0x44cd50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_c8 = ebx
int32_t esi
int32_t var_cc = esi
int32_t edi
int32_t var_d0 = edi
int32_t edi_1 = *(arg15 + 0x20)
int128_t* esi_1 = (*(*arg1 + 8))(arg2, arg3)
int128_t* ebx_1 = (*(*arg4 + 8))(arg5, arg6)
uint32_t* var_c4 = (*(*arg9 + 8))(arg10, arg11)
int32_t eax_12 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_15 = (*(*arg4 + 0x1c))() - arg7 * 4
int32_t eax_18 = (*(*arg9 + 0x1c))() - arg7 * 4
char eax_20 = (arg14[2]).b
int32_t ecx_19 = (arg14[3] << 8 | zx.d((*arg14).b)) << 8 | zx.d((arg14[1]).b)
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm1_2[0x4] = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1
int128_t var_30 = zx.o(0)
char edx_13 = (*arg13).b
uint128_t xmm3 = zx.o(ecx_19 << 8) | zx.o(eax_20)
int32_t ecx_22 = arg13[3]
uint32_t xmm0_3[0x4] = _mm_shuffle_epi32(zx.o(arg12), 0)
char edx_15 = (arg13[1]).b
char eax_23 = (arg13[2]).b
uint32_t xmm6_1[0x4] = _mm_slli_epi32(xmm1_2, 8)
int128_t xmm0_5 = xmm1_2 | xmm6_1
int32_t xmm0_7[0x4] = _mm_mullo_epi16(xmm1_2, xmm1_2)
int32_t xmm5_1[0x4] = xmm0_7 | _mm_srli_epi16(xmm0_7, 8)
uint32_t xmm0_9[0x4] = _mm_shuffle_epi32(xmm3, 0)
int32_t result = arg8
uint128_t xmm2 = zx.o(((ecx_22 << 8 | zx.d(edx_13)) << 8 | zx.d(edx_15)) << 8) | zx.o(eax_23)
int32_t xmm0_11[0x4] = xmm1_2 & _mm_srli_epi32(xmm0_9, 8)
int32_t xmm3_1[0x4] = _mm_unpacklo_epi8(xmm3, 0)
uint128_t var_80 = xmm2
uint32_t var_90[0x4] = xmm6_1
int32_t var_50[0x4] = xmm3_1

if (result s> 0)
    int32_t var_b4_1 = result
    int32_t i
    
    do
        int32_t j_6 = arg7
        result = 0
        void* ecx_30 = esi_1 & 0xf
        int32_t result_1 = 0
        int32_t j_7 = 0
        int32_t j_5
        
        if (ecx_30 != 0)
            if ((ecx_30.b & 4) == 0)
                j_6 = 4 - (ecx_30 u>> 2)
                int32_t ecx_34 = arg7 - j_6
                result = ecx_34 & 0xfffffffc
                result_1 = result
                j_7 = ecx_34 - result
            
            if (j_6 s> 0)
                int32_t j_3 = j_6
                int32_t j
                
                do
                    uint32_t edx_18 = zx.d(*esi_1)
                    int32_t ecx_38 = zx.d(*(var_c4 + 3)) * arg12
                    int24_t xmm0_17 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*ebx_1), 0), xmm3_1), 8), 
                            zx.o(0)), 
                        xmm2)
                    uint32_t eax_29 = zx.d(*(esi_1 + 1))
                    int32_t ecx_39 = ecx_38 s>> 8
                    var_c4 = &var_c4[1]
                    *esi_1 += (((zx.d(*(zx.d(xmm0_17.b) + (edx_18 << 8) + edi_1)) - edx_18)
                        * ecx_39) s>> 8).b
                    char eax_35 = (((zx.d(*(zx.d(xmm0_17:1.b) + (eax_29 << 8) + edi_1)) - eax_29)
                        * ecx_39) s>> 8).b + *(esi_1 + 1)
                    esi_1 += 4
                    *(esi_1 - 3) = eax_35
                    uint32_t eax_36 = zx.d(*(esi_1 - 2))
                    ebx_1 += 4
                    j = j_3
                    j_3 -= 1
                    *(esi_1 - 2) += (((zx.d(*(zx.d(xmm0_17:2.b) + (eax_36 << 8) + edi_1)) - eax_36)
                        * ecx_39) s>> 8).b
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
                uint32_t xmm3_2[0x4] = *ebx_1
                uint32_t (* ecx_40)[0x4] = var_c4
                uint32_t xmm4_1[0x4] = _mm_shuffle_epi32(xmm2, 0)
                uint16_t xmm0_20[0x8] = __pmullw_xmmdq_memdq(xmm1_2 & xmm3_2, xmm1_2 & xmm0_9)
                uint32_t xmm3_3[0x4] = _mm_srli_epi32(xmm3_2, 8)
                int32_t xmm0_22[0x4] = _mm_adds_epu8(_mm_srli_epi16(xmm0_20, 8), xmm4_1)
                int32_t xmm7_6[0x4] = __pmullw_xmmdq_memdq(xmm1_2 & xmm3_3, xmm0_11)
                uint32_t xmm3_4[0x4] = *ecx_40
                int32_t xmm7_7[0x4] = _mm_adds_epu8(xmm7_6, xmm4_1)
                uint32_t xmm3_7[0x4] =
                    _mm_srli_epi32(__pmullw_xmmdq_memdq(_mm_srli_epi32(xmm3_4, 0x18), xmm0_3), 8)
                int32_t xmm4_4[0x4] = _mm_slli_epi32(xmm3_7, 0x10) | xmm3_7
                uint32_t xmm3_9[0x4] = *esi_1 ^ xmm0_5
                uint16_t xmm0_25[0x8] = _mm_srli_epi16(_mm_mullo_epi16(xmm0_22 & xmm1_2, xmm4_4), 8)
                int32_t xmm2_3[0x4] =
                    _mm_mullo_epi16(xmm1_2 & _mm_srli_epi32(xmm7_7 & xmm6_1, 8), xmm4_4)
                int32_t xmm0_27[0x4] = _mm_mullo_epi16(xmm0_25 ^ xmm1_2, xmm1_2 & xmm3_9)
                uint16_t xmm2_4[0x8] = _mm_srli_epi16(xmm2_3, 8)
                int32_t xmm6_3[0x4] = _mm_subs_epi16(xmm5_1, xmm0_27)
                int32_t xmm0_29[0x4] = _mm_subs_epi16(xmm5_1, 
                    _mm_mullo_epi16(xmm2_4 ^ xmm1_2, xmm1_2 & _mm_srli_epi32(xmm3_9, 8)))
                xmm2 = var_80
                *esi_1 = _mm_srli_epi16(xmm6_3, 8) | _mm_slli_epi32(_mm_srli_epi16(xmm0_29, 8), 8)
                xmm6_1 = var_90
                esi_1 = &esi_1[1]
                ebx_1 = &ebx_1[1]
                j_1 = result
                result -= 1
                var_c4 = &ecx_40[1]
            while (j_1 != 1)
            xmm3_1 = var_50
        
        if (j_5 s> 0)
            int32_t j_4 = j_5
            int32_t j_2
            
            do
                uint32_t edx_28 = zx.d(*esi_1)
                int32_t ecx_44 = zx.d(*(var_c4 + 3)) * arg12
                int24_t xmm0_37 = _mm_adds_epu8(
                    _mm_packus_epi16(
                        _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*ebx_1), 0), xmm3_1), 
                            8), 
                        zx.o(0)), 
                    xmm2)
                uint32_t eax_47 = zx.d(*(esi_1 + 1))
                int32_t ecx_45 = ecx_44 s>> 8
                var_c4 = &var_c4[1]
                *esi_1 +=
                    (((zx.d(*(zx.d(xmm0_37.b) + (edx_28 << 8) + edi_1)) - edx_28) * ecx_45) s>> 8).b
                char eax_53 = (((zx.d(*(zx.d(xmm0_37:1.b) + (eax_47 << 8) + edi_1)) - eax_47)
                    * ecx_45) s>> 8).b + *(esi_1 + 1)
                esi_1 += 4
                *(esi_1 - 3) = eax_53
                uint32_t eax_54 = zx.d(*(esi_1 - 2))
                ebx_1 += 4
                result.b = (((zx.d(*(zx.d(xmm0_37:2.b) + (eax_54 << 8) + edi_1)) - eax_54) * ecx_45)
                    s>> 8).b + *(esi_1 - 2)
                j_2 = j_4
                j_4 -= 1
                *(esi_1 - 2) = result.b
            while (j_2 != 1)
        
        esi_1 += eax_12
        ebx_1 += eax_15
        var_c4 += eax_18
        i = var_b4_1
        var_b4_1 -= 1
    while (i != 1)

return result
