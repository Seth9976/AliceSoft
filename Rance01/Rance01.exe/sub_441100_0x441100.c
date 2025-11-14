// 函数: sub_441100
// 地址: 0x441100
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_68 = ebx
int32_t ebx_1 = *arg11
int32_t esi
int32_t var_6c = esi
int32_t edi
int32_t var_70 = edi
int128_t* esi_1 = (*(*arg1 + 8))(arg2, arg3)
int128_t* edi_1 = (*(*arg4 + 8))(arg5, arg6)
int32_t eax_9 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_12 = (*(*arg4 + 0x1c))() - arg7 * 4
int32_t edx_12 =
    ((arg10[3] << 8 | zx.d((*arg10).b)) << 8 | zx.d((arg10[1]).b)) << 8 | zx.d((arg10[2]).b)
int32_t ecx_14 = arg9[3]
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm3_2[0x4] = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1
uint128_t xmm0_2 = zx.o(edx_12)
uint128_t xmm4 =
    zx.o(((ecx_14 << 8 | zx.d((*arg9).b)) << 8 | zx.d((arg9[1]).b)) << 8) | zx.o((arg9[2]).b)
int128_t var_30 = zx.o(0)
int32_t result = arg8
uint32_t xmm2[0x4] = _mm_shuffle_epi32(xmm0_2, 0)
uint32_t xmm2_1[0x4] = _mm_srli_epi32(xmm2, 8)
int32_t xmm0_3[0x4] = _mm_unpacklo_epi8(xmm0_2, 0)
uint32_t xmm5_1[0x4] = _mm_slli_epi32(xmm3_2, 8)
uint32_t xmm4_1[0x4] = _mm_shuffle_epi32(xmm4, 0)

if (result s> 0)
    int32_t var_5c_1 = result
    int32_t i
    
    do
        int32_t j_5 = arg7
        int32_t edx_17 = 0
        void* ecx_22 = esi_1 & 0xf
        int32_t result_1 = 0
        
        if (ecx_22 != 0)
            if ((ecx_22.b & 4) == 0)
                j_5 = 4 - (ecx_22 u>> 2)
                int32_t ecx_25 = arg7 - j_5
                edx_17 = ecx_25 & 0xfffffffc
                result_1 = ecx_25 - edx_17
            
            if (j_5 s> 0)
                int32_t j_3 = j_5
                int32_t j
                
                do
                    uint32_t ecx_28 = zx.d(*esi_1)
                    int24_t xmm0_9 = __paddusb_xmmdq_memdq(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                __pmullw_xmmdq_memdq(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm0_3), 
                                8), 
                            zx.o(0)), 
                        xmm4)
                    *esi_1 = *(ecx_28 + zx.d(xmm0_9.b) + ebx_1)
                    int32_t ecx_30
                    ecx_30.b = *(zx.d(*(esi_1 + 1)) + zx.d(xmm0_9:1.b) + ebx_1)
                    *(esi_1 + 1) = ecx_30.b
                    *(esi_1 + 2) = *(zx.d(*(esi_1 + 2)) + zx.d(xmm0_9:2.b) + ebx_1)
                    esi_1 += 4
                    edi_1 += 4
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            result = result_1
        else
            edx_17 = j_5 & 0xfffffffc
            result = j_5 - edx_17
        
        if (edx_17 s> 0)
            int32_t j_4 = ((edx_17 - 1) u>> 2) + 1
            int32_t j_1
            
            do
                uint32_t xmm2_2[0x4] = *edi_1
                int32_t xmm1_4[0x4] =
                    _mm_srli_epi16(_mm_mullo_epi16(xmm3_2 & xmm2_2, xmm3_2 & xmm2), 8)
                int32_t xmm0_12[0x4] =
                    _mm_mullo_epi16(xmm3_2 & _mm_srli_epi32(xmm2_2, 8), xmm3_2 & xmm2_1)
                int128_t xmm1_6 = _mm_adds_epu8(xmm1_4, xmm4_1) & xmm3_2
                int32_t xmm0_15[0x4] = (_mm_adds_epu8(xmm0_12, xmm4_1) & xmm5_1) | xmm1_6
                *esi_1 = _mm_adds_epu8(*esi_1, xmm0_15)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                j_1 = j_4
                j_4 -= 1
            while (j_1 != 1)
        
        if (result s> 0)
            int32_t var_60_1 = result
            int32_t j_2
            
            do
                uint32_t ecx_33 = zx.d(*esi_1)
                int24_t xmm0_21 = __paddusb_xmmdq_memdq(
                    _mm_packus_epi16(
                        _mm_srli_epi16(
                            __pmullw_xmmdq_memdq(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm0_3), 8), 
                        zx.o(0)), 
                    xmm4)
                uint32_t ecx_34 = zx.d(*(esi_1 + 1))
                *esi_1 = *(ecx_33 + zx.d(xmm0_21.b) + ebx_1)
                uint32_t ecx_35 = zx.d(*(esi_1 + 2))
                result = zx.d(xmm0_21:2.b) + ebx_1
                *(esi_1 + 1) = *(ecx_34 + zx.d(xmm0_21:1.b) + ebx_1)
                *(esi_1 + 2) = *(ecx_35 + result)
                esi_1 += 4
                edi_1 += 4
                j_2 = var_60_1
                var_60_1 -= 1
            while (j_2 != 1)
        
        esi_1 += eax_9
        edi_1 += eax_12
        i = var_5c_1
        var_5c_1 -= 1
    while (i != 1)

return result
