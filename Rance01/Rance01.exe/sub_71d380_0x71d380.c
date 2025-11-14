// 函数: sub_71d380
// 地址: 0x71d380
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = *(arg1 + 0xc) & 1

if (result == 0)
    return result

*(arg1 + 0xc) &= 0xfffffffe
return sub_401110(*(arg1 + 4)) __tailcall
