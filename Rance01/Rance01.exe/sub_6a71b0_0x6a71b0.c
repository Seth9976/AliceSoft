// 函数: sub_6a71b0
// 地址: 0x6a71b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 u<= 0x114)
    if (arg3 == 0x114)
        sub_6a7910(arg1 + 0x7c, zx.d(arg4))
        sub_6a7560(arg1)
        return 0
    
    if (arg3 - 1 u<= 0xe)
        switch (arg3 + &jump_table_6a72d0[4]:3)
            case &lookup_table_6a72e4
                sub_6a7300(arg2, arg1)
                return 0
            case &lookup_table_6a72e4[1]
                sub_652460(arg1)
                return 0
            case &lookup_table_6a72e4[4]
                sub_6a73f0(arg5, arg1, arg2)
                return 0
            case &lookup_table_6a72e4[0xe]
                sub_6a7360(arg1, arg2)
                return 0
else
    if (arg3 == 0x20a)
        sub_6a7500(arg4.d, arg1)
        return 0
    
    if (arg3 == 0x115)
        sub_6a7910(arg1 + 0x9c, zx.d(arg4))
        sub_6a7560(arg1)
        return 0
    
    if (arg3 == 0x200)
        sub_6a7470(arg1, arg2)
        return 0
    
    if (arg3 == 0x2a3)
        *(arg1 + 0x78) = 0
        return 0

return DefWindowProcA(arg2, arg3, arg4.d, arg5)
