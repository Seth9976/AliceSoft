// 函数: sub_5812f0
// 地址: 0x5812f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edx = arg3
int32_t esi = *(arg2 + 4)
int32_t* ecx = &edx[2]

if (ecx != esi)
    do
        *edx = *ecx
        edx[1] = ecx[1]
        ecx = &ecx[2]
        edx = &edx[2]
    while (ecx != esi)
    
    edx = arg3

*(arg2 + 4) -= 8
*arg1 = edx
