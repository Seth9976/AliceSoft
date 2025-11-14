// 函数: sub_44de80
// 地址: 0x44de80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_68 = ebx
int32_t ebx_1 = *(arg12 + 0x20)
int32_t esi
int32_t var_6c = esi
int32_t edi
int32_t var_70 = edi
int128_t* esi_1 = (*(*arg1 + 8))(arg2, arg3)
int128_t* edi_1 = (*(*arg4 + 8))(arg5, arg6)
void* var_68_1 = (*(*arg9 + 8))(arg10, arg11)
int32_t eax_12 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_15 = (*(*arg4 + 0x1c))() - arg7 * 4
int32_t eax_18 = (*(*arg9 + 0x1c))() - arg7 * 4
int32_t result = arg8
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm4_1[0x4] = _mm_slli_epi32(xmm0_1, 0x10)
uint32_t xmm2_1[0x4] = xmm4_1 | xmm0_1
int128_t xmm0_3 = xmm2_1 | _mm_slli_epi32(xmm2_1, 8)
int32_t xmm0_5[0x4] = _mm_mullo_epi16(xmm2_1, xmm2_1)
uint32_t var_40[0x4] = xmm4_1
int32_t xmm5_1[0x4] = xmm0_5 | _mm_srli_epi16(xmm0_5, 8)

if (result s> 0)
    int32_t var_58_1 = result
    int32_t i
    
    do
        int32_t j_6 = arg7
        result = 0
        void* ecx_16 = esi_1 & 0xf
        int32_t result_1 = 0
        int32_t j_7 = 0
        int32_t j_5
        
        if (ecx_16 != 0)
            if ((ecx_16.b & 4) == 0)
                j_6 = 4 - (ecx_16 u>> 2)
                int32_t ecx_20 = arg7 - j_6
                result = ecx_20 & 0xfffffffc
                result_1 = result
                j_7 = ecx_20 - result
            
            if (j_6 s> 0)
                int32_t var_44_1 = 0
                int32_t j_3 = j_6
                int32_t j
                
                do
                    uint32_t eax_21 = zx.d(*esi_1)
                    int32_t ecx_25 = (zx.d(*(var_68_1 + 3)) * zx.d(*(edi_1 + 3))) s>> 8
                    var_68_1 += 4
                    *esi_1 += (((zx.d(*(zx.d(*edi_1) + (eax_21 << 8) + ebx_1)) - eax_21) * ecx_25)
                        s>> 8).b
                    uint32_t eax_28 = zx.d(*(esi_1 + 1))
                    esi_1 += 4
                    char eax_33 = (((zx.d(*((eax_28 << 8) + zx.d(*(edi_1 + 1)) + ebx_1)) - eax_28)
                        * ecx_25) s>> 8).b + *(esi_1 - 3)
                    edi_1 += 4
                    *(esi_1 - 3) = eax_33
                    uint32_t eax_34 = zx.d(*(esi_1 - 2))
                    j = j_3
                    j_3 -= 1
                    *(esi_1 - 2) += (((zx.d(*((eax_34 << 8) + zx.d(*(edi_1 - 2)) + ebx_1)) - eax_34)
                        * ecx_25) s>> 8).b
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
                int128_t* ecx_26 = var_68_1
                int32_t xmm0_8[0x4] = xmm2_1 & _mm_srli_epi32(xmm3_1, 8)
                uint32_t xmm3_3[0x4] = *ecx_26
                uint32_t xmm4_3[0x4] = _mm_srli_epi32(xmm4_1 & xmm0_8, 0x10)
                uint32_t xmm3_6[0x4] =
                    _mm_srli_epi32(_mm_mullo_epi16(_mm_srli_epi32(xmm3_3, 0x18), xmm4_3), 8)
                int32_t xmm4_6[0x4] = _mm_slli_epi32(xmm3_6, 0x10) | xmm3_6
                uint32_t xmm3_8[0x4] = *esi_1 ^ xmm0_3
                uint16_t xmm1_5[0x8] = _mm_srli_epi16(_mm_mullo_epi16(xmm2_1 & xmm3_1, xmm4_6), 8)
                int32_t xmm0_9[0x4] = _mm_mullo_epi16(xmm0_8, xmm4_6)
                int32_t xmm1_7[0x4] = _mm_mullo_epi16(xmm1_5 ^ xmm2_1, xmm2_1 & xmm3_8)
                uint16_t xmm0_10[0x8] = _mm_srli_epi16(xmm0_9, 8)
                int32_t xmm6_2[0x4] = _mm_subs_epi16(xmm5_1, xmm1_7)
                xmm4_1 = var_40
                uint16_t xmm1_10[0x8] = _mm_srli_epi16(
                    _mm_subs_epi16(xmm5_1, 
                        _mm_mullo_epi16(xmm0_10 ^ xmm2_1, xmm2_1 & _mm_srli_epi32(xmm3_8, 8))), 
                    8)
                *esi_1 = _mm_srli_epi16(xmm6_2, 8) | _mm_slli_epi32(xmm1_10, 8)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                j_1 = result
                result -= 1
                var_68_1 = &ecx_26[1]
            while (j_1 != 1)
        
        if (j_5 s> 0)
            int32_t var_44_2 = 0
            int32_t j_4 = j_5
            int32_t j_2
            
            do
                uint32_t eax_42 = zx.d(*esi_1)
                int32_t ecx_31 = (zx.d(*(var_68_1 + 3)) * zx.d(*(edi_1 + 3))) s>> 8
                var_68_1 += 4
                *esi_1 +=
                    (((zx.d(*(zx.d(*edi_1) + (eax_42 << 8) + ebx_1)) - eax_42) * ecx_31) s>> 8).b
                uint32_t eax_49 = zx.d(*(esi_1 + 1))
                esi_1 += 4
                char eax_54 = (((zx.d(*((eax_49 << 8) + zx.d(*(edi_1 + 1)) + ebx_1)) - eax_49)
                    * ecx_31) s>> 8).b + *(esi_1 - 3)
                edi_1 += 4
                *(esi_1 - 3) = eax_54
                uint32_t eax_55 = zx.d(*(esi_1 - 2))
                result.b = (((zx.d(*((eax_55 << 8) + zx.d(*(edi_1 - 2)) + ebx_1)) - eax_55)
                    * ecx_31) s>> 8).b + *(esi_1 - 2)
                j_2 = j_4
                j_4 -= 1
                *(esi_1 - 2) = result.b
            while (j_2 != 1)
        
        esi_1 += eax_12
        edi_1 += eax_15
        var_68_1 += eax_18
        i = var_58_1
        var_58_1 -= 1
    while (i != 1)

return result
