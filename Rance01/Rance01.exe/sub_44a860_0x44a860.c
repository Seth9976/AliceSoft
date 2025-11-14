// 函数: sub_44a860
// 地址: 0x44a860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *(arg1 + 0x20)
int128_t* esi = (*(*arg2 + 8))(arg3, arg4)
int128_t* edi = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_8 = (*(*arg2 + 0x1c))() - arg8 * 4
int32_t eax_11 = (*(*arg5 + 0x1c))() - arg8 * 4
uint32_t xmm1[0x4] = _mm_shuffle_epi32(0xff, 0)
int32_t* result = arg9
uint32_t xmm0_3[0x4] = _mm_slli_epi32(xmm1, 0x10) | xmm1
int128_t xmm4_1 = xmm0_3 | _mm_slli_epi32(xmm0_3, 8)

if (result s> 0)
    arg9 = result
    int32_t* i
    
    do
        int32_t* eax_12 = arg8
        void* edx_6 = nullptr
        void* ecx_11 = esi & 0xf
        arg2 = nullptr
        
        if (ecx_11 != 0)
            if ((ecx_11.b & 4) == 0)
                eax_12 = 4 - (ecx_11 u>> 2)
                void* ecx_14 = arg8 - eax_12
                edx_6 = ecx_14 & 0xfffffffc
                arg2 = ecx_14 - edx_6
            
            if (eax_12 s> 0)
                int32_t var_c_1 = 0
                arg5 = eax_12
                int32_t* j
                
                do
                    *esi = *(zx.d(*edi) + (zx.d(*esi) << 8) + ebx)
                    int32_t ecx_18
                    ecx_18.b = *((zx.d(*(esi + 1)) << 8) + zx.d(*(edi + 1)) + ebx)
                    uint32_t eax_19 = zx.d(*(esi + 2))
                    *(esi + 1) = ecx_18.b
                    *(esi + 2) = *(zx.d(*(edi + 2)) + (eax_19 << 8) + ebx)
                    esi += 4
                    edi += 4
                    j = arg5
                    arg5 -= 1
                while (j != 1)
            
            result = arg2
        else
            edx_6 = eax_12 & 0xfffffffc
            result = eax_12 - edx_6
        
        if (edx_6 s> 0)
            int32_t j_3 = ((edx_6 - 1) u>> 2) + 1
            int32_t j_1
            
            do
                uint32_t xmm3_1[0x4] = *edi
                int128_t xmm2_2 = xmm0_3 & _mm_srli_epi32(xmm3_1, 8)
                uint32_t xmm3_4[0x4] = *esi ^ xmm4_1
                *esi = (xmm0_3 ^
                    _mm_srli_epi16(_mm_mullo_epi16((xmm0_3 & xmm3_1) ^ xmm0_3, xmm0_3 & xmm3_4), 8)) |
                    _mm_slli_epi32(
                    xmm0_3 ^ _mm_srli_epi16(
                        _mm_mullo_epi16(xmm2_2 ^ xmm0_3, xmm0_3 & _mm_srli_epi32(xmm3_4, 8)), 8), 
                    8)
                esi = &esi[1]
                edi = &edi[1]
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
        
        if (result s> 0)
            arg2 = nullptr
            int32_t* j_2
            
            do
                *esi = *(zx.d(*edi) + (zx.d(*esi) << 8) + ebx)
                int32_t edx_13
                edx_13.b = *((zx.d(*(esi + 1)) << 8) + zx.d(*(edi + 1)) + ebx)
                uint32_t ecx_26 = zx.d(*(esi + 2))
                *(esi + 1) = edx_13.b
                *(esi + 2) = *(zx.d(*(edi + 2)) + (ecx_26 << 8) + ebx)
                esi += 4
                edi += 4
                j_2 = result
                result -= 1
            while (j_2 != 1)
        
        esi += eax_8
        edi += eax_11
        i = arg9
        arg9 -= 1
    while (i != 1)

return result
