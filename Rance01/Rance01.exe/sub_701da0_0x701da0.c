// 函数: sub_701da0
// 地址: 0x701da0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint8_t* ebx = *(arg1 + 0x14)
uint32_t edx_1 = *(arg1 + 0x10) - ebx
uint32_t var_8

if (sub_6ca7f0(*(arg1 + 0x3c), ebx, edx_1, &var_8) == 0 || edx_1 != var_8)
    return 0xffffffe9

*(arg1 + 0x10) = ebx
return 0
