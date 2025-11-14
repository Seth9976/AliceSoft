// 函数: sub_6a73f0
// 地址: 0x6a73f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ebp = zx.d(arg1.w)
uint32_t eax = arg1 u>> 0x10

if (ebp s> 0 && eax s> 0)
    *(arg2 + 0x60)
    *(arg2 + 0xb0) = divs.dp.d(sx.q(eax), *(arg2 + 0x60))
    sub_6a7890(arg2 + 0x9c)
    *(arg2 + 0x90) = ebp
    sub_6a7890(arg2 + 0x7c)
    
    if (sub_6a4b20(ebp, arg2 + 0xbc, arg3, eax) == 0)
        *(arg2 + 0x130) = 1
        return 0
    
    sub_6a7560(arg2)

return 0
