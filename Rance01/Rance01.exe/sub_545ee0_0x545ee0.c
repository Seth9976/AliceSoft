// 函数: sub_545ee0
// 地址: 0x545ee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_1 = *(arg1 + 0x28c) + 4
int32_t edi = ecx_1[-1]
*(arg1 + 0x28c) = ecx_1
int32_t edx = *ecx_1
*(arg1 + 0x28c) = &ecx_1[1]
int32_t* ecx_3 = *(arg1 + 0x12c4)
int32_t esi

if (ecx_3[1] != 0)
    esi = *ecx_3
else
    esi = 0

int32_t edx_1 = *(esi + (edx << 2))
int32_t ecx_4

if (ecx_3[1] != 0)
    ecx_4 = *ecx_3
else
    ecx_4 = 0

int32_t ecx_5 = *(ecx_4 + (edi << 2))

if (ecx_5 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    return sub_551750(*(*(arg1 + 0x1e4) + (ecx_5 << 2)), edx_1)

return sub_551750(0, edx_1)
