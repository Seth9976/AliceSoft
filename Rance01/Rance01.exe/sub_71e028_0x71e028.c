// 函数: sub_71e028
// 地址: 0x71e028
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = *(arg1 - 0x80) & 1

if (result == 0)
    return result

*(arg1 - 0x80) &= 0xfffffffe
return sub_601e80(arg1 - 0x6c) __tailcall
