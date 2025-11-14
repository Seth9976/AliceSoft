// 函数: sub_720a80
// 地址: 0x720a80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = *(arg1 - 0x38) & 1

if (result == 0)
    return result

*(arg1 - 0x38) &= 0xfffffffe
return sub_4054e0(*(arg1 - 0x40)) __tailcall
