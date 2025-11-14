// 函数: sub_44bca0
// 地址: 0x44bca0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi
int32_t var_5c = esi
int32_t edi
int32_t var_60 = edi
int32_t var_48 = *(arg1 + 0x20)
int128_t* esi_1 = (*(*arg2 + 8))(arg3, arg4)
int128_t* edi_1 = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_8 = (*(*arg2 + 0x1c))() - arg8 * 4
int32_t eax_11 = (*(*arg5 + 0x1c))() - arg8 * 4
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm2_2[0x4] = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1
uint32_t xmm1[0x4] = _mm_shuffle_epi32(zx.o(arg10), 0)
int128_t xmm0_4 = xmm2_2 | _mm_slli_epi32(xmm2_2, 8)
int32_t result = arg9
int32_t xmm0_6[0x4] = _mm_mullo_epi16(xmm2_2, xmm2_2)
uint32_t var_30[0x4] = xmm1
int32_t xmm4_1[0x4] = xmm0_6 | _mm_srli_epi16(xmm0_6, 8)

if (result s> 0)
    int32_t var_54_1 = result
    int32_t i
    
    do
        int32_t j_6 = arg8
        result = 0
        void* ecx_12 = esi_1 & 0xf
        int32_t result_1 = 0
        int32_t j_7 = 0
        int32_t j_5
        int32_t entry_ebx
        
        if (ecx_12 != 0)
            if ((ecx_12.b & 4) == 0)
                j_6 = 4 - (ecx_12 u>> 2)
                int32_t ecx_16 = arg8 - j_6
                result = ecx_16 & 0xfffffffc
                result_1 = result
                j_7 = ecx_16 - result
            
            if (j_6 s> 0)
                int32_t var_44_1 = 0
                int32_t j_3 = j_6
                int32_t j
                
                do
                    uint32_t eax_14 = zx.d(*esi_1)
                    uint32_t ecx_19 = zx.d(*(esi_1 + 1))
                    *esi_1 += (((zx.d(*(zx.d(*edi_1) + (eax_14 << 8) + entry_ebx)) - eax_14)
                        * arg10) s>> 8).b
                    esi_1 += 4
                    char ecx_24 = (((zx.d(*((ecx_19 << 8) + zx.d(*(edi_1 + 1)) + entry_ebx))
                        - ecx_19) * arg10) s>> 8).b + *(esi_1 - 3)
                    edi_1 += 4
                    *(esi_1 - 3) = ecx_24
                    uint32_t ecx_25 = zx.d(*(esi_1 - 2))
                    j = j_3
                    j_3 -= 1
                    *(esi_1 - 2) += (((zx.d(*((ecx_25 << 8) + zx.d(*(edi_1 - 2)) + entry_ebx))
                        - ecx_25) * arg10) s>> 8).b
                while (j != 1)
                result = result_1
            
            j_5 = j_7
        else
            result = j_6 & 0xfffffffc
            j_5 = j_6 - result
        
        if (result s> 0)
            int32_t xmm5_3[0x4] = _mm_slli_epi32(xmm1, 0x10) | xmm1
            result = ((result - 1) u>> 2) + 1
            int32_t j_1
            
            do
                uint32_t xmm3_2[0x4] = *edi_1
                int32_t xmm0_10[0x4] = _mm_mullo_epi16(xmm2_2 & xmm3_2, xmm5_3)
                uint32_t xmm3_3[0x4] = _mm_srli_epi32(xmm3_2, 8)
                uint16_t xmm0_11[0x8] = _mm_srli_epi16(xmm0_10, 8)
                uint32_t xmm3_5[0x4] = *esi_1 ^ xmm0_4
                int32_t xmm0_13[0x4] = _mm_mullo_epi16(xmm0_11 ^ xmm2_2, xmm2_2 & xmm3_5)
                uint16_t xmm1_4[0x8] = _mm_srli_epi16(_mm_mullo_epi16(xmm2_2 & xmm3_3, xmm5_3), 8)
                int32_t xmm6_2[0x4] = _mm_subs_epi16(xmm4_1, xmm0_13)
                uint16_t xmm0_16[0x8] = _mm_srli_epi16(
                    _mm_subs_epi16(xmm4_1, 
                        _mm_mullo_epi16(xmm1_4 ^ xmm2_2, xmm2_2 & _mm_srli_epi32(xmm3_5, 8))), 
                    8)
                *esi_1 = _mm_srli_epi16(xmm6_2, 8) | _mm_slli_epi32(xmm0_16, 8)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
            xmm1 = var_30
        
        if (j_5 s> 0)
            int32_t var_44_2 = 0
            int32_t j_4 = j_5
            int32_t j_2
            
            do
                uint32_t eax_22 = zx.d(*esi_1)
                esi_1 += 4
                char ecx_33 =
                    (((zx.d(*(zx.d(*edi_1) + (eax_22 << 8) + entry_ebx)) - eax_22) * arg10) s>> 8).b
                    + *(esi_1 - 4)
                edi_1 += 4
                *(esi_1 - 4) = ecx_33
                uint32_t ecx_34 = zx.d(*(esi_1 - 3))
                *(esi_1 - 3) += (((zx.d(*((ecx_34 << 8) + zx.d(*(edi_1 - 3)) + entry_ebx)) - ecx_34)
                    * arg10) s>> 8).b
                uint32_t ecx_40 = zx.d(*(esi_1 - 2))
                result.b = (((zx.d(*((ecx_40 << 8) + zx.d(*(edi_1 - 2)) + entry_ebx)) - ecx_40)
                    * arg10) s>> 8).b + *(esi_1 - 2)
                j_2 = j_4
                j_4 -= 1
                *(esi_1 - 2) = result.b
            while (j_2 != 1)
        
        esi_1 += eax_8
        edi_1 += eax_11
        i = var_54_1
        var_54_1 -= 1
    while (i != 1)

return result
