// 函数: sub_43c6f0
// 地址: 0x43c6f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_58 = ebx
int32_t esi
int32_t var_5c = esi
int32_t edi
int32_t var_60 = edi
int128_t* esi_1 = (*(*arg3 + 8))(arg4, arg2)
int128_t* edi_1 = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_8 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t eax_10 = (*(*arg5 + 0x1c))()
int32_t ecx_16 =
    ((arg11[3] << 8 | zx.d((*arg11).b)) << 8 | zx.d((arg11[1]).b)) << 8 | zx.d((arg11[2]).b)
char edx_9 = (*arg10).b
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
uint32_t xmm3_2[0x4] = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1
uint128_t xmm0_2 = zx.o(ecx_16)
uint128_t xmm4 =
    zx.o(((arg10[3] << 8 | zx.d(edx_9)) << 8 | zx.d((arg10[1]).b)) << 8) | zx.o((arg10[2]).b)
int128_t var_30 = zx.o(0)
uint32_t xmm5_1[0x4] = _mm_slli_epi32(xmm3_2, 8)
uint32_t xmm2[0x4] = _mm_shuffle_epi32(xmm0_2, 0)
void* result = arg9
uint32_t xmm2_1[0x4] = _mm_srli_epi32(xmm2, 8)
int32_t xmm0_3[0x4] = _mm_unpacklo_epi8(xmm0_2, 0)
uint32_t xmm4_1[0x4] = _mm_shuffle_epi32(xmm4, 0)

if (result s> 0)
    void* var_5c_1 = result
    void* i
    
    do
        void* j_5 = arg8
        void* edx_13 = nullptr
        void* j_3 = nullptr
        result = esi_1 & 0xf
        
        if (result != 0)
            if ((result.b & 4) == 0)
                result u>>= 2
                j_5 = 4 - result
                void* ecx_26 = arg8 - j_5
                edx_13 = ecx_26 & 0xfffffffc
                j_3 = ecx_26 - edx_13
            
            if (j_5 s> 0)
                void* j
                
                do
                    result = __paddusb_xmmdq_memdq(
                        _mm_packus_epi16(
                            _mm_srli_epi16(
                                __pmullw_xmmdq_memdq(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm0_3), 
                                8), 
                            zx.o(0)), 
                        xmm4)
                    *esi_1 = result
                    esi_1 += 4
                    edi_1 += 4
                    j = j_5
                    j_5 -= 1
                while (j != 1)
        else
            edx_13 = j_5 & 0xfffffffc
            j_3 = j_5 - edx_13
        
        if (edx_13 s> 0)
            int32_t j_4 = ((edx_13 - 1) u>> 2) + 1
            int32_t j_1
            
            do
                uint32_t xmm2_2[0x4] = *edi_1
                uint16_t xmm1_3[0x8] = _mm_mullo_epi16(xmm3_2 & xmm2_2, xmm3_2 & xmm2)
                int32_t xmm0_12[0x4] =
                    _mm_mullo_epi16(xmm3_2 & _mm_srli_epi32(xmm2_2, 8), xmm3_2 & xmm2_1)
                int32_t xmm1_4[0x4] = _mm_srli_epi16(xmm1_3, 8)
                *esi_1 = (_mm_adds_epu8(xmm0_12, xmm4_1) & xmm5_1)
                    | (_mm_adds_epu8(xmm1_4, xmm4_1) & xmm3_2)
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                j_1 = j_4
                j_4 -= 1
            while (j_1 != 1)
        
        if (j_3 s> 0)
            void* j_2
            
            do
                result = __paddusb_xmmdq_memdq(
                    _mm_packus_epi16(
                        _mm_srli_epi16(
                            __pmullw_xmmdq_memdq(_mm_unpacklo_epi8(zx.o(*edi_1), 0), xmm0_3), 8), 
                        zx.o(0)), 
                    xmm4)
                *esi_1 = result
                esi_1 += 4
                edi_1 += 4
                j_2 = j_3
                j_3 -= 1
            while (j_2 != 1)
        
        esi_1 += eax_8
        edi_1 += eax_10 - arg8 * 4
        i = var_5c_1
        var_5c_1 -= 1
    while (i != 1)

return result
