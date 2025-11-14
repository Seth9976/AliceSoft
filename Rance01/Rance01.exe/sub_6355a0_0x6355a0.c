// 函数: sub_6355a0
// 地址: 0x6355a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_c = arg1

if (arg3 u<= 0x114)
    if (arg3 == 0x114)
        sub_64d880(arg1 + 0x134, zx.d(arg4.w))
        sub_6359f0(arg1)
        return 0
    
    if (arg3 - 1 u<= 0xe)
        switch (arg3 + &jump_table_635734[4]:3)
            case &lookup_table_635748
                int32_t edx_1 = *(arg1 + 0x5c)
                *(arg1 + 0x11c) = arg2
                *(arg1 + 0x138) = arg2
                int32_t eax_2 = *(arg1 + 0x60)
                *(arg1 + 0xd8) = edx_1
                *(arg1 + 0xb0) = eax_2
                sub_64d730(arg1 + 0x9c)
                *(arg1 + 0xf8) = 0xffffff
                return 0
            case &lookup_table_635748[1]
                sub_652460(arg1)
                return 0
            case &lookup_table_635748[4]
                sub_635990(arg5, arg1, arg2)
                return 0
            case &lookup_table_635748[0xe]
                sub_635900(arg1, arg2)
                return 0
else if (arg3 - 0x115 u<= 0xed)
    switch (arg3)
        case 0x115
            sub_64d880(arg1 + 0x118, zx.d(arg4.w))
            sub_6359f0(arg1)
            return 0
        case 0x200
            sub_635860(arg1, arg2)
            return 0
        case 0x201
            **(arg1 + 0x64) = arg1
            uint32_t eax
            eax.b = *(arg1 + 0x100)
            *(arg1 + 0x101) = eax.b
            *(arg1 + 0x100) = 1
            *(arg1 + 0xe4) = *(arg1 + 0x108)
            return 0
        case 0x202
            *(arg1 + 0x101) = *(arg1 + 0x100)
            *(arg1 + 0x100) = 0
            return 0

return DefWindowProcA(arg2, arg3, arg4, arg5)
