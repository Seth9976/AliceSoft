// 函数: sub_44b6d0
// 地址: 0x44b6d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_b8 = ebx
int32_t esi
int32_t var_bc = esi
int32_t edi
int32_t var_c0 = edi
int32_t edi_1 = *(arg14 + 0x20)
int128_t* esi_1 = (*(*arg1 + 8))(arg2, arg3)
int128_t* ebx_1 = (*(*arg4 + 8))(arg5, arg6)
void* var_b4 = (*(*arg9 + 8))(arg10, arg11)
int32_t eax_12 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_15 = (*(*arg4 + 0x1c))() - arg7 * 4
int32_t eax_18 = (*(*arg9 + 0x1c))() - arg7 * 4
char eax_20 = (arg13[2]).b
int32_t ecx_19 = (arg13[3] << 8 | zx.d((*arg13).b)) << 8 | zx.d((arg13[1]).b)
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm1_2[0x4] = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1
int128_t var_30 = zx.o(0)
uint128_t xmm4 = zx.o(ecx_19 << 8) | zx.o(eax_20)
int32_t ecx_24 = arg12[3] << 8 | zx.d((*arg12).b)
char edx_15 = (arg12[1]).b
char eax_23 = (arg12[2]).b
uint32_t xmm6_1[0x4] = _mm_slli_epi32(xmm1_2, 8)
int128_t xmm0_3 = xmm1_2 | xmm6_1
int32_t xmm0_5[0x4] = _mm_mullo_epi16(xmm1_2, xmm1_2)
int32_t xmm5_1[0x4] = xmm0_5 | _mm_srli_epi16(xmm0_5, 8)
uint32_t xmm0_7[0x4] = _mm_shuffle_epi32(xmm4, 0)
int32_t result = arg8
uint128_t xmm2 = zx.o((ecx_24 << 8 | zx.d(edx_15)) << 8) | zx.o(eax_23)
int32_t xmm7_3[0x4] = xmm1_2 & _mm_srli_epi32(xmm0_7, 8)
int32_t xmm4_1[0x4] = _mm_unpacklo_epi8(xmm4, 0)
uint128_t var_80 = xmm2
uint32_t var_70[0x4] = xmm6_1
int32_t var_50[0x4] = xmm4_1

if (result s> 0)
    int32_t var_a4_1 = result
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
                    uint32_t ecx_37 = zx.d(*(var_b4 + 3))
                    uint32_t edx_18 = zx.d(*esi_1)
                    int24_t xmm0_15 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*ebx_1), 0), xmm4_1), 8), 
                            zx.o(0)), 
                        xmm2)
                    uint32_t eax_29 = zx.d(*(esi_1 + 1))
                    var_b4 += 4
                    *esi_1 += (((zx.d(*(zx.d(xmm0_15.b) + (edx_18 << 8) + edi_1)) - edx_18)
                        * ecx_37) s>> 8).b
                    char eax_35 = (((zx.d(*(zx.d(xmm0_15:1.b) + (eax_29 << 8) + edi_1)) - eax_29)
                        * ecx_37) s>> 8).b + *(esi_1 + 1)
                    esi_1 += 4
                    *(esi_1 - 3) = eax_35
                    uint32_t eax_36 = zx.d(*(esi_1 - 2))
                    ebx_1 += 4
                    j = j_3
                    j_3 -= 1
                    *(esi_1 - 2) += (((zx.d(*(zx.d(xmm0_15:2.b) + (eax_36 << 8) + edi_1)) - eax_36)
                        * ecx_37) s>> 8).b
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
                uint32_t xmm3_1[0x4] = *ebx_1
                int128_t* ecx_38 = var_b4
                uint32_t xmm4_2[0x4] = _mm_shuffle_epi32(xmm2, 0)
                int32_t xmm0_20[0x4] = _mm_adds_epu8(
                    _mm_srli_epi16(__pmullw_xmmdq_memdq(xmm1_2 & xmm3_1, xmm1_2 & xmm0_7), 8), 
                    xmm4_2)
                int32_t xmm7_6[0x4] =
                    __pmullw_xmmdq_memdq(xmm1_2 & _mm_srli_epi32(xmm3_1, 8), xmm7_3)
                uint32_t xmm3_3[0x4] = *ecx_38
                uint32_t xmm7_8[0x4] = _mm_adds_epu8(xmm7_6, xmm4_2) & xmm6_1
                uint32_t xmm3_4[0x4] = _mm_srli_epi32(xmm3_3, 0x18)
                int32_t xmm4_5[0x4] = _mm_slli_epi32(xmm3_4, 0x10) | xmm3_4
                uint32_t xmm3_6[0x4] = *esi_1 ^ xmm0_3
                uint16_t xmm0_23[0x8] = _mm_srli_epi16(_mm_mullo_epi16(xmm0_20 & xmm1_2, xmm4_5), 8)
                int32_t xmm2_3[0x4] = _mm_mullo_epi16(xmm1_2 & _mm_srli_epi32(xmm7_8, 8), xmm4_5)
                int32_t xmm0_25[0x4] = _mm_mullo_epi16(xmm0_23 ^ xmm1_2, xmm1_2 & xmm3_6)
                uint16_t xmm2_4[0x8] = _mm_srli_epi16(xmm2_3, 8)
                int32_t xmm6_3[0x4] = _mm_subs_epi16(xmm5_1, xmm0_25)
                int32_t xmm0_27[0x4] = _mm_subs_epi16(xmm5_1, 
                    _mm_mullo_epi16(xmm2_4 ^ xmm1_2, xmm1_2 & _mm_srli_epi32(xmm3_6, 8)))
                xmm2 = var_80
                *esi_1 = _mm_srli_epi16(xmm6_3, 8) | _mm_slli_epi32(_mm_srli_epi16(xmm0_27, 8), 8)
                xmm6_1 = var_70
                esi_1 = &esi_1[1]
                ebx_1 = &ebx_1[1]
                j_1 = result
                result -= 1
                var_b4 = &ecx_38[1]
            while (j_1 != 1)
            xmm4_1 = var_50
        
        if (j_5 s> 0)
            int32_t j_4 = j_5
            int32_t j_2
            
            do
                uint32_t ecx_41 = zx.d(*(var_b4 + 3))
                uint32_t edx_28 = zx.d(*esi_1)
                int24_t xmm0_35 = _mm_adds_epu8(
                    _mm_packus_epi16(
                        _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*ebx_1), 0), xmm4_1), 
                            8), 
                        zx.o(0)), 
                    xmm2)
                uint32_t eax_47 = zx.d(*(esi_1 + 1))
                var_b4 += 4
                *esi_1 +=
                    (((zx.d(*(zx.d(xmm0_35.b) + (edx_28 << 8) + edi_1)) - edx_28) * ecx_41) s>> 8).b
                char eax_53 = (((zx.d(*(zx.d(xmm0_35:1.b) + (eax_47 << 8) + edi_1)) - eax_47)
                    * ecx_41) s>> 8).b + *(esi_1 + 1)
                esi_1 += 4
                *(esi_1 - 3) = eax_53
                uint32_t eax_54 = zx.d(*(esi_1 - 2))
                ebx_1 += 4
                result.b = (((zx.d(*(zx.d(xmm0_35:2.b) + (eax_54 << 8) + edi_1)) - eax_54) * ecx_41)
                    s>> 8).b + *(esi_1 - 2)
                j_2 = j_4
                j_4 -= 1
                *(esi_1 - 2) = result.b
            while (j_2 != 1)
        
        esi_1 += eax_12
        ebx_1 += eax_15
        var_b4 += eax_18
        i = var_a4_1
        var_a4_1 -= 1
    while (i != 1)

return result
