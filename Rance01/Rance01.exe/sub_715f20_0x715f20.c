// 函数: sub_715f20
// 地址: 0x715f20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = *(arg1 + 4) & 1

if (result == 0)
    return result

*(arg1 + 4) &= 0xfffffffe
return sub_401110(*(arg1 + 8)) __tailcall
