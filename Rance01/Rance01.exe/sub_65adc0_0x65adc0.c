// 函数: sub_65adc0
// 地址: 0x65adc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 u> 0x200)
    if (arg3 == 0x201)
        sub_65af30(arg1)
        return 0
    
    if (arg3 == 0x202)
        int32_t edx_4
        edx_4.b = *(arg1 + 0x68)
        *(arg1 + 0x69) = edx_4.b
        *(arg1 + 0x68) = 0
        return 0
    
    if (arg3 == 0x2a3)
        *(arg1 + 0x7c) = 0
        return 0
else
    if (arg3 == 0x200)
        sub_65aed0(arg1, arg2)
        return 0
    
    if (arg3 - 1 u<= 0xe)
        switch (arg3 + &jump_table_65aea4[4]:3)
            case &lookup_table_65aeb8
                sub_65b030(arg2, arg1)
                return 0
            case &lookup_table_65aeb8[1]
                sub_65b1a0(arg1)
                return 0
            case &lookup_table_65aeb8[4]
                sub_65b1e0(arg2, arg1, arg5)
                return 0
            case &lookup_table_65aeb8[0xe]
                sub_65b250(arg1, arg2)
                return 0

return DefWindowProcA(arg2, arg3, arg4, arg5)
