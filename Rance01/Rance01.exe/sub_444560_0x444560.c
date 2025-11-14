// 函数: sub_444560
// 地址: 0x444560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_48 = ebx
int32_t ebx_1 = *arg1
int32_t esi
int32_t var_4c = esi
int32_t edi
int32_t var_50 = edi
int128_t* esi_1 = (*(*arg2 + 8))(arg3, arg4)
int128_t* edi_1 = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_8 = (*(*arg2 + 0x1c))() - arg8 * 4
int32_t eax_11 = (*(*arg5 + 0x1c))() - arg8 * 4
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm5_1[0x4] = _mm_slli_epi32(xmm0_1, 0x10)
uint32_t result = arg9
int128_t xmm3_1 = xmm5_1 | xmm0_1
uint32_t xmm0_3[0x4] = _mm_shuffle_epi32(zx.o(arg10), 0)

if (result s> 0)
    uint32_t var_40_1 = result
    uint32_t i
    
    do
        int32_t j_6 = arg8
        result = 0
        void* ecx_11 = esi_1 & 0xf
        uint32_t result_1 = 0
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
                int32_t var_34_1 = 0
                int32_t j_3 = j_6
                int32_t j
                
                do
                    int32_t ecx_19 = (zx.d(*(edi_1 + 3)) * arg10) s>> 8
                    int32_t edx_9
                    edx_9.b = *(zx.d(*esi_1) + ((zx.d(*edi_1) * ecx_19) s>> 8) + ebx_1)
                    *esi_1 = edx_9.b
                    int32_t eax_18
                    eax_18.b = *(zx.d(*(esi_1 + 1)) + ((zx.d(*(edi_1 + 1)) * ecx_19) s>> 8) + ebx_1)
                    *(esi_1 + 1) = eax_18.b
                    ecx_19.b = zx.d(*(esi_1 + 2))[((zx.d(*(edi_1 + 2)) * ecx_19) s>> 8) + ebx_1]
                    *(esi_1 + 2) = ecx_19.b
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
            uint32_t j_1
            
            do
                uint32_t xmm4_1[0x4] = *edi_1
                int32_t xmm0_5[0x4] = xmm3_1 & _mm_srli_epi32(xmm4_1, 8)
                uint32_t xmm1_7[0x4] = _mm_srli_epi32(
                    __pmullw_xmmdq_memdq(_mm_srli_epi32(xmm5_1 & xmm0_5, 0x10), xmm0_3), 8)
                int32_t xmm2_3[0x4] = _mm_slli_epi32(xmm1_7, 0x10) | xmm1_7
                uint32_t xmm1_8[0x4] = *esi_1
                int32_t xmm4_3[0x4] = xmm3_1 & _mm_srli_epi32(xmm1_8, 8)
                int32_t xmm0_6[0x4] = _mm_mullo_epi16(xmm0_5, xmm2_3)
                int32_t xmm7_3[0x4] = _mm_mullo_epi16(xmm3_1 & xmm4_1, xmm2_3)
                uint16_t xmm0_7[0x8] = _mm_srli_epi16(xmm0_6, 8)
                uint16_t xmm7_4[0x8] = _mm_srli_epi16(xmm7_3, 8)
                int32_t xmm4_4[0x4] = _mm_adds_epu8(xmm4_3, xmm0_7)
                *esi_1 = _mm_adds_epu8(xmm3_1 & xmm1_8, xmm7_4) | _mm_slli_epi32(xmm4_4, 8)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
        
        if (j_5 s> 0)
            int32_t var_34_2 = 0
            int32_t j_4 = j_5
            int32_t j_2
            
            do
                int32_t ecx_22 = (zx.d(*(edi_1 + 3)) * arg10) s>> 8
                int32_t edx_18
                edx_18.b = *(zx.d(*esi_1) + ((zx.d(*edi_1) * ecx_22) s>> 8) + ebx_1)
                *esi_1 = edx_18.b
                int32_t eax_26
                eax_26.b = *(zx.d(*(esi_1 + 1)) + ((zx.d(*(edi_1 + 1)) * ecx_22) s>> 8) + ebx_1)
                *(esi_1 + 1) = eax_26.b
                result = zx.d(*(esi_1 + 2))
                ecx_22.b = *(result + ((zx.d(*(edi_1 + 2)) * ecx_22) s>> 8) + ebx_1)
                *(esi_1 + 2) = ecx_22.b
                esi_1 += 4
                edi_1 += 4
                j_2 = j_4
                j_4 -= 1
            while (j_2 != 1)
        
        esi_1 += eax_8
        edi_1 += eax_11
        i = var_40_1
        var_40_1 -= 1
    while (i != 1)

return result
