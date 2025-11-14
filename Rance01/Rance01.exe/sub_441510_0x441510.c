// 函数: sub_441510
// 地址: 0x441510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *arg12
void* esi = (*(*arg1 + 8))(arg2, arg3)
int128_t* edi = (*(*arg4 + 8))(arg5, arg6)
int128_t* ebx = (*(*arg9 + 8))(arg10, arg11)
int32_t eax_11 = (*(*arg1 + 0x1c))()
int32_t eax_15 = (*(*arg4 + 0x1c))() - arg7 * 4
int32_t eax_18 = (*(*arg9 + 0x1c))() - arg7 * 4
int32_t* result = arg8
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(0xff, 0)
int128_t xmm3_2 = _mm_slli_epi32(xmm0_1, 0x10) | xmm0_1

if (result s> 0)
    arg8 = result
    int32_t* i
    
    do
        int32_t* edx_9 = arg7
        result = nullptr
        void* ecx_17 = esi & 0xf
        arg12 = nullptr
        arg1 = nullptr
        void* ecx_19
        
        if (ecx_17 != 0)
            if ((ecx_17.b & 4) == 0)
                edx_9 = 4 - (ecx_17 u>> 2)
                void* ecx_22 = arg7 - edx_9
                result = ecx_22 & 0xfffffffc
                arg12 = result
                arg1 = ecx_22 - result
            
            if (edx_9 s> 0)
                int32_t var_14_1 = 0
                arg9 = edx_9
                int32_t* j
                
                do
                    uint32_t eax_21 = zx.d(*(ebx + 3))
                    arg4 = eax_21
                    void* ecx_27
                    ecx_27.b = *(zx.d(*esi) + ((zx.d(*edi) * eax_21) s>> 8) + ecx)
                    *esi = ecx_27.b
                    void* edx_14
                    edx_14.b = *(zx.d(*(esi + 1)) + ((zx.d(*(edi + 1)) * arg4) s>> 8) + ecx)
                    *(esi + 1) = edx_14.b
                    int32_t* eax_22
                    eax_22.b = *(zx.d(*(esi + 2)) + ((zx.d(*(edi + 2)) * arg4) s>> 8) + ecx)
                    *(esi + 2) = eax_22.b
                    esi += 4
                    edi += 4
                    ebx += 4
                    j = arg9
                    arg9 -= 1
                while (j != 1)
                result = arg12
            
            ecx_19 = arg1
        else
            result = edx_9 & 0xfffffffc
            ecx_19 = edx_9 - result
        
        if (result s> 0)
            result = ((result - 1) u>> 2) + 1
            int32_t* j_1
            
            do
                uint32_t xmm1_1[0x4] = *edi
                uint32_t xmm2_2[0x4] = _mm_srli_epi32(*ebx, 0x18)
                int32_t xmm0_4[0x4] = _mm_slli_epi32(xmm2_2, 0x10) | xmm2_2
                uint32_t xmm2_3[0x4] = *esi
                *esi = _mm_adds_epu8(xmm3_2 & xmm2_3, 
                    _mm_srli_epi16(_mm_mullo_epi16(xmm3_2 & xmm1_1, xmm0_4), 8)) | _mm_slli_epi32(
                    _mm_adds_epu8(xmm3_2 & _mm_srli_epi32(xmm2_3, 8), 
                        _mm_srli_epi16(_mm_mullo_epi16(xmm3_2 & _mm_srli_epi32(xmm1_1, 8), xmm0_4), 
                            8)), 
                    8)
                esi += 0x10
                edi = &edi[1]
                ebx = &ebx[1]
                j_1 = result
                result -= 1
            while (j_1 != 1)
        
        if (ecx_19 s> 0)
            arg9 = nullptr
            arg4 = ecx_19
            int32_t* j_2
            
            do
                uint32_t eax_25 = zx.d(*(ebx + 3))
                arg1 = eax_25
                void* ecx_36
                ecx_36.b = *(zx.d(*esi) + ((zx.d(*edi) * eax_25) s>> 8) + ecx)
                *esi = ecx_36.b
                void* edx_20
                edx_20.b = *(zx.d(*(esi + 1)) + ((zx.d(*(edi + 1)) * arg1) s>> 8) + ecx)
                *(esi + 1) = edx_20.b
                result.b = *(zx.d(*(esi + 2)) + ((zx.d(*(edi + 2)) * arg1) s>> 8) + ecx)
                *(esi + 2) = result.b
                esi += 4
                edi += 4
                ebx += 4
                j_2 = arg4
                arg4 -= 1
            while (j_2 != 1)
        
        esi += eax_11 - arg7 * 4
        edi += eax_15
        ebx += eax_18
        i = arg8
        arg8 -= 1
    while (i != 1)

return result
