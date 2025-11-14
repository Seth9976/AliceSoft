// 函数: sub_6a9de0
// 地址: 0x6a9de0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ebp = zx.d(arg1.w)
HGDIOBJ eax_1 = (arg1 u>> 0x10) - *(arg2 + 0x5c)

if (ebp s> 0 && eax_1 s> 0)
    *(arg2 + 0x64)
    *(arg2 + 0x2c0) = divs.dp.d(sx.q(eax_1), *(arg2 + 0x64))
    sub_6a7890(arg2 + 0x2ac)
    *(arg2 + 0x2e0) = ebp
    sub_6a7890(arg2 + 0x2cc)
    
    if (sub_6a4b20(ebp, arg2 + 0x388, arg3, eax_1) != 0
            && sub_6a4b20(ebp, arg2 + 0x324, arg3, *(arg2 + 0x5c)) != 0)
        sub_6aa6b0(arg2)
        return 0
    
    *(arg2 + 0x450) = 1

return 0
