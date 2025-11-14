// 函数: sub_43d3d0
// 地址: 0x43d3d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = (*(*arg3 + 8))(arg4, arg2)
int128_t* edi = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_8 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t eax_11 = (*(*arg5 + 0x1c))() - arg8 * 4
void* result = arg9
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
int128_t xmm4_2 = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1
uint32_t xmm6[0x4] = _mm_shuffle_epi32(zx.o(arg10), 0)

if (result s> 0)
    void* var_4_1 = result
    void* i
    
    do
        int32_t* edx_5 = arg8
        result = nullptr
        void* ecx_11 = esi & 0xf
        arg9 = nullptr
        arg3 = nullptr
        void* ecx_13
        
        if (ecx_11 != 0)
            if ((ecx_11.b & 4) == 0)
                edx_5 = 4 - (ecx_11 u>> 2)
                void* ecx_16 = arg8 - edx_5
                result = ecx_16 & 0xfffffffc
                arg9 = result
                arg3 = ecx_16 - result
            
            if (edx_5 s> 0)
                int32_t var_10_1 = 0
                arg5 = edx_5
                int32_t* j
                
                do
                    edx_5.b = *esi
                    *esi = (((zx.d(*edi) - zx.d(edx_5.b)) * arg10) s>> 8).b + edx_5.b
                    char eax_17 = *(esi + 1)
                    char ecx_22 = (((zx.d(*(edi + 1)) - zx.d(eax_17)) * arg10) s>> 8).b + eax_17
                    eax_17 = *(esi + 2)
                    *(esi + 1) = ecx_22
                    *(esi + 2) = (((zx.d(*(edi + 2)) - zx.d(eax_17)) * arg10) s>> 8).b + eax_17
                    esi += 4
                    edi += 4
                    j = arg5
                    arg5 -= 1
                while (j != 1)
                result = arg9
            
            ecx_13 = arg3
        else
            result = edx_5 & 0xfffffffc
            ecx_13 = edx_5 - result
        
        if (result s> 0)
            int32_t xmm5_3[0x4] = _mm_slli_epi32(xmm6, 0x10) | xmm6
            result = ((result - 1) u>> 2) + 1
            void* j_1
            
            do
                uint32_t xmm1_1[0x4] = *esi
                uint32_t xmm0_3[0x4] = *edi
                int32_t xmm2_2[0x4] = xmm4_2 & xmm1_1
                int32_t xmm3_2[0x4] = xmm4_2 & _mm_srli_epi32(xmm1_1, 8)
                *esi = _mm_adds_epi16(
                    _mm_srli_epi16(
                        _mm_mullo_epi16(_mm_subs_epi16(xmm4_2 & xmm0_3, xmm2_2), xmm5_3), 8), 
                    xmm2_2) | _mm_slli_epi32(
                    _mm_adds_epi16(
                        _mm_srli_epi16(
                            _mm_mullo_epi16(
                                _mm_subs_epi16(xmm4_2 & _mm_srli_epi32(xmm0_3, 8), xmm3_2), 
                                xmm5_3), 
                            8), 
                        xmm3_2), 
                    8)
                esi += 0x10
                edi = &edi[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
        
        if (ecx_13 s> 0)
            arg5 = nullptr
            arg3 = ecx_13
            int32_t* j_2
            
            do
                ecx_13.b = *esi
                result.b = *(esi + 1)
                *esi = (((zx.d(*edi) - zx.d(ecx_13.b)) * arg10) s>> 8).b + ecx_13.b
                char ecx_30 = (((zx.d(*(edi + 1)) - zx.d(result.b)) * arg10) s>> 8).b + result.b
                result.b = *(esi + 2)
                *(esi + 1) = ecx_30
                ecx_13.b = (((zx.d(*(edi + 2)) - zx.d(result.b)) * arg10) s>> 8).b + result.b
                *(esi + 2) = ecx_13.b
                esi += 4
                edi += 4
                j_2 = arg3
                arg3 -= 1
            while (j_2 != 1)
        
        esi += eax_8
        edi += eax_11
        i = var_4_1
        var_4_1 -= 1
    while (i != 1)

return result
