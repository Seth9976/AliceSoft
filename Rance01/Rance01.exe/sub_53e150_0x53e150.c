// 函数: sub_53e150
// 地址: 0x53e150
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *(arg1 + 0x28c) + 4
int32_t esi = *(ecx - 4)
*(arg1 + 0x28c) = ecx
int32_t edi = *ecx
*(arg1 + 0x28c) = ecx + 4
int32_t ebx = *(ecx + 4)
*(arg1 + 0x28c) = ecx + 8
int32_t* ecx_3 = *(arg1 + 0x12c8)
int32_t ecx_4

if (ecx_3[1] != 0)
    ecx_4 = *ecx_3
else
    ecx_4 = 0

int32_t edx = *(arg1 + 0x1e4)
int32_t* ecx_6 = *(edx + (*(ecx_4 + (esi << 2)) << 2))
int32_t ecx_7

if (ecx_6[1] != 0)
    ecx_7 = *ecx_6
else
    ecx_7 = 0

int32_t* edx_1 = *(edx + (*(ecx_7 + (edi << 2)) << 2))
int32_t edx_2

if (edx_1[1] != 0)
    edx_2 = *edx_1
else
    edx_2 = 0

**(arg1 + 0x2b0) = *(edx_2 + (ebx << 2))
*(arg1 + 0x2b0) += 4
