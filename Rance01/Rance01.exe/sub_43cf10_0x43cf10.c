// 函数: sub_43cf10
// 地址: 0x43cf10
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
uint32_t xmm1[0x4] = _mm_shuffle_epi32(0xff, 0)
int32_t ecx_19 = arg13[3]
uint32_t xmm0_3[0x4] = _mm_slli_epi32(xmm1, 0x10) | xmm1
int128_t var_30 = zx.o(0)
uint128_t xmm2 = zx.o(edx_12 << 8) | zx.o(eax_19)
int32_t ecx_23 = (ecx_19 << 8 | zx.d((*arg13).b)) << 8 | zx.d((arg13[1]).b)
uint32_t eax_23 = zx.d((arg13[2]).b)
uint32_t xmm3_1[0x4] = _mm_slli_epi32(xmm0_3, 8)
uint32_t xmm3_2[0x4] = _mm_shuffle_epi32(xmm2, 0)
int32_t result = arg9
uint128_t xmm4 = zx.o(ecx_23 << 8) | zx.o(eax_23)
int32_t xmm5_3[0x4] = xmm0_3 & _mm_srli_epi32(xmm3_2, 8)
int32_t xmm2_1[0x4] = _mm_unpacklo_epi8(xmm2, 0)
uint128_t var_70 = xmm4
uint32_t xmm6[0x4] = _mm_shuffle_epi32(xmm4, 0)
int32_t var_50[0x4] = xmm2_1

if (result s> 0)
    int32_t var_90_1 = result
    int32_t i
    
    do
        int32_t j_6 = arg8
        result = 0
        void* ecx_27 = esi_1 & 0xf
        int32_t result_1 = 0
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
                    j_6.b = *esi_1
                    int32_t var_a4
                    var_a4:3.b = j_6.b
                    uint32_t ecx_34 = zx.d(*(ebx_1 + 3))
                    int24_t xmm3_9 = _mm_adds_epu8(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm2_1), 8), 
                            zx.o(0)), 
                        xmm4)
                    char eax_30 = (((zx.d(xmm3_9.b) - zx.d(j_6.b)) * ecx_34) s>> 8).b + *esi_1
                    esi_1 += 4
                    *(esi_1 - 4) = eax_30
                    uint32_t eax_32 = zx.d(*(esi_1 - 2))
                    edi_1 += 4
                    *(esi_1 - 3) += (((zx.d(xmm3_9:1.b) - zx.d(*(esi_1 - 3))) * ecx_34) s>> 8).b
                    j_6.b = (((zx.d(xmm3_9:2.b) - eax_32) * ecx_34) s>> 8).b + *(esi_1 - 2)
                    ebx_1 += 4
                    j = j_3
                    j_3 -= 1
                    *(esi_1 - 2) = j_6.b
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
                uint32_t xmm2_2[0x4] = *edi_1
                uint32_t xmm3_11[0x4] = _mm_srli_epi32(*ebx_1, 0x18)
                int32_t xmm1_3[0x4] = _mm_slli_epi32(xmm3_11, 0x10) | xmm3_11
                uint32_t xmm3_12[0x4] = *esi_1
                int32_t xmm4_2[0x4] = xmm0_3 & xmm3_12
                int32_t xmm5_5[0x4] = xmm0_3 & _mm_srli_epi32(xmm3_12, 8)
                int32_t xmm3_21[0x4] = _mm_mullo_epi16(
                    _mm_subs_epi16(
                        _mm_adds_epu8(
                            _mm_srli_epi16(__pmullw_xmmdq_memdq(xmm0_3 & xmm2_2, xmm0_3 & xmm3_2), 
                                8), 
                            xmm6) & xmm0_3, 
                        xmm4_2), 
                    xmm1_3)
                int32_t xmm7_3[0x4] =
                    __pmullw_xmmdq_memdq(xmm0_3 & _mm_srli_epi32(xmm2_2, 8), xmm5_3)
                *esi_1 = _mm_adds_epi16(_mm_srli_epi16(xmm3_21, 8), xmm4_2) | _mm_slli_epi32(
                    _mm_adds_epi16(
                        _mm_srli_epi16(
                            _mm_mullo_epi16(
                                _mm_subs_epi16(
                                    xmm0_3
                                        & _mm_srli_epi32(_mm_adds_epu8(xmm7_3, xmm6) & xmm3_1, 8), 
                                    xmm5_5), 
                                xmm1_3), 
                            8), 
                        xmm5_5), 
                    8)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                ebx_1 = &ebx_1[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
            xmm4 = var_70
            xmm2_1 = var_50
        
        if (j_5 s> 0)
            int32_t j_4 = j_5
            int32_t j_2
            
            do
                uint32_t edx_27 = zx.d(*esi_1)
                uint32_t ecx_37 = zx.d(*(ebx_1 + 3))
                int24_t xmm3_30 = _mm_adds_epu8(
                    _mm_packus_epi16(
                        _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm2_1), 
                            8), 
                        zx.o(0)), 
                    xmm4)
                uint32_t edx_28 = zx.d(*(esi_1 + 1))
                char eax_39 = (((zx.d(xmm3_30.b) - edx_27) * ecx_37) s>> 8).b + *esi_1
                esi_1 += 4
                *(esi_1 - 4) = eax_39
                uint32_t edx_29 = zx.d(*(esi_1 - 2))
                edi_1 += 4
                *(esi_1 - 3) += (((zx.d(xmm3_30:1.b) - edx_28) * ecx_37) s>> 8).b
                result.b = (((zx.d(xmm3_30:2.b) - edx_29) * ecx_37) s>> 8).b + *(esi_1 - 2)
                ebx_1 += 4
                j_2 = j_4
                j_4 -= 1
                *(esi_1 - 2) = result.b
            while (j_2 != 1)
        
        esi_1 += eax_11
        edi_1 += eax_14
        ebx_1 += eax_17
        i = var_90_1
        var_90_1 -= 1
    while (i != 1)

return result
