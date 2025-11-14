// 函数: sub_53f7b0
// 地址: 0x53f7b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t var_4 = arg1
int32_t* eax_1 = *(arg1 + 0x28c) + 4
int32_t esi = eax_1[-1]
*(arg1 + 0x28c) = eax_1
int32_t edi = *eax_1
*(arg1 + 0x28c) = &eax_1[1]
int32_t eax_2 = eax_1[1]
*(arg1 + 0x28c) = &eax_1[2]
int32_t* edx_2 = *(arg1 + 0x12c8)
int32_t edx_3

if (edx_2[1] != 0)
    edx_3 = *edx_2
else
    edx_3 = 0

int32_t esi_1 = *(arg1 + 0x1e4)
int32_t* edx_5 = *(esi_1 + (*(edx_3 + (esi << 2)) << 2))
int32_t ebp

if (edx_5[1] != 0)
    return sub_53f820(arg1, eax_2, ebp, esi_1, edi, arg1, *(*edx_5 + (edi << 2)))

return sub_53f820(arg1, eax_2, ebp, esi_1, edi, arg1, *(edi << 2))
