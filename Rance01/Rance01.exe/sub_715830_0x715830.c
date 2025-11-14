// 函数: sub_715830
// 地址: 0x715830
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = *(arg1 - 0x40) & 1

if (result == 0)
    return result

*(arg1 - 0x40) &= 0xfffffffe
return sub_401110(*(arg1 - 0x44)) __tailcall
