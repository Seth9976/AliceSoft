// 函数: sub_53e1d0
// 地址: 0x53e1d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edx = *(arg1 + 0x2b0)
int32_t* ecx = *(arg1 + 0x28c) + 4
int32_t edi = ecx[-1]
*(arg1 + 0x28c) = ecx
int32_t esi = *ecx
*(arg1 + 0x28c) = &ecx[1]
int32_t ecx_2 = *(edx - 4)
int32_t* ecx_3

if (ecx_2 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    ecx_3 = *(*(arg1 + 0x1e4) + (ecx_2 << 2))
else
    ecx_3 = nullptr

int32_t ecx_4

if (ecx_3[1] != 0)
    ecx_4 = *ecx_3
else
    ecx_4 = 0

int32_t* eax_1 = *(*(arg1 + 0x1e4) + (*(ecx_4 + (edi << 2)) << 2))

if (eax_1[1] == 0)
    *(edx - 4) = *(esi << 2)
    return 0

int32_t result = *(*eax_1 + (esi << 2))
*(edx - 4) = result
return result
