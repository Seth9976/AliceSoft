// 函数: sub_51db00
// 地址: 0x51db00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_3 = *arg1

if (*(ecx_3 + 0x69) != 0)
    *arg1 = ecx_3[2]
    return 

void* edx = *ecx_3

if (*(edx + 0x69) == 0)
    void* ecx_1 = *(edx + 8)
    
    while (*(ecx_1 + 0x69) == 0)
        edx = ecx_1
        ecx_1 = *(edx + 8)
    
    *arg1 = edx
    return 

int32_t* ecx_2 = ecx_3[1]

if (*(ecx_2 + 0x69) == 0)
    while (*arg1 == *ecx_2)
        *arg1 = ecx_2
        ecx_2 = ecx_2[1]
        
        if (*(ecx_2 + 0x69) != 0)
            break

if (*(*arg1 + 0x69) == 0)
    *arg1 = ecx_2
