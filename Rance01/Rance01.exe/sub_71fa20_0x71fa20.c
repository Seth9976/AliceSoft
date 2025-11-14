// 函数: sub_71fa20
// 地址: 0x71fa20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = *(arg1 - 0x10) & 1

if (result == 0)
    return result

*(arg1 - 0x10) &= 0xfffffffe
return sub_401110(*(arg1 + 4)) __tailcall
