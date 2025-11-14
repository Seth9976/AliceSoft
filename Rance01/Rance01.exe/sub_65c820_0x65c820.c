// 函数: sub_65c820
// 地址: 0x65c820
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 u<= 0x200)
    switch (arg3)
        case 1
            sub_65ccc0(arg1, arg2)
            return 0
        case 2
            sub_65ce90(arg1)
            return 0
        case 5
            sub_65ced0(arg5, arg1)
            return 0
        case 0xf
            sub_65cf30(arg1, arg2)
            return 0
        case 0x114
            sub_64d880(arg1 + 0x12c, zx.d(arg4.w))
            sub_65cfa0(arg1)
            return 0
        case 0x115
            sub_64d880(arg1 + 0x110, zx.d(arg4.w))
            sub_65cfa0(arg1)
            return 0
        case 0x200
            sub_65cb00(arg1, arg2)
            return 0
else if (arg3 - 0x201 u<= 0xa2)
    switch (arg3)
        case 0x201
            **(arg1 + 0xf4) = arg1
            uint32_t eax
            eax.b = *(arg1 + 0xf8)
            *(arg1 + 0xf9) = eax.b
            *(arg1 + 0xf8) = 1
            SetCapture(arg2)
            return 0
        case 0x202
            *(arg1 + 0xf9) = *(arg1 + 0xf8)
            *(arg1 + 0xf8) = 0
            ReleaseCapture()
            return 0
        case 0x203
            sub_65cc20(arg1)
            return 0
        case 0x206
            sub_65cc70(arg1)
            return 0
        case 0x2a3
            *(arg1 + 0x10c) = 0
            return 0

return DefWindowProcA(arg2, arg3, arg4, arg5)
