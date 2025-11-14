// 函数: sub_6d3cb0
// 地址: 0x6d3cb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ebx_1 = *(arg1 + 0x10) - *(arg1 + 0x14)
uint32_t var_c

if (sub_6ca7f0(*(arg1 + 0x3c), arg1 + 0x40, ebx_1, &var_c) == 0 || ebx_1 != var_c)
    return 0xffffffe9

int32_t edx_1 = *(arg1 + 0x14)
*(arg1 + 0x10) = edx_1
*(arg1 + 0x18) = edx_1 + *(arg1 + 0x20)
return 0
