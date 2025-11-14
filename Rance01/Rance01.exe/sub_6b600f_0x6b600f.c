// 函数: sub_6b600f
// 地址: 0x6b600f
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 u< 0x78c1f0 || arg1 u> 0x78c450)
    return EnterCriticalSection(arg1 + 0x20)

int32_t result = sub_6bf5de(((arg1 - 0x78c1f0) s>> 5) + 0x10)
*(arg1 + 0xc) |= 0x8000
return result
