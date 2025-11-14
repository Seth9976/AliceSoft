// 函数: sub_53e0e0
// 地址: 0x53e0e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_9 = *(arg1 + 0x28c)
int32_t edx = *ecx_9
*(arg1 + 0x28c) = &ecx_9[1]
int32_t esi = ecx_9[1]
*(arg1 + 0x28c) = &ecx_9[2]
int32_t* ecx_2 = *(arg1 + 0x12c8)
int32_t ecx_3

if (ecx_2[1] != 0)
    ecx_3 = *ecx_2
else
    ecx_3 = 0

int32_t* ecx_5 = *(*(arg1 + 0x1e4) + (*(ecx_3 + (edx << 2)) << 2))

if (ecx_5[1] != 0)
    **(arg1 + 0x2b0) = *(*ecx_5 + (esi << 2))
    *(arg1 + 0x2b0) += 4
    return 

**(arg1 + 0x2b0) = *(esi << 2)
*(arg1 + 0x2b0) += 4
