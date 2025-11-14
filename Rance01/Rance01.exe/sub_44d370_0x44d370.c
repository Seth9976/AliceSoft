// 函数: sub_44d370
// 地址: 0x44d370
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_58 = ebx
int32_t ebx_1 = *(arg1 + 0x20)
int32_t esi
int32_t var_5c = esi
int32_t edi
int32_t var_60 = edi
int128_t* esi_1 = (*(*arg2 + 8))(arg3, arg4)
int128_t* edi_1 = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_8 = (*(*arg2 + 0x1c))() - arg8 * 4
int32_t eax_11 = (*(*arg5 + 0x1c))() - arg8 * 4
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm4_1[0x4] = _mm_slli_epi32(xmm0_1, 0x10)
uint32_t xmm2_1[0x4] = xmm4_1 | xmm0_1
int128_t xmm0_3 = xmm2_1 | _mm_slli_epi32(xmm2_1, 8)
int32_t result = arg9
int32_t xmm0_5[0x4] = _mm_mullo_epi16(xmm2_1, xmm2_1)
uint32_t var_40[0x4] = xmm4_1
int32_t xmm5_1[0x4] = xmm0_5 | _mm_srli_epi16(xmm0_5, 8)

if (result s> 0)
    int32_t var_54_1 = result
    int32_t i
    
    do
        int32_t j_6 = arg8
        result = 0
        void* ecx_11 = esi_1 & 0xf
        int32_t result_1 = 0
        int32_t j_7 = 0
        int32_t j_5
        
        if (ecx_11 != 0)
            if ((ecx_11.b & 4) == 0)
                j_6 = 4 - (ecx_11 u>> 2)
                int32_t ecx_15 = arg8 - j_6
                result = ecx_15 & 0xfffffffc
                result_1 = result
                j_7 = ecx_15 - result
            
            if (j_6 s> 0)
                int32_t var_44_1 = 0
                int32_t j_3 = j_6
                int32_t j
                
                do
                    uint32_t eax_14 = zx.d(*esi_1)
                    uint32_t ecx_17 = zx.d(*(edi_1 + 3))
                    esi_1 += 4
                    char eax_20 = (((zx.d(*(zx.d(*edi_1) + (eax_14 << 8) + ebx_1)) - eax_14)
                        * ecx_17) s>> 8).b + *(esi_1 - 4)
                    edi_1 += 4
                    *(esi_1 - 4) = eax_20
                    uint32_t eax_21 = zx.d(*(esi_1 - 3))
                    *(esi_1 - 3) += (((zx.d(*((eax_21 << 8) + zx.d(*(edi_1 - 3)) + ebx_1)) - eax_21)
                        * ecx_17) s>> 8).b
                    uint32_t eax_27 = zx.d(*(esi_1 - 2))
                    j = j_3
                    j_3 -= 1
                    *(esi_1 - 2) += (((zx.d(*((eax_27 << 8) + zx.d(*(edi_1 - 2)) + ebx_1)) - eax_27)
                        * ecx_17) s>> 8).b
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
                uint32_t xmm3_1[0x4] = *edi_1
                int32_t xmm0_8[0x4] = xmm2_1 & _mm_srli_epi32(xmm3_1, 8)
                uint32_t xmm3_5[0x4] = _mm_srli_epi32(xmm4_1 & xmm0_8, 0x10)
                int32_t xmm4_4[0x4] = _mm_slli_epi32(xmm3_5, 0x10) | xmm3_5
                uint32_t xmm3_7[0x4] = *esi_1 ^ xmm0_3
                uint16_t xmm1_5[0x8] = _mm_srli_epi16(_mm_mullo_epi16(xmm2_1 & xmm3_1, xmm4_4), 8)
                int32_t xmm0_9[0x4] = _mm_mullo_epi16(xmm0_8, xmm4_4)
                int32_t xmm1_7[0x4] = _mm_mullo_epi16(xmm1_5 ^ xmm2_1, xmm2_1 & xmm3_7)
                uint16_t xmm0_10[0x8] = _mm_srli_epi16(xmm0_9, 8)
                int32_t xmm6_2[0x4] = _mm_subs_epi16(xmm5_1, xmm1_7)
                xmm4_1 = var_40
                uint16_t xmm1_10[0x8] = _mm_srli_epi16(
                    _mm_subs_epi16(xmm5_1, 
                        _mm_mullo_epi16(xmm0_10 ^ xmm2_1, xmm2_1 & _mm_srli_epi32(xmm3_7, 8))), 
                    8)
                *esi_1 = _mm_srli_epi16(xmm6_2, 8) | _mm_slli_epi32(xmm1_10, 8)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
        
        if (j_5 s> 0)
            int32_t var_44_2 = 0
            int32_t j_4 = j_5
            int32_t j_2
            
            do
                uint32_t eax_35 = zx.d(*esi_1)
                uint32_t ecx_18 = zx.d(*(edi_1 + 3))
                esi_1 += 4
                char eax_41 =
                    (((zx.d(*(zx.d(*edi_1) + (eax_35 << 8) + ebx_1)) - eax_35) * ecx_18) s>> 8).b
                    + *(esi_1 - 4)
                edi_1 += 4
                *(esi_1 - 4) = eax_41
                uint32_t eax_42 = zx.d(*(esi_1 - 3))
                *(esi_1 - 3) += (((zx.d(*((eax_42 << 8) + zx.d(*(edi_1 - 3)) + ebx_1)) - eax_42)
                    * ecx_18) s>> 8).b
                uint32_t eax_48 = zx.d(*(esi_1 - 2))
                result.b = (((zx.d(*((eax_48 << 8) + zx.d(*(edi_1 - 2)) + ebx_1)) - eax_48)
                    * ecx_18) s>> 8).b + *(esi_1 - 2)
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
