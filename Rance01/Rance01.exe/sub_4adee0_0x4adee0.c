// 函数: sub_4adee0
// 地址: 0x4adee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edx = arg3
int32_t* ecx = arg4
int32_t* ebx = edx

if (edx != ecx)
    int32_t esi_1 = *(arg2 + 4)
    
    while (ecx != esi_1)
        *edx = *ecx
        edx[1] = ecx[1]
        edx[2] = ecx[2]
        ecx = &ecx[3]
        edx = &edx[3]
    
    *(arg2 + 4) = edx

*arg1 = ebx
