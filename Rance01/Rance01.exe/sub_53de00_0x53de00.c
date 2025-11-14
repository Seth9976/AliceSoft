// 函数: sub_53de00
// 地址: 0x53de00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_2 = *(arg1 + 0x28c)
int32_t esi = *ecx_2
*(arg1 + 0x28c) = &ecx_2[1]
void* ecx_1 = *(arg1 + 0x2b0)
int32_t edx = *(ecx_1 - 4)
int32_t* edx_1

if (edx u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    edx_1 = *(*(arg1 + 0x1e4) + (edx << 2))
else
    edx_1 = nullptr

if (edx_1[1] == 0)
    *(ecx_1 - 4) = *(esi << 2)
    return 0

int32_t result = *(*edx_1 + (esi << 2))
*(ecx_1 - 4) = result
return result
