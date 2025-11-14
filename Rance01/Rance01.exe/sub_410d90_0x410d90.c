// 函数: sub_410d90
// 地址: 0x410d90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = arg1
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
uint32_t (* eax_2)[0x4] = (*(*arg3 + 8))(arg2, arg1)
int32_t* result = (*(*arg3 + 0x1c))() - (arg4 << 2)
uint32_t (* edi_2)[0x4] = eax_2
int32_t* result_1 = result
int32_t i_1 = arg5
uint32_t xmm7_1[0x4] =
    _mm_shuffle_epi32(zx.o(((arg9 << 8 | arg6) << 8 | arg7) << 8) | zx.o(arg8), 0)
int32_t i

do
    int32_t j_1 = arg4
    int32_t j
    
    do
        if (j_1 u>= 4)
            result = edi_2 & 0xf
            
            if (result == 0)
                while (true)
                    *edi_2 = xmm7_1
                    edi_2 = &edi_2[1]
                    int32_t j_2 = j_1
                    j_1 -= 4
                    
                    if (j_2 == 4)
                        break
                    
                    if (j_1 u< 4)
                        goto label_410dfa
                
                break
        
    label_410dfa:
        *edi_2 = xmm7_1
        edi_2 = &(*edi_2)[1]
        j = j_1
        j_1 -= 1
    while (j != 1)
    edi_2 += result_1
    i = i_1
    i_1 -= 1
while (i != 1)
return result
