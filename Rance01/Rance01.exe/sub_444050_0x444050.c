// 函数: sub_444050
// 地址: 0x444050
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_98 = ebx
int32_t ebx_1 = *arg14
int32_t esi
int32_t var_9c = esi
int32_t edi
int32_t var_a0 = edi
int128_t* esi_1 = (*(*arg1 + 8))(arg2, arg3)
int128_t* edi_1 = (*(*arg4 + 8))(arg5, arg6)
void* var_a4_1 = (*(*arg9 + 8))(arg10, arg11)
int32_t eax_12 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_15 = (*(*arg4 + 0x1c))() - arg7 * 4
int32_t result_1 = (*(*arg9 + 0x1c))() - arg7 * 4
char edx_11 = (arg13[1]).b
char eax_19 = (arg13[2]).b
int32_t ecx_18 = (arg13[3] << 8 | zx.d((*arg13).b)) << 8
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm2_2[0x4] = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1
int128_t var_30 = zx.o(0)
uint128_t xmm1 = zx.o((ecx_18 | zx.d(edx_11)) << 8) | zx.o(eax_19)
char eax_22 = (arg12[2]).b
int32_t ecx_26 = (arg12[3] << 8 | zx.d((*arg12).b)) << 8 | zx.d((arg12[1]).b)
uint32_t xmm3_1[0x4] = _mm_slli_epi32(xmm2_2, 8)
uint32_t xmm3_2[0x4] = _mm_shuffle_epi32(xmm1, 0)
int32_t result = arg8
int32_t xmm5_3[0x4] = xmm2_2 & _mm_srli_epi32(xmm3_2, 8)
uint128_t xmm4 = zx.o(ecx_26 << 8) | zx.o(eax_22)
int32_t xmm1_1[0x4] = _mm_unpacklo_epi8(xmm1, 0)
uint128_t var_70 = xmm4
uint32_t xmm5_4[0x4] = _mm_shuffle_epi32(xmm4, 0)
int32_t var_50[0x4] = xmm1_1

if (result s> 0)
    int32_t var_90_1 = result
    int32_t i
    
    do
        int32_t j_7 = arg7
        int32_t eax_24 = 0
        void* ecx_30 = esi_1 & 0xf
        int32_t var_9c_1 = 0
        void* j_8 = nullptr
        void* j_6
        
        if (ecx_30 != 0)
            if ((ecx_30.b & 4) == 0)
                j_7 = 4 - (ecx_30 u>> 2)
                int32_t ecx_34 = arg7 - j_7
                eax_24 = ecx_34 & 0xfffffffc
                var_9c_1 = eax_24
                j_8 = ecx_34 - eax_24
            
            if (j_7 s> 0)
                int32_t j_4 = j_7
                int32_t j
                
                do
                    uint32_t ecx_37 = zx.d(*(var_a4_1 + 3))
                    int32_t xmm3_9 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm1_1), 8), 
                            zx.o(0)), 
                        xmm4)
                    int32_t ecx_39 = (ecx_37 * zx.d(xmm3_9:3.b)) s>> 8
                    int32_t eax_31
                    eax_31.b = *(zx.d(*esi_1) + ((zx.d(xmm3_9.b) * ecx_39) s>> 8) + ebx_1)
                    *esi_1 = eax_31.b
                    var_a4_1 += 4
                    uint32_t ecx_40 = zx.d(*(esi_1 + 2))
                    *(esi_1 + 1) =
                        *(zx.d(*(esi_1 + 1)) + ((zx.d(xmm3_9:1.b) * ecx_39) s>> 8) + ebx_1)
                    *(esi_1 + 2) = *(ecx_40 + ((zx.d(xmm3_9:2.b) * ecx_39) s>> 8) + ebx_1)
                    esi_1 += 4
                    edi_1 += 4
                    j = j_4
                    j_4 -= 1
                while (j != 1)
                eax_24 = var_9c_1
            
            j_6 = j_8
        else
            eax_24 = j_7 & 0xfffffffc
            j_6 = j_7 - eax_24
        
        if (eax_24 s> 0)
            int32_t j_5 = ((eax_24 - 1) u>> 2) + 1
            int32_t j_1
            
            do
                uint32_t xmm4_1[0x4] = *edi_1
                int128_t* ecx_41 = var_a4_1
                int32_t xmm0_3[0x4] = xmm2_2 & _mm_srli_epi32(
                    _mm_adds_epu8(__pmullw_xmmdq_memdq(xmm2_2 & _mm_srli_epi32(xmm4_1, 8), xmm5_3), 
                        xmm5_4) & xmm3_1, 
                    8)
                uint32_t xmm1_11[0x4] = _mm_srli_epi32(
                    _mm_mullo_epi16(_mm_srli_epi32(*ecx_41, 0x18), _mm_srli_epi32(xmm0_3, 0x10)), 8)
                int32_t xmm7_4[0x4] =
                    _mm_srli_epi16(__pmullw_xmmdq_memdq(xmm2_2 & xmm4_1, xmm2_2 & xmm3_2), 8)
                int32_t xmm3_16[0x4] = _mm_slli_epi32(xmm1_11, 0x10) | xmm1_11
                uint32_t xmm1_12[0x4] = *esi_1
                int32_t xmm7_6[0x4] = _mm_adds_epu8(xmm7_4, xmm5_4) & xmm2_2
                int32_t xmm4_3[0x4] = xmm2_2 & _mm_srli_epi32(xmm1_12, 8)
                int32_t xmm0_4[0x4] = _mm_mullo_epi16(xmm0_3, xmm3_16)
                int32_t xmm7_7[0x4] = _mm_mullo_epi16(xmm7_6, xmm3_16)
                uint16_t xmm0_5[0x8] = _mm_srli_epi16(xmm0_4, 8)
                uint16_t xmm7_8[0x8] = _mm_srli_epi16(xmm7_7, 8)
                int32_t xmm4_4[0x4] = _mm_adds_epu8(xmm4_3, xmm0_5)
                *esi_1 = _mm_adds_epu8(xmm2_2 & xmm1_12, xmm7_8) | _mm_slli_epi32(xmm4_4, 8)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                j_1 = j_5
                j_5 -= 1
                var_a4_1 = &ecx_41[1]
            while (j_1 != 1)
            xmm4 = var_70
            xmm1_1 = var_50
        
        if (j_6 s> 0)
            void* j_3 = j_6
            void* j_2
            
            do
                uint32_t ecx_44 = zx.d(*(var_a4_1 + 3))
                int32_t xmm3_22 = _mm_adds_epu8(
                    _mm_packus_epi16(
                        _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm1_1), 
                            8), 
                        zx.o(0)), 
                    xmm4)
                int32_t ecx_46 = (ecx_44 * zx.d(xmm3_22:3.b)) s>> 8
                int32_t eax_44
                eax_44.b = *(zx.d(*esi_1) + ((zx.d(xmm3_22.b) * ecx_46) s>> 8) + ebx_1)
                *esi_1 = eax_44.b
                var_a4_1 += 4
                uint32_t ecx_47 = zx.d(*(esi_1 + 2))
                *(esi_1 + 1) = *(zx.d(*(esi_1 + 1)) + ((zx.d(xmm3_22:1.b) * ecx_46) s>> 8) + ebx_1)
                *(esi_1 + 2) = *(ecx_47 + ((zx.d(xmm3_22:2.b) * ecx_46) s>> 8) + ebx_1)
                esi_1 += 4
                edi_1 += 4
                j_2 = j_3
                j_3 -= 1
            while (j_2 != 1)
        
        result = result_1
        esi_1 += eax_12
        edi_1 += eax_15
        var_a4_1 += result
        i = var_90_1
        var_90_1 -= 1
    while (i != 1)

return result
