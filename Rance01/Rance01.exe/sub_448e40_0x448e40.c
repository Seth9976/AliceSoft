// 函数: sub_448e40
// 地址: 0x448e40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_98 = ebx
int32_t esi
int32_t var_9c = esi
int32_t edi
int32_t var_a0 = edi
int128_t* esi_1 = (*(*arg3 + 8))(arg4, arg2)
int128_t* edi_1 = (*(*arg5 + 8))(arg6, arg7)
int128_t* ebx_1 = (*(*arg10 + 8))(arg11, arg12)
int32_t eax_11 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t eax_14 = (*(*arg5 + 0x1c))() - arg8 * 4
int32_t eax_17 = (*(*arg10 + 0x1c))() - arg8 * 4
char eax_19 = (arg14[2]).b
int32_t edx_12 = (arg14[3] << 8 | zx.d((*arg14).b)) << 8 | zx.d((arg14[1]).b)
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
int32_t ecx_19 = arg13[3]
uint32_t xmm3_2[0x4] = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1
int128_t var_30 = zx.o(0)
uint128_t xmm1 = zx.o(edx_12 << 8) | zx.o(eax_19)
int32_t ecx_23 = (ecx_19 << 8 | zx.d((*arg13).b)) << 8 | zx.d((arg13[1]).b)
uint32_t eax_23 = zx.d((arg13[2]).b)
uint32_t xmm2_1[0x4] = _mm_slli_epi32(xmm3_2, 8)
uint32_t xmm2_2[0x4] = _mm_shuffle_epi32(xmm1, 0)
uint32_t result = arg9
uint128_t xmm4 = zx.o(ecx_23 << 8) | zx.o(eax_23)
int32_t xmm5_3[0x4] = xmm3_2 & _mm_srli_epi32(xmm2_2, 8)
int32_t xmm1_1[0x4] = _mm_unpacklo_epi8(xmm1, 0)
uint128_t var_50 = xmm4
uint32_t xmm7[0x4] = _mm_shuffle_epi32(xmm4, 0)
int32_t var_40[0x4] = xmm1_1

if (result s> 0)
    uint32_t var_90_1 = result
    uint32_t i
    
    do
        int32_t j_6 = arg8
        result = 0
        void* ecx_27 = esi_1 & 0xf
        uint32_t result_1 = 0
        int32_t j_7 = 0
        int32_t j_5
        
        if (ecx_27 != 0)
            if ((ecx_27.b & 4) == 0)
                j_6 = 4 - (ecx_27 u>> 2)
                int32_t ecx_31 = arg8 - j_6
                result = ecx_31 & 0xfffffffc
                result_1 = result
                j_7 = ecx_31 - result
            
            if (j_6 s> 0)
                int32_t j_3 = j_6
                int32_t j
                
                do
                    uint32_t ecx_34 = zx.d(*(ebx_1 + 3))
                    int32_t xmm2_9 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm1_1), 8), 
                            zx.o(0)), 
                        xmm4)
                    uint32_t eax_27 = zx.d(*esi_1)
                    uint32_t eax_28 = zx.d(*(esi_1 + 1))
                    int32_t ecx_36 = (ecx_34 * zx.d(xmm2_9:3.b)) s>> 8
                    char edx_25 =
                        (((((zx.d(xmm2_9.b) * eax_27) s>> 8) - eax_27) * ecx_36) s>> 8).b + *esi_1
                    esi_1 += 4
                    *(esi_1 - 4) = edx_25
                    uint32_t eax_29 = zx.d(*(esi_1 - 2))
                    edi_1 += 4
                    *(esi_1 - 3) +=
                        (((((zx.d(xmm2_9:1.b) * eax_28) s>> 8) - eax_28) * ecx_36) s>> 8).b
                    ebx_1 += 4
                    j = j_3
                    j_3 -= 1
                    *(esi_1 - 2) +=
                        (((((zx.d(xmm2_9:2.b) * eax_29) s>> 8) - eax_29) * ecx_36) s>> 8).b
                while (j != 1)
                result = result_1
            
            j_5 = j_7
        else
            result = j_6 & 0xfffffffc
            j_5 = j_6 - result
        
        if (result s> 0)
            result = ((result - 1) u>> 2) + 1
            uint32_t j_1
            
            do
                uint32_t xmm2_10[0x4] = *edi_1
                uint32_t xmm6_1[0x4] = *esi_1
                uint16_t xmm0_4[0x8] = __pmullw_xmmdq_memdq(xmm3_2 & xmm2_10, xmm3_2 & xmm2_2)
                int32_t xmm4_3[0x4] =
                    __pmullw_xmmdq_memdq(xmm3_2 & _mm_srli_epi32(xmm2_10, 8), xmm5_3)
                uint32_t xmm2_12[0x4] = *ebx_1
                int32_t xmm1_3[0x4] =
                    xmm3_2 & _mm_srli_epi32(_mm_adds_epu8(xmm4_3, xmm7) & xmm2_1, 8)
                uint32_t xmm2_15[0x4] = _mm_srli_epi32(
                    _mm_mullo_epi16(_mm_srli_epi32(xmm2_12, 0x18), _mm_srli_epi32(xmm1_3, 0x10)), 8)
                int32_t xmm0_7[0x4] = _mm_adds_epu8(_mm_srli_epi16(xmm0_4, 8), xmm7) & xmm3_2
                int32_t xmm4_11[0x4] = _mm_slli_epi32(xmm2_15, 0x10) | xmm2_15
                int32_t xmm2_17[0x4] = xmm3_2 & xmm6_1
                int32_t xmm0_8[0x4] = _mm_mullo_epi16(xmm0_7, xmm2_17)
                int32_t xmm5_5[0x4] = xmm3_2 & _mm_srli_epi32(xmm6_1, 8)
                uint16_t xmm1_5[0x8] = _mm_srli_epi16(_mm_mullo_epi16(xmm1_3, xmm5_5), 8)
                uint16_t xmm0_9[0x8] = _mm_srli_epi16(xmm0_8, 8)
                int32_t xmm1_6[0x4] = _mm_subs_epi16(xmm1_5, xmm5_5)
                int32_t xmm0_10[0x4] = _mm_subs_epi16(xmm0_9, xmm2_17)
                int32_t xmm1_7[0x4] = _mm_mullo_epi16(xmm1_6, xmm4_11)
                int32_t xmm0_11[0x4] = _mm_mullo_epi16(xmm0_10, xmm4_11)
                int32_t xmm1_8[0x4] = _mm_srli_epi16(xmm1_7, 8)
                uint16_t xmm0_12[0x8] = _mm_srli_epi16(xmm0_11, 8)
                int32_t xmm1_9[0x4] = _mm_adds_epi16(xmm1_8, xmm5_5)
                *esi_1 = _mm_adds_epi16(xmm0_12, xmm2_17) | _mm_slli_epi32(xmm1_9, 8)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                ebx_1 = &ebx_1[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
            xmm4 = var_50
            xmm1_1 = var_40
        
        if (j_5 s> 0)
            int32_t j_4 = j_5
            int32_t j_2
            
            do
                uint32_t ecx_37 = zx.d(*(ebx_1 + 3))
                int32_t xmm2_23 = _mm_adds_epu8(
                    _mm_packus_epi16(
                        _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm1_1), 
                            8), 
                        zx.o(0)), 
                    xmm4)
                uint32_t eax_34 = zx.d(*esi_1)
                uint32_t eax_35 = zx.d(*(esi_1 + 1))
                int32_t ecx_39 = (ecx_37 * zx.d(xmm2_23:3.b)) s>> 8
                char edx_44 =
                    (((((zx.d(xmm2_23.b) * eax_34) s>> 8) - eax_34) * ecx_39) s>> 8).b + *esi_1
                esi_1 += 4
                *(esi_1 - 4) = edx_44
                result = zx.d(*(esi_1 - 2))
                edi_1 += 4
                *(esi_1 - 3) += (((((zx.d(xmm2_23:1.b) * eax_35) s>> 8) - eax_35) * ecx_39) s>> 8).b
                ebx_1 += 4
                j_2 = j_4
                j_4 -= 1
                *(esi_1 - 2) += (((((zx.d(xmm2_23:2.b) * result) s>> 8) - result) * ecx_39) s>> 8).b
            while (j_2 != 1)
        
        esi_1 += eax_11
        edi_1 += eax_14
        ebx_1 += eax_17
        i = var_90_1
        var_90_1 -= 1
    while (i != 1)

return result
