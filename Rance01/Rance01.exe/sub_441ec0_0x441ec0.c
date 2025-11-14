// 函数: sub_441ec0
// 地址: 0x441ec0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *arg1
void* esi = (*(*arg2 + 8))(arg3, arg4)
int128_t* edi = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_8 = (*(*arg2 + 0x1c))() - arg8 * 4
int32_t eax_11 = (*(*arg5 + 0x1c))() - arg8 * 4
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
void* result = arg9
int128_t xmm2_2 = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1
uint32_t xmm4[0x4] = _mm_shuffle_epi32(zx.o(arg10), 0)

if (result s> 0)
    void* var_8_1 = result
    void* i
    
    do
        int32_t* edx_6 = arg8
        result = nullptr
        void* ecx_12 = esi & 0xf
        arg9 = nullptr
        arg2 = nullptr
        void* ecx_14
        
        if (ecx_12 != 0)
            if ((ecx_12.b & 4) == 0)
                edx_6 = 4 - (ecx_12 u>> 2)
                void* ecx_17 = arg8 - edx_6
                result = ecx_17 & 0xfffffffc
                arg9 = result
                arg2 = ecx_17 - result
            
            if (edx_6 s> 0)
                int32_t var_14_1 = 0
                arg5 = edx_6
                int32_t* j
                
                do
                    *esi = *(zx.d(*esi) + ((zx.d(*edi) * arg10) s>> 8) + ecx)
                    void* ecx_23
                    ecx_23.b = *(zx.d(*(esi + 1)) + ((zx.d(*(edi + 1)) * arg10) s>> 8) + ecx)
                    *(esi + 1) = ecx_23.b
                    *(esi + 2) = *(zx.d(*(esi + 2)) + ((zx.d(*(edi + 2)) * arg10) s>> 8) + ecx)
                    esi += 4
                    edi += 4
                    j = arg5
                    arg5 -= 1
                while (j != 1)
                result = arg9
            
            ecx_14 = arg2
        else
            result = edx_6 & 0xfffffffc
            ecx_14 = edx_6 - result
        
        if (result s> 0)
            int32_t xmm3_3[0x4] = _mm_slli_epi32(xmm4, 0x10) | xmm4
            result = ((result - 1) u>> 2) + 1
            void* j_1
            
            do
                uint32_t xmm0_3[0x4] = *edi
                uint32_t xmm1_1[0x4] = *esi
                *esi = _mm_adds_epu8(xmm2_2 & xmm1_1, 
                    _mm_srli_epi16(_mm_mullo_epi16(xmm2_2 & xmm0_3, xmm3_3), 8)) | _mm_slli_epi32(
                    _mm_adds_epu8(xmm2_2 & _mm_srli_epi32(xmm1_1, 8), 
                        _mm_srli_epi16(_mm_mullo_epi16(xmm2_2 & _mm_srli_epi32(xmm0_3, 8), xmm3_3), 
                            8)), 
                    8)
                esi += 0x10
                edi = &edi[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
        
        if (ecx_14 s> 0)
            arg5 = nullptr
            arg2 = ecx_14
            int32_t* j_2
            
            do
                void* ecx_28
                ecx_28.b = *(zx.d(*esi) + ((zx.d(*edi) * arg10) s>> 8) + ecx)
                *esi = ecx_28.b
                void* edx_22
                edx_22.b = *(zx.d(*(esi + 1)) + ((zx.d(*(edi + 1)) * arg10) s>> 8) + ecx)
                *(esi + 1) = edx_22.b
                result.b = *(zx.d(*(esi + 2)) + ((zx.d(*(edi + 2)) * arg10) s>> 8) + ecx)
                *(esi + 2) = result.b
                esi += 4
                edi += 4
                j_2 = arg2
                arg2 -= 1
            while (j_2 != 1)
        
        esi += eax_8
        edi += eax_11
        i = var_8_1
        var_8_1 -= 1
    while (i != 1)

return result
