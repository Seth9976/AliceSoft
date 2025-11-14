// 函数: sub_5458e0
// 地址: 0x5458e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_7 = *(arg1 + 0x28c)
int32_t edx = *ecx_7
*(arg1 + 0x28c) = &ecx_7[1]
int32_t* ecx_1 = *(arg1 + 0x12c8)
int32_t ecx_2

if (ecx_1[1] != 0)
    ecx_2 = *ecx_1
else
    ecx_2 = 0

int32_t ecx_3 = *(ecx_2 + (edx << 2))
void* ecx_4

if (ecx_3 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    ecx_4 = *(*(arg1 + 0x1e4) + (ecx_3 << 2))
else
    ecx_4 = nullptr

**(arg1 + 0x2b0) = *(ecx_4 + 4) u>> 2
*(arg1 + 0x2b0) += 4
