// 函数: sub_715720
// 地址: 0x715720
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = *(arg1 + 8) & 1

if (result == 0)
    return result

*(arg1 + 8) &= 0xfffffffe
return sub_401110(*(arg1 + 4)) __tailcall
