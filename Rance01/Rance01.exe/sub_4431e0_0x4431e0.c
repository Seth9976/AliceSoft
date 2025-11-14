// 函数: sub_4431e0
// 地址: 0x4431e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *arg1
int128_t* esi = (*(*arg2 + 8))(arg3, arg4)
int128_t* edi = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_8 = (*(*arg2 + 0x1c))() - arg8 * 4
int32_t eax_11 = (*(*arg5 + 0x1c))() - arg8 * 4
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
void* result = arg9
uint32_t xmm5_1[0x4] = _mm_slli_epi32(xmm0_1, 0x10)
int128_t xmm3_1 = xmm5_1 | xmm0_1

if (result s> 0)
    void* var_4_1 = result
    void* i
    
    do
        int32_t* edx_6 = arg8
        result = nullptr
        void* ecx_11 = esi & 0xf
        arg9 = nullptr
        arg2 = nullptr
        void* ecx_13
        
        if (ecx_11 != 0)
            if ((ecx_11.b & 4) == 0)
                edx_6 = 4 - (ecx_11 u>> 2)
                void* ecx_16 = arg8 - edx_6
                result = ecx_16 & 0xfffffffc
                arg9 = result
                arg2 = ecx_16 - result
            
            if (edx_6 s> 0)
                int32_t var_10_1 = 0
                arg5 = edx_6
                int32_t* j
                
                do
                    uint32_t ecx_18 = zx.d(*(edi + 3))
                    int32_t edx_10
                    edx_10.b = *(zx.d(*esi) + ((zx.d(*edi) * ecx_18) s>> 8) + ebx)
                    *esi = edx_10.b
                    int32_t eax_18
                    eax_18.b = *(zx.d(*(esi + 1)) + ((zx.d(*(edi + 1)) * ecx_18) s>> 8) + ebx)
                    *(esi + 1) = eax_18.b
                    ecx_18.b = *(zx.d(*(esi + 2)) + ((zx.d(*(edi + 2)) * ecx_18) s>> 8) + ebx)
                    *(esi + 2) = ecx_18.b
                    esi += 4
                    edi += 4
                    j = arg5
                    arg5 -= 1
                while (j != 1)
                result = arg9
            
            ecx_13 = arg2
        else
            result = edx_6 & 0xfffffffc
            ecx_13 = edx_6 - result
        
        if (result s> 0)
            result = ((result - 1) u>> 2) + 1
            void* j_1
            
            do
                uint32_t xmm4_1[0x4] = *edi
                int32_t xmm0_3[0x4] = xmm3_1 & _mm_srli_epi32(xmm4_1, 8)
                uint32_t xmm1_5[0x4] = _mm_srli_epi32(xmm5_1 & xmm0_3, 0x10)
                int32_t xmm2_3[0x4] = _mm_slli_epi32(xmm1_5, 0x10) | xmm1_5
                uint32_t xmm1_6[0x4] = *esi
                int32_t xmm4_3[0x4] = xmm3_1 & _mm_srli_epi32(xmm1_6, 8)
                int32_t xmm0_4[0x4] = _mm_mullo_epi16(xmm0_3, xmm2_3)
                int32_t xmm7_3[0x4] = _mm_mullo_epi16(xmm3_1 & xmm4_1, xmm2_3)
                uint16_t xmm0_5[0x8] = _mm_srli_epi16(xmm0_4, 8)
                uint16_t xmm7_4[0x8] = _mm_srli_epi16(xmm7_3, 8)
                int32_t xmm4_4[0x4] = _mm_adds_epu8(xmm4_3, xmm0_5)
                *esi = _mm_adds_epu8(xmm3_1 & xmm1_6, xmm7_4) | _mm_slli_epi32(xmm4_4, 8)
                esi = &esi[1]
                edi = &edi[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
        
        if (ecx_13 s> 0)
            arg5 = nullptr
            arg2 = ecx_13
            int32_t* j_2
            
            do
                uint32_t ecx_19 = zx.d(*(edi + 3))
                int32_t edx_19
                edx_19.b = *(zx.d(*esi) + ((zx.d(*edi) * ecx_19) s>> 8) + ebx)
                *esi = edx_19.b
                int32_t eax_26
                eax_26.b = *(zx.d(*(esi + 1)) + ((zx.d(*(edi + 1)) * ecx_19) s>> 8) + ebx)
                *(esi + 1) = eax_26.b
                result = zx.d(*(esi + 2))
                ecx_19.b = *(result + ((zx.d(*(edi + 2)) * ecx_19) s>> 8) + ebx)
                *(esi + 2) = ecx_19.b
                esi += 4
                edi += 4
                j_2 = arg2
                arg2 -= 1
            while (j_2 != 1)
        
        esi += eax_8
        edi += eax_11
        i = var_4_1
        var_4_1 -= 1
    while (i != 1)

return result
