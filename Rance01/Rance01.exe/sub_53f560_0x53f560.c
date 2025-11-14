// 函数: sub_53f560
// 地址: 0x53f560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_5 = *(arg1 + 0x28c)
int32_t edx = *ecx_5
*(arg1 + 0x28c) = &ecx_5[1]
int32_t* ecx_2 = *(arg1 + 0x2b0) - 4
*(arg1 + 0x2b0) = ecx_2

if (*ecx_2 != 0)
    *(arg1 + 0x28c) = *(arg1 + 0x290) + edx
