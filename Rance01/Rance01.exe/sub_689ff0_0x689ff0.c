// 函数: sub_689ff0
// 地址: 0x689ff0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x60) == 0)
    return 

void* eax_1 = *(arg1 + 0x14)
int32_t ebx
int32_t var_4 = ebx

if (arg2 == *(eax_1 + 8))
    *(arg1 + 0x40) = arg3
    (*(**(arg1 + 0x60) + 0x1c))(1)
    return 

if (arg2 == *(*(arg1 + 0x18) + 8))
    *(arg1 + 0x3c) = arg3
    (*(**(arg1 + 0x60) + 0x1c))(1)
    return 

if (arg2 == *(*(arg1 + 0x1c) + 8))
    *(arg1 + 0x44) = arg3
    (*(**(arg1 + 0x60) + 0x1c))(1)
    return 

if (arg2 == *(*(arg1 + 0x20) + 8))
    *(arg1 + 0x48) = arg3
    (*(**(arg1 + 0x60) + 0x1c))(1)
    return 

int32_t eax_15 = (*(arg1 + 0x28) - *(arg1 + 0x24)) s>> 2
int32_t edx_9 = 0

if (eax_15 s> 0)
    int32_t edi_1 = *(arg1 + 0x34)
    
    while (arg2 != edi_1)
        edx_9 += 1
        edi_1 += 1
        
        if (edx_9 s>= eax_15)
            (*(**(arg1 + 0x60) + 0x1c))(1)
            return 
    
    if ((*(arg1 + 0x50) - *(arg1 + 0x4c)) s>> 2 s> edx_9)
        *(*(arg1 + 0x4c) + (edx_9 << 2)) = arg3

(*(**(arg1 + 0x60) + 0x1c))(1)
