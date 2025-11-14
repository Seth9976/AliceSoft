// 函数: sub_639950
// 地址: 0x639950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 u<= 0x115)
    switch (arg3)
        case 1
            sub_639c90(arg2, arg1)
            return 0
        case 2
            sub_639e60(arg1)
            return 0
        case 5
            sub_639f80(arg5, arg1, arg2)
            return 0
        case 0xf
            sub_639ea0(arg1, arg2)
            return 0
        case 0x114
            sub_64d880(arg1 + 0x380, zx.d(arg4.w))
            sub_639ff0(arg1)
            return 0
        case 0x115
            sub_64d880(arg1 + 0x364, zx.d(arg4.w))
            sub_639ff0(arg1)
            return 0
else if (arg3 - 0x200 u<= 0xa3)
    switch (arg3)
        case 0x200
            sub_639b50(arg1, arg2)
            return 0
        case 0x201
            sub_639bf0(arg1)
            return 0
        case 0x202
            *(arg1 + 0x34d) = *(arg1 + 0x34c)
            *(arg1 + 0x34c) = 0
            return 0
        case 0x2a3
            *(arg1 + 0x360) = 0
            return 0

return DefWindowProcA(arg2, arg3, arg4, arg5)
