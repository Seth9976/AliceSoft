// 函数: sub_445930
// 地址: 0x445930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = (*(*arg3 + 8))(arg4, arg2)
int128_t* edi = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_7 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t eax_10 = (*(*arg5 + 0x1c))() - arg8 * 4
int32_t* result = arg9
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
int128_t xmm3_2 = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1

if (result s> 0)
    arg5 = result
    int32_t* i
    
    do
        void* ebx_1 = arg8
        void* edx_5 = nullptr
        void* j_3 = nullptr
        result = esi & 0xf
        
        if (result != 0)
            if ((result.b & 4) == 0)
                result u>>= 2
                ebx_1 = 4 - result
                void* ecx_13 = arg8 - ebx_1
                edx_5 = ecx_13 & 0xfffffffc
                j_3 = ecx_13 - edx_5
            
            if (ebx_1 s> 0)
                arg9 = nullptr
                arg3 = ebx_1
                int32_t* j
                
                do
                    uint32_t ebx_3 = zx.d(*(esi + 1))
                    *esi = ((zx.d(*edi) * zx.d(*esi)) s>> 8).b
                    uint32_t ebx_4 = zx.d(*(esi + 2))
                    *(esi + 1) = ((zx.d(*(edi + 1)) * ebx_3) s>> 8).b
                    result = (zx.d(*(edi + 2)) * ebx_4) s>> 8
                    *(esi + 2) = result.b
                    esi += 4
                    edi += 4
                    j = arg3
                    arg3 -= 1
                while (j != 1)
        else
            edx_5 = ebx_1 & 0xfffffffc
            j_3 = ebx_1 - edx_5
        
        if (edx_5 s> 0)
            int32_t j_4 = ((edx_5 - 1) u>> 2) + 1
            int32_t j_1
            
            do
                uint32_t xmm2_1[0x4] = *edi
                int32_t xmm1_2[0x4] = xmm3_2 & _mm_srli_epi32(xmm2_1, 8)
                uint32_t xmm2_3[0x4] = *esi
                int32_t xmm0_4[0x4] = _mm_mullo_epi16(xmm3_2 & xmm2_1, xmm3_2 & xmm2_3)
                uint16_t xmm1_4[0x8] =
                    _mm_srli_epi16(_mm_mullo_epi16(xmm1_2, xmm3_2 & _mm_srli_epi32(xmm2_3, 8)), 8)
                *esi = _mm_srli_epi16(xmm0_4, 8) | _mm_slli_epi32(xmm1_4, 8)
                esi += 0x10
                edi = &edi[1]
                j_1 = j_4
                j_4 -= 1
            while (j_1 != 1)
        
        if (j_3 s> 0)
            arg3 = nullptr
            void* j_2
            
            do
                uint32_t eax_21 = zx.d(*(esi + 1))
                *esi = ((zx.d(*edi) * zx.d(*esi)) s>> 8).b
                result = zx.d(*(esi + 2))
                *(esi + 1) = ((zx.d(*(edi + 1)) * eax_21) s>> 8).b
                *(esi + 2) = ((zx.d(*(edi + 2)) * result) s>> 8).b
                esi += 4
                edi += 4
                j_2 = j_3
                j_3 -= 1
            while (j_2 != 1)
        
        esi += eax_7
        edi += eax_10
        i = arg5
        arg5 -= 1
    while (i != 1)

return result
