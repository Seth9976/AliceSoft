// 函数: sub_449da0
// 地址: 0x449da0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_48 = ebx
int32_t esi
int32_t var_4c = esi
int32_t edi
int32_t var_50 = edi
int128_t* esi_1 = (*(*arg3 + 8))(arg4, arg2)
int128_t* edi_1 = (*(*arg5 + 8))(arg6, arg7)
uint32_t (* ebx_1)[0x4] = (*(*arg10 + 8))(arg11, arg12)
int32_t eax_11 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t eax_14 = (*(*arg5 + 0x1c))() - arg8 * 4
int32_t eax_17 = (*(*arg10 + 0x1c))() - arg8 * 4
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm7_1[0x4] = _mm_slli_epi32(xmm0_1, 0x10)
uint32_t result = arg9
int128_t xmm6_1 = xmm7_1 | xmm0_1
uint32_t xmm0_3[0x4] = _mm_shuffle_epi32(zx.o(arg13), 0)

if (result s> 0)
    uint32_t var_44_1 = result
    uint32_t i
    
    do
        int32_t j_6 = arg8
        result = 0
        void* ecx_16 = esi_1 & 0xf
        uint32_t result_1 = 0
        int32_t j_7 = 0
        int32_t j_5
        
        if (ecx_16 != 0)
            if ((ecx_16.b & 4) == 0)
                j_6 = 4 - (ecx_16 u>> 2)
                int32_t ecx_20 = arg8 - j_6
                result = ecx_20 & 0xfffffffc
                result_1 = result
                j_7 = ecx_20 - result
            
            if (j_6 s> 0)
                int32_t var_34_1 = 0
                int32_t j_3 = j_6
                int32_t j
                
                do
                    uint32_t eax_20 = zx.d(*esi_1)
                    uint32_t eax_21 = zx.d(*(esi_1 + 1))
                    int32_t ecx_25 = (zx.d(*(ebx_1 + 3)) * zx.d(*(edi_1 + 3)) * arg13) s>> 0x10
                    char edx_14 =
                        (((((zx.d(*edi_1) * eax_20) s>> 8) - eax_20) * ecx_25) s>> 8).b + *esi_1
                    esi_1 += 4
                    *(esi_1 - 4) = edx_14
                    uint32_t eax_22 = zx.d(*(esi_1 - 2))
                    char edx_20 =
                        (((((zx.d(*(edi_1 + 1)) * eax_21) s>> 8) - eax_21) * ecx_25) s>> 8).b
                        + *(esi_1 - 3)
                    edi_1 += 4
                    *(esi_1 - 3) = edx_20
                    ebx_1 = &(*ebx_1)[1]
                    j = j_3
                    j_3 -= 1
                    *(esi_1 - 2) +=
                        (((((zx.d(*(edi_1 - 2)) * eax_22) s>> 8) - eax_22) * ecx_25) s>> 8).b
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
                uint32_t xmm2_1[0x4] = *edi_1
                uint32_t xmm5_1[0x4] = *esi_1
                int32_t xmm0_5[0x4] = xmm6_1 & _mm_srli_epi32(xmm2_1, 8)
                uint32_t xmm2_8[0x4] = _mm_srli_epi32(
                    __pmullw_xmmdq_memdq(
                        _mm_srli_epi32(
                            _mm_mullo_epi16(_mm_srli_epi32(*ebx_1, 0x18), 
                                _mm_srli_epi32(xmm7_1 & xmm0_5, 0x10)), 
                            8), 
                        xmm0_3), 
                    8)
                int32_t xmm3_6[0x4] = _mm_slli_epi32(xmm2_8, 0x10) | xmm2_8
                int32_t xmm2_10[0x4] = xmm6_1 & xmm5_1
                int32_t xmm1_3[0x4] = _mm_mullo_epi16(xmm6_1 & xmm2_1, xmm2_10)
                int32_t xmm4_2[0x4] = xmm6_1 & _mm_srli_epi32(xmm5_1, 8)
                uint16_t xmm0_7[0x8] = _mm_srli_epi16(_mm_mullo_epi16(xmm0_5, xmm4_2), 8)
                uint16_t xmm1_4[0x8] = _mm_srli_epi16(xmm1_3, 8)
                int32_t xmm0_8[0x4] = _mm_subs_epi16(xmm0_7, xmm4_2)
                int32_t xmm1_5[0x4] = _mm_subs_epi16(xmm1_4, xmm2_10)
                int32_t xmm0_9[0x4] = _mm_mullo_epi16(xmm0_8, xmm3_6)
                int32_t xmm1_6[0x4] = _mm_mullo_epi16(xmm1_5, xmm3_6)
                int32_t xmm0_10[0x4] = _mm_srli_epi16(xmm0_9, 8)
                int32_t xmm1_7[0x4] = _mm_srli_epi16(xmm1_6, 8)
                int32_t xmm0_11[0x4] = _mm_adds_epi16(xmm0_10, xmm4_2)
                *esi_1 = _mm_adds_epi16(xmm1_7, xmm2_10) | _mm_slli_epi32(xmm0_11, 8)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                ebx_1 = &ebx_1[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
        
        if (j_5 s> 0)
            int32_t var_34_2 = 0
            int32_t j_4 = j_5
            int32_t j_2
            
            do
                uint32_t eax_26 = zx.d(*esi_1)
                uint32_t eax_27 = zx.d(*(esi_1 + 1))
                int32_t ecx_29 = (zx.d(*(ebx_1 + 3)) * zx.d(*(edi_1 + 3)) * arg13) s>> 0x10
                char edx_32 =
                    (((((zx.d(*edi_1) * eax_26) s>> 8) - eax_26) * ecx_29) s>> 8).b + *esi_1
                esi_1 += 4
                *(esi_1 - 4) = edx_32
                result = zx.d(*(esi_1 - 2))
                char edx_38 = (((((zx.d(*(edi_1 + 1)) * eax_27) s>> 8) - eax_27) * ecx_29) s>> 8).b
                    + *(esi_1 - 3)
                edi_1 += 4
                *(esi_1 - 3) = edx_38
                ebx_1 = &(*ebx_1)[1]
                j_2 = j_4
                j_4 -= 1
                *(esi_1 - 2) +=
                    (((((zx.d(*(edi_1 - 2)) * result) s>> 8) - result) * ecx_29) s>> 8).b
            while (j_2 != 1)
        
        esi_1 += eax_11
        edi_1 += eax_14
        ebx_1 += eax_17
        i = var_44_1
        var_44_1 -= 1
    while (i != 1)

return result
