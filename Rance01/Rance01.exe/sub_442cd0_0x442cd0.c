// 函数: sub_442cd0
// 地址: 0x442cd0
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
int32_t eax_18 = (*(*arg9 + 0x1c))() - arg7 * 4
int32_t ecx_17 = arg14[3] << 8 | zx.d((*arg14).b)
char edx_11 = (arg14[1]).b
char eax_20 = (arg14[2]).b
uint32_t xmm1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm0_3[0x4] = _mm_slli_epi32(xmm1, 0x10) | xmm1
int128_t var_30 = zx.o(0)
uint128_t xmm2 = zx.o((ecx_17 << 8 | zx.d(edx_11)) << 8) | zx.o(eax_20)
int32_t ecx_24 = arg13[3] << 8 | zx.d((*arg13).b)
char edx_15 = (arg13[1]).b
char eax_23 = (arg13[2]).b
uint32_t xmm3_1[0x4] = _mm_shuffle_epi32(zx.o(arg12), 0)
uint32_t xmm3_3[0x4] = _mm_slli_epi32(xmm0_3, 8)
uint32_t xmm3_4[0x4] = _mm_shuffle_epi32(xmm2, 0)
char* result = arg8
int32_t xmm4_3[0x4] = xmm0_3 & _mm_srli_epi32(xmm3_4, 8)
uint128_t xmm5 = zx.o((ecx_24 << 8 | zx.d(edx_15)) << 8) | zx.o(eax_23)
int32_t xmm2_1[0x4] = _mm_unpacklo_epi8(xmm2, 0)
uint128_t var_70 = xmm5
uint32_t xmm4_4[0x4] = _mm_shuffle_epi32(xmm5, 0)
int32_t var_50[0x4] = xmm2_1

if (result s> 0)
    char* var_a0_1 = result
    char* i
    
    do
        int32_t j_6 = arg7
        result = nullptr
        void* ecx_30 = esi_1 & 0xf
        char* result_1 = nullptr
        void* j_7 = nullptr
        void* j_5
        
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
                    int32_t ecx_38 = zx.d(*(var_b4_1 + 3)) * arg12
                    uint32_t edx_18 = zx.d(*esi_1)
                    int24_t xmm3_11 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm2_1), 8), 
                            zx.o(0)), 
                        xmm5)
                    int32_t ecx_39 = ecx_38 s>> 8
                    int32_t eax_31
                    eax_31.b = *(edx_18 + ((zx.d(xmm3_11.b) * ecx_39) s>> 8) + ebx_1)
                    *esi_1 = eax_31.b
                    var_b4_1 += 4
                    uint32_t ecx_40 = zx.d(*(esi_1 + 2))
                    *(esi_1 + 1) =
                        *(zx.d(*(esi_1 + 1)) + ((zx.d(xmm3_11:1.b) * ecx_39) s>> 8) + ebx_1)
                    *(esi_1 + 2) = *(ecx_40 + ((zx.d(xmm3_11:2.b) * ecx_39) s>> 8) + ebx_1)
                    esi_1 += 4
                    edi_1 += 4
                    j = j_3
                    j_3 -= 1
                while (j != 1)
                result = result_1
            
            j_5 = j_7
        else
            result = j_6 & 0xfffffffc
            j_5 = j_6 - result
        
        if (result s> 0)
            result = ((result - 1) u>> 2) + 1
            char* j_1
            
            do
                int128_t* ecx_41 = var_b4_1
                uint32_t xmm3_12[0x4] = *edi_1
                uint32_t xmm1_4[0x4] =
                    _mm_srli_epi32(__pmullw_xmmdq_memdq(_mm_srli_epi32(*ecx_41, 0x18), xmm3_1), 8)
                int32_t xmm6_6[0x4] = _mm_adds_epu8(
                    _mm_srli_epi16(__pmullw_xmmdq_memdq(xmm0_3 & xmm3_12, xmm0_3 & xmm3_4), 8), 
                    xmm4_4) & xmm0_3
                int32_t xmm2_4[0x4] = _mm_slli_epi32(xmm1_4, 0x10) | xmm1_4
                uint32_t xmm1_5[0x4] = *esi_1
                *esi_1 = _mm_adds_epu8(xmm0_3 & xmm1_5, 
                    _mm_srli_epi16(_mm_mullo_epi16(xmm6_6, xmm2_4), 8)) | _mm_slli_epi32(
                    _mm_adds_epu8(xmm0_3 & _mm_srli_epi32(xmm1_5, 8), 
                        _mm_srli_epi16(
                            _mm_mullo_epi16(
                                xmm0_3 & _mm_srli_epi32(
                                    _mm_adds_epu8(
                                        __pmullw_xmmdq_memdq(xmm0_3 & _mm_srli_epi32(xmm3_12, 8), 
                                            xmm4_3), 
                                        xmm4_4) & xmm3_3, 
                                    8), 
                                xmm2_4), 
                            8)), 
                    8)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                j_1 = result
                result -= 1
                var_b4_1 = &ecx_41[1]
            while (j_1 != 1)
            xmm5 = var_70
            xmm2_1 = var_50
        
        if (j_5 s> 0)
            void* j_4 = j_5
            void* j_2
            
            do
                int32_t ecx_45 = zx.d(*(var_b4_1 + 3)) * arg12
                int24_t xmm3_19 = _mm_adds_epu8(
                    _mm_packus_epi16(
                        _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm2_1), 
                            8), 
                        zx.o(0)), 
                    xmm5)
                int32_t ecx_46 = ecx_45 s>> 8
                int32_t edx_28
                edx_28.b = *(zx.d(*esi_1) + ((zx.d(xmm3_19.b) * ecx_46) s>> 8) + ebx_1)
                *esi_1 = edx_28.b
                var_b4_1 += 4
                int32_t eax_45
                eax_45.b = *(zx.d(*(esi_1 + 1)) + ((zx.d(xmm3_19:1.b) * ecx_46) s>> 8) + ebx_1)
                *(esi_1 + 1) = eax_45.b
                result = zx.d(*(esi_1 + 2))
                ecx_46.b = result[((zx.d(xmm3_19:2.b) * ecx_46) s>> 8) + ebx_1]
                *(esi_1 + 2) = ecx_46.b
                esi_1 += 4
                edi_1 += 4
                j_2 = j_4
                j_4 -= 1
            while (j_2 != 1)
        
        esi_1 += eax_12
        edi_1 += eax_15
        var_b4_1 += eax_18
        i = var_a0_1
        var_a0_1 -= 1
    while (i != 1)

return result
