// 函数: sub_53f380
// 地址: 0x53f380
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_9 = *(arg1 + 0x28c)
int32_t edx = *ecx_9
*(arg1 + 0x28c) = &ecx_9[1]
int32_t esi = ecx_9[1]
*(arg1 + 0x28c) = &ecx_9[2]
int32_t edi = ecx_9[2]
*(arg1 + 0x28c) = &ecx_9[3]
int32_t* ecx_3 = *(arg1 + 0x12c8)
int32_t ecx_4

if (ecx_3[1] != 0)
    ecx_4 = *ecx_3
else
    ecx_4 = 0

int32_t* ecx_5 = *(arg1 + 0x12c4)
int32_t ecx_6

if (ecx_5[1] != 0)
    ecx_6 = *ecx_5
else
    ecx_6 = 0

if (*(ecx_4 + (edx << 2)) != *(ecx_6 + (esi << 2)))
    *(arg1 + 0x28c) = *(arg1 + 0x290) + edi
