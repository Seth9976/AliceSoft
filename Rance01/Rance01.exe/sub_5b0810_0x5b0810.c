// 函数: sub_5b0810
// 地址: 0x5b0810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg4 == 0 || arg3 == 0 || (*(arg4 + 0x6c) & 0x200) != 0)
    return 

arg2 = *(arg1 + 2)

if (arg2 != 0 && arg2 u<= 0xc)
    arg2 = *(arg1 + 3)
    
    if (arg2 != 0 && arg2 u<= 0x1f && *(arg1 + 4) u<= 0x17 && *(arg1 + 5) u<= 0x3b
            && *(arg1 + 6) u<= 0x3c)
        int32_t edx = *arg1
        int32_t eax = *(arg1 + 4)
        *(arg3 + 8) |= 0x200
        *(arg3 + 0x3c) = edx
        *(arg3 + 0x40) = eax
        return 

sub_5a5de0("Ignoring invalid time value", arg4)
