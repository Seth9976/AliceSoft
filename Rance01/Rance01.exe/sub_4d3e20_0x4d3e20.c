// 函数: sub_4d3e20
// 地址: 0x4d3e20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx_2 = *arg1

if (*(ecx_2 + 0x39) != 0)
    return 

int32_t* edx_1 = *(ecx_2 + 8)

if (*(edx_1 + 0x39) == 0)
    int32_t* ecx = *edx_1
    
    while (*(ecx + 0x39) == 0)
        edx_1 = ecx
        ecx = *edx_1
    
    *arg1 = edx_1
    return 

void* ecx_1 = *(ecx_2 + 4)

if (*(ecx_1 + 0x39) == 0)
    while (*arg1 == *(ecx_1 + 8))
        *arg1 = ecx_1
        ecx_1 = *(ecx_1 + 4)
        
        if (*(ecx_1 + 0x39) != 0)
            break

*arg1 = ecx_1
