// 函数: __unlock_file
// 地址: 0x6b6082
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 u< 0x78c1f0 || arg1 u> 0x78c450)
    return LeaveCriticalSection(arg1 + 0x20)

*(arg1 + 0xc) &= 0xffff7fff
return __unlock(((arg1 - 0x78c1f0) s>> 5) + 0x10)
