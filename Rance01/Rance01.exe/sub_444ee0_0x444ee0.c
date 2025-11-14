// 函数: sub_444ee0
// 地址: 0x444ee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_48 = ebx
int32_t ebx_1 = *arg13
int32_t esi
int32_t var_4c = esi
int32_t edi
int32_t var_50 = edi
int128_t* esi_1 = (*(*arg1 + 8))(arg2, arg3)
int128_t* edi_1 = (*(*arg4 + 8))(arg5, arg6)
uint32_t* var_54_1 = (*(*arg9 + 8))(arg10, arg11)
int32_t eax_12 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_15 = (*(*arg4 + 0x1c))() - arg7 * 4
int32_t result_1 = (*(*arg9 + 0x1c))() - arg7 * 4
int32_t result = arg8
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm5_1[0x4] = _mm_slli_epi32(xmm0_1, 0x10)
int128_t xmm3_1 = xmm5_1 | xmm0_1
uint32_t xmm0_3[0x4] = _mm_shuffle_epi32(zx.o(arg12), 0)

if (result s> 0)
    int32_t var_44_1 = result
    int32_t i
    
    do
        int32_t j_7 = arg7
        int32_t eax_18 = 0
        void* ecx_16 = esi_1 & 0xf
        int32_t var_48_1 = 0
        int32_t j_8 = 0
        int32_t j_6
        
        if (ecx_16 != 0)
            if ((ecx_16.b & 4) == 0)
                j_7 = 4 - (ecx_16 u>> 2)
                int32_t ecx_19 = arg7 - j_7
                eax_18 = ecx_19 & 0xfffffffc
                var_48_1 = eax_18
                j_8 = ecx_19 - eax_18
            
            if (j_7 s> 0)
                int32_t var_34_1 = 0
                int32_t j_3 = j_7
                int32_t j
                
                do
                    int32_t ecx_25 = (zx.d(*(var_54_1 + 3)) * zx.d(*(edi_1 + 3)) * arg12) s>> 0x10
                    int32_t eax_24
                    eax_24.b = *(zx.d(*esi_1) + ((zx.d(*edi_1) * ecx_25) s>> 8) + ebx_1)
                    *esi_1 = eax_24.b
                    var_54_1 = &var_54_1[1]
                    *(esi_1 + 1) =
                        *(zx.d(*(esi_1 + 1)) + ((zx.d(*(edi_1 + 1)) * ecx_25) s>> 8) + ebx_1)
                    *(esi_1 + 2) =
                        *(zx.d(*(esi_1 + 2)) + ((zx.d(*(edi_1 + 2)) * ecx_25) s>> 8) + ebx_1)
                    esi_1 += 4
                    edi_1 += 4
                    j = j_3
                    j_3 -= 1
                while (j != 1)
                eax_18 = var_48_1
            
            j_6 = j_8
        else
            eax_18 = j_7 & 0xfffffffc
            j_6 = j_7 - eax_18
        
        if (eax_18 s> 0)
            int32_t j_5 = ((eax_18 - 1) u>> 2) + 1
            int32_t j_1
            
            do
                uint32_t xmm4_1[0x4] = *edi_1
                uint32_t (* ecx_27)[0x4] = var_54_1
                int32_t xmm1_2[0x4] = xmm3_1 & _mm_srli_epi32(xmm4_1, 8)
                uint32_t xmm0_11[0x4] = _mm_srli_epi32(
                    __pmullw_xmmdq_memdq(
                        _mm_srli_epi32(
                            _mm_mullo_epi16(_mm_srli_epi32(*ecx_27, 0x18), 
                                _mm_srli_epi32(xmm5_1 & xmm1_2, 0x10)), 
                            8), 
                        xmm0_3), 
                    8)
                int32_t xmm2_6[0x4] = _mm_slli_epi32(xmm0_11, 0x10) | xmm0_11
                uint32_t xmm0_12[0x4] = *esi_1
                int32_t xmm4_3[0x4] = xmm3_1 & _mm_srli_epi32(xmm0_12, 8)
                int32_t xmm1_3[0x4] = _mm_mullo_epi16(xmm1_2, xmm2_6)
                int32_t xmm7_3[0x4] = _mm_mullo_epi16(xmm3_1 & xmm4_1, xmm2_6)
                uint16_t xmm1_4[0x8] = _mm_srli_epi16(xmm1_3, 8)
                uint16_t xmm7_4[0x8] = _mm_srli_epi16(xmm7_3, 8)
                int32_t xmm4_4[0x4] = _mm_adds_epu8(xmm4_3, xmm1_4)
                *esi_1 = _mm_adds_epu8(xmm3_1 & xmm0_12, xmm7_4) | _mm_slli_epi32(xmm4_4, 8)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                j_1 = j_5
                j_5 -= 1
                var_54_1 = &ecx_27[1]
            while (j_1 != 1)
        
        if (j_6 s> 0)
            int32_t var_34_2 = 0
            int32_t j_4 = j_6
            int32_t j_2
            
            do
                int32_t ecx_32 = (zx.d(*(var_54_1 + 3)) * zx.d(*(edi_1 + 3)) * arg12) s>> 0x10
                int32_t eax_36
                eax_36.b = *(zx.d(*esi_1) + ((zx.d(*edi_1) * ecx_32) s>> 8) + ebx_1)
                *esi_1 = eax_36.b
                var_54_1 = &var_54_1[1]
                *(esi_1 + 1) = *(zx.d(*(esi_1 + 1)) + ((zx.d(*(edi_1 + 1)) * ecx_32) s>> 8) + ebx_1)
                *(esi_1 + 2) = *(zx.d(*(esi_1 + 2)) + ((zx.d(*(edi_1 + 2)) * ecx_32) s>> 8) + ebx_1)
                esi_1 += 4
                edi_1 += 4
                j_2 = j_4
                j_4 -= 1
            while (j_2 != 1)
        
        result = result_1
        esi_1 += eax_12
        edi_1 += eax_15
        var_54_1 += result
        i = var_44_1
        var_44_1 -= 1
    while (i != 1)

return result
