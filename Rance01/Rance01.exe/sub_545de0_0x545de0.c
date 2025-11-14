// 函数: sub_545de0
// 地址: 0x545de0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *(arg1 + 0x28c) + 4
int32_t esi = ecx[-1]
*(arg1 + 0x28c) = ecx
int32_t edx = *ecx
*(arg1 + 0x28c) = &ecx[1]
int32_t* ecx_2 = *(arg1 + 0x12c4)
int32_t ecx_3

if (ecx_2[1] != 0)
    ecx_3 = *ecx_2
else
    ecx_3 = 0

int32_t edx_1 = *(ecx_3 + (edx << 2))
int32_t* ecx_4 = *(arg1 + 0x12c8)
int32_t ecx_5

if (ecx_4[1] != 0)
    ecx_5 = *ecx_4
else
    ecx_5 = 0

int32_t ecx_6 = *(ecx_5 + (esi << 2))

if (ecx_6 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    return sub_551750(*(*(arg1 + 0x1e4) + (ecx_6 << 2)), edx_1)

return sub_551750(0, edx_1)
