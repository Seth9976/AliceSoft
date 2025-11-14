// 函数: sub_445430
// 地址: 0x445430
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_a8 = ebx
int32_t ebx_1 = *arg15
int32_t esi
int32_t var_ac = esi
int32_t edi
int32_t var_b0 = edi
int128_t* esi_1 = (*(*arg1 + 8))(arg2, arg3)
int128_t* edi_1 = (*(*arg4 + 8))(arg5, arg6)
void* var_b4_1 = (*(*arg9 + 8))(arg10, arg11)
int32_t eax_12 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_15 = (*(*arg4 + 0x1c))() - arg7 * 4
int32_t result_1 = (*(*arg9 + 0x1c))() - arg7 * 4
char edx_11 = (arg14[1]).b
char eax_19 = (arg14[2]).b
int32_t ecx_18 = (arg14[3] << 8 | zx.d((*arg14).b)) << 8
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm2_2[0x4] = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1
int128_t var_30 = zx.o(0)
uint128_t xmm1 = zx.o((ecx_18 | zx.d(edx_11)) << 8) | zx.o(eax_19)
int32_t ecx_24 = arg13[3] << 8 | zx.d((*arg13).b)
char edx_15 = (arg13[1]).b
char eax_22 = (arg13[2]).b
uint32_t xmm3_1[0x4] = _mm_shuffle_epi32(zx.o(arg12), 0)
uint32_t xmm3_3[0x4] = _mm_slli_epi32(xmm2_2, 8)
uint32_t xmm3_4[0x4] = _mm_shuffle_epi32(xmm1, 0)
int32_t result = arg8
int32_t xmm5_3[0x4] = xmm2_2 & _mm_srli_epi32(xmm3_4, 8)
uint128_t xmm4 = zx.o((ecx_24 << 8 | zx.d(edx_15)) << 8) | zx.o(eax_22)
int32_t xmm1_1[0x4] = _mm_unpacklo_epi8(xmm1, 0)
uint128_t var_70 = xmm4
uint32_t xmm5_4[0x4] = _mm_shuffle_epi32(xmm4, 0)
int32_t var_50[0x4] = xmm1_1

if (result s> 0)
    int32_t var_a0_1 = result
    int32_t i
    
    do
        int32_t j_7 = arg7
        int32_t eax_24 = 0
        void* ecx_30 = esi_1 & 0xf
        int32_t var_ac_1 = 0
        int32_t j_8 = 0
        int32_t j_6
        
        if (ecx_30 != 0)
            if ((ecx_30.b & 4) == 0)
                j_7 = 4 - (ecx_30 u>> 2)
                int32_t ecx_34 = arg7 - j_7
                eax_24 = ecx_34 & 0xfffffffc
                var_ac_1 = eax_24
                j_8 = ecx_34 - eax_24
            
            if (j_7 s> 0)
                int32_t j_4 = j_7
                int32_t j
                
                do
                    uint32_t ecx_37 = zx.d(*(var_b4_1 + 3))
                    int32_t xmm3_11 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm1_1), 8), 
                            zx.o(0)), 
                        xmm4)
                    int32_t ecx_40 = (ecx_37 * zx.d(xmm3_11:3.b) * arg12) s>> 0x10
                    int32_t eax_31
                    eax_31.b = *(zx.d(*esi_1) + ((zx.d(xmm3_11.b) * ecx_40) s>> 8) + ebx_1)
                    *esi_1 = eax_31.b
                    var_b4_1 += 4
                    uint32_t ecx_41 = zx.d(*(esi_1 + 2))
                    *(esi_1 + 1) =
                        *(zx.d(*(esi_1 + 1)) + ((zx.d(xmm3_11:1.b) * ecx_40) s>> 8) + ebx_1)
                    *(esi_1 + 2) = *(ecx_41 + ((zx.d(xmm3_11:2.b) * ecx_40) s>> 8) + ebx_1)
                    esi_1 += 4
                    edi_1 += 4
                    j = j_4
                    j_4 -= 1
                while (j != 1)
                eax_24 = var_ac_1
            
            j_6 = j_8
        else
            eax_24 = j_7 & 0xfffffffc
            j_6 = j_7 - eax_24
        
        if (eax_24 s> 0)
            int32_t j_5 = ((eax_24 - 1) u>> 2) + 1
            int32_t j_1
            
            do
                uint32_t xmm4_1[0x4] = *edi_1
                int128_t* ecx_42 = var_b4_1
                uint32_t xmm1_3[0x4] = xmm2_2 & _mm_srli_epi32(
                    _mm_adds_epu8(__pmullw_xmmdq_memdq(xmm2_2 & _mm_srli_epi32(xmm4_1, 8), xmm5_3), 
                        xmm5_4) & xmm3_3, 
                    8)
                uint32_t xmm0_13[0x4] = _mm_srli_epi32(
                    __pmullw_xmmdq_memdq(
                        _mm_srli_epi32(
                            _mm_mullo_epi16(_mm_srli_epi32(*ecx_42, 0x18), 
                                _mm_srli_epi32(xmm1_3, 0x10)), 
                            8), 
                        xmm3_1), 
                    8)
                int32_t xmm7_4[0x4] =
                    _mm_srli_epi16(__pmullw_xmmdq_memdq(xmm2_2 & xmm4_1, xmm2_2 & xmm3_4), 8)
                int32_t xmm3_18[0x4] = _mm_slli_epi32(xmm0_13, 0x10) | xmm0_13
                uint32_t xmm0_14[0x4] = *esi_1
                int32_t xmm7_6[0x4] = _mm_adds_epu8(xmm7_4, xmm5_4) & xmm2_2
                int32_t xmm4_3[0x4] = xmm2_2 & _mm_srli_epi32(xmm0_14, 8)
                int32_t xmm1_4[0x4] = _mm_mullo_epi16(xmm1_3, xmm3_18)
                int32_t xmm7_7[0x4] = _mm_mullo_epi16(xmm7_6, xmm3_18)
                uint16_t xmm1_5[0x8] = _mm_srli_epi16(xmm1_4, 8)
                uint16_t xmm7_8[0x8] = _mm_srli_epi16(xmm7_7, 8)
                int32_t xmm4_4[0x4] = _mm_adds_epu8(xmm4_3, xmm1_5)
                *esi_1 = _mm_adds_epu8(xmm2_2 & xmm0_14, xmm7_8) | _mm_slli_epi32(xmm4_4, 8)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                j_1 = j_5
                j_5 -= 1
                var_b4_1 = &ecx_42[1]
            while (j_1 != 1)
            xmm4 = var_70
            xmm1_1 = var_50
        
        if (j_6 s> 0)
            int32_t j_3 = j_6
            int32_t j_2
            
            do
                uint32_t ecx_45 = zx.d(*(var_b4_1 + 3))
                int32_t xmm3_24 = _mm_adds_epu8(
                    _mm_packus_epi16(
                        _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm1_1), 
                            8), 
                        zx.o(0)), 
                    xmm4)
                int32_t ecx_48 = (ecx_45 * zx.d(xmm3_24:3.b) * arg12) s>> 0x10
                int32_t eax_44
                eax_44.b = *(zx.d(*esi_1) + ((zx.d(xmm3_24.b) * ecx_48) s>> 8) + ebx_1)
                *esi_1 = eax_44.b
                var_b4_1 += 4
                uint32_t ecx_49 = zx.d(*(esi_1 + 2))
                *(esi_1 + 1) = *(zx.d(*(esi_1 + 1)) + ((zx.d(xmm3_24:1.b) * ecx_48) s>> 8) + ebx_1)
                *(esi_1 + 2) = *(ecx_49 + ((zx.d(xmm3_24:2.b) * ecx_48) s>> 8) + ebx_1)
                esi_1 += 4
                edi_1 += 4
                j_2 = j_3
                j_3 -= 1
            while (j_2 != 1)
        
        result = result_1
        esi_1 += eax_12
        edi_1 += eax_15
        var_b4_1 += result
        i = var_a0_1
        var_a0_1 -= 1
    while (i != 1)

return result
