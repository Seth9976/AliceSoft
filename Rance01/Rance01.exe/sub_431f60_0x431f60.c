// 函数: sub_431f60
// 地址: 0x431f60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *(arg2 + 0x70)
int32_t result

if (ecx == 0)
    result.b = 0
    return result

void* edx = *(ecx + 0x1c)
int32_t var_8 = arg1
result.b = 1

if (edx != 0)
    *(ecx + 0x54) = 1
    void* edx_1 = *(edx + 0x24)
    int32_t edx_2
    
    if (edx_1 != 0)
        edx_2 = *(edx_1 + 0x18)
    else
        edx_2 = 0xffffffff
    
    int32_t var_c = edx_2
    int32_t var_4 = 0
    int32_t* edx_3 = &var_c
    
    if (edx_2 s>= arg1)
        edx_3 = &var_8
    
    if (*edx_3 s<= 0)
        edx_3 = &var_4
    
    *(ecx + 0x58) = *edx_3
    *(ecx + 0x5c) = 0

*(arg2 + 0xf4) = 1
return result
