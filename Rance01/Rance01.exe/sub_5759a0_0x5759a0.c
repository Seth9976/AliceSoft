// 函数: sub_5759a0
// 地址: 0x5759a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_2 = (arg5 - arg3) s>> 2
int32_t result

if (eax_2 s<= 0x28)
    void* edx_13 = *arg4
    void* eax_8 = *arg3
    
    if (*(*(edx_13 + 0x40) + 4) s> *(*(eax_8 + 0x40) + 4))
        *arg4 = eax_8
        *arg3 = edx_13
    
    void* edx_14 = *arg5
    void* eax_9 = *arg4
    
    if (*(*(edx_14 + 0x40) + 4) s> *(*(eax_9 + 0x40) + 4))
        *arg5 = eax_9
        *arg4 = edx_14
    
    void* edx_15 = *arg4
    result = *arg3
    
    if (*(*(edx_15 + 0x40) + 4) s> *(*(result + 0x40) + 4))
        *arg4 = result
        *arg3 = edx_15
else
    int32_t eax_4
    int32_t edx
    edx:eax_4 = sx.q(eax_2 + 1)
    int32_t eax_6 = (eax_4 + (edx & 7)) s>> 3
    int32_t edx_2 = eax_6 << 3
    result = eax_6 * 4
    void* ebx = *(result + arg3)
    void* edx_3 = *arg3
    
    if (*(*(ebx + 0x40) + 4) s> *(*(edx_3 + 0x40) + 4))
        *(result + arg3) = edx_3
        *arg3 = ebx
    
    void* edx_5 = arg3[eax_6 * 2]
    void* edi_3 = *(result + arg3)
    
    if (*(*(edx_5 + 0x40) + 4) s> *(*(edi_3 + 0x40) + 4))
        *(edx_2 + arg3) = edi_3
        *(result + arg3) = edx_5
    
    void* edi_4 = *(result + arg3)
    void* edx_6 = *arg3
    
    if (*(*(edi_4 + 0x40) + 4) s> *(*(edx_6 + 0x40) + 4))
        *(result + arg3) = edx_6
        *arg3 = edi_4
    
    void* ebx_5 = *arg4
    void* edx_8 = arg4 - result
    void* edi_5 = *edx_8
    
    if (*(*(ebx_5 + 0x40) + 4) s> *(*(edi_5 + 0x40) + 4))
        *arg4 = edi_5
        *edx_8 = ebx_5
    
    void* ebx_8 = *(result + arg4)
    void* edi_7 = *arg4
    
    if (*(*(ebx_8 + 0x40) + 4) s> *(*(edi_7 + 0x40) + 4))
        *(result + arg4) = edi_7
        *arg4 = ebx_8
    
    void* ebx_11 = *arg4
    void* edi_9 = *edx_8
    
    if (*(*(ebx_11 + 0x40) + 4) s> *(*(edi_9 + 0x40) + 4))
        *arg4 = edi_9
        *edx_8 = ebx_11
    
    int32_t* edi_12 = arg5 - edx_2
    int32_t* edx_10 = arg5 - result
    void* ebx_14 = *edx_10
    
    if (*(*(ebx_14 + 0x40) + 4) s> *(*(*edi_12 + 0x40) + 4))
        *edx_10 = *edi_12
        *edi_12 = ebx_14
    
    void* ebp_10 = *arg5
    
    if (*(*(ebp_10 + 0x40) + 4) s> *(*(*edx_10 + 0x40) + 4))
        *arg5 = *edx_10
        *edx_10 = ebp_10
    
    void* ebx_23 = *edx_10
    
    if (*(*(ebx_23 + 0x40) + 4) s> *(*(*edi_12 + 0x40) + 4))
        *edx_10 = *edi_12
        *edi_12 = ebx_23
    
    void* ebx_28 = *arg4
    void* edi_13 = *(result + arg3)
    
    if (*(*(ebx_28 + 0x40) + 4) s> *(*(edi_13 + 0x40) + 4))
        *arg4 = edi_13
        *(result + arg3) = ebx_28
    
    int32_t* ebx_31 = *edx_10
    void* edi_15 = *arg4
    
    if (*(ebx_31[0x10] + 4) s> *(*(edi_15 + 0x40) + 4))
        *edx_10 = edi_15
        *arg4 = ebx_31
    
    void* edi_16 = *arg4
    void* edx_12 = *(result + arg3)
    
    if (*(*(edi_16 + 0x40) + 4) s> *(*(edx_12 + 0x40) + 4))
        *arg4 = edx_12
        *(result + arg3) = edi_16

return result
