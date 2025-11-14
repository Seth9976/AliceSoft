// 函数: sub_4b4d30
// 地址: 0x4b4d30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg3
int32_t eax_2 = (arg5 - arg3) s>> 2
int32_t result

if (eax_2 s<= 0x28)
    int32_t eax_8 = *arg4
    int32_t edx_10 = *arg3
    
    if (eax_8 s< edx_10)
        *arg4 = edx_10
        *arg3 = eax_8
    
    int32_t eax_9 = *arg5
    int32_t edx_11 = *arg4
    
    if (eax_9 s< edx_11)
        *arg5 = edx_11
        *arg4 = eax_9
    
    result = *arg4
    int32_t edx_12 = *arg3
    
    if (result s< edx_12)
        *arg4 = edx_12
        *arg3 = result
else
    int32_t eax_4
    int32_t edx
    edx:eax_4 = sx.q(eax_2 + 1)
    int32_t eax_6 = (eax_4 + (edx & 7)) s>> 3
    int32_t ebx_1 = *arg3
    result = eax_6 * 4
    int32_t edx_2 = *(result + arg3)
    
    if (edx_2 s< ebx_1)
        *(result + arg3) = ebx_1
        *arg3 = edx_2
    
    int32_t edx_3 = arg3[eax_6 * 2]
    int32_t ebx_2 = *(result + arg3)
    
    if (edx_3 s< ebx_2)
        arg3[eax_6 * 2] = ebx_2
        *(result + arg3) = edx_3
    
    int32_t edx_4 = *(result + arg3)
    int32_t edi_1 = *arg3
    
    if (edx_4 s< edi_1)
        *(result + arg3) = edi_1
        *arg3 = edx_4
    
    int32_t ebx_3 = *arg4
    void* edx_6 = arg4 - result
    int32_t edi_2 = *edx_6
    
    if (ebx_3 s< edi_2)
        *arg4 = edi_2
        *edx_6 = ebx_3
    
    int32_t edi_3 = *(result + arg4)
    int32_t ebx_4 = *arg4
    
    if (edi_3 s< ebx_4)
        *(result + arg4) = ebx_4
        *arg4 = edi_3
    
    int32_t edi_4 = *arg4
    int32_t ebx_5 = *edx_6
    
    if (edi_4 s< ebx_5)
        *arg4 = ebx_5
        *edx_6 = edi_4
    
    int32_t* edx_8 = arg5 - result
    int32_t ebx_6 = *edx_8
    int32_t* edi_6 = arg5 - (eax_6 << 3)
    int32_t ebp_2 = *edi_6
    
    if (ebx_6 s< ebp_2)
        *edx_8 = ebp_2
        *edi_6 = ebx_6
    
    int32_t* ebp_3 = *arg5
    int32_t ebx_8 = *edx_8
    
    if (ebp_3 s< ebx_8)
        *arg5 = ebx_8
        *edx_8 = ebp_3
    
    int32_t ebx_10 = *edx_8
    int32_t ebp_5 = *edi_6
    
    if (ebx_10 s< ebp_5)
        *edx_8 = ebp_5
        *edi_6 = ebx_10
    
    int32_t edi_7 = *arg4
    int32_t ebx_11 = *(result + arg3)
    
    if (edi_7 s< ebx_11)
        *arg4 = ebx_11
        *(result + arg3) = edi_7
    
    int32_t edi_8 = *edx_8
    int32_t ebx_12 = *arg4
    
    if (edi_8 s< ebx_12)
        *edx_8 = ebx_12
        *arg4 = edi_8
    
    int32_t edx_9 = *arg4
    int32_t edi_9 = *(result + arg3)
    
    if (edx_9 s< edi_9)
        *arg4 = edi_9
        *(result + arg3) = edx_9

return result
