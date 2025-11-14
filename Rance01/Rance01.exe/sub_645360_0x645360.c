// 函数: sub_645360
// 地址: 0x645360
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx

if (arg3 u<= 0x115)
    switch (arg3)
        case 1
            sub_6456a0(arg2, edx, arg1)
            return 0
        case 2
            sub_6457b0(arg1)
            return 0
        case 5
            sub_6458d0(arg5, arg1, arg2)
            return 0
        case 0xf
            sub_6457f0(arg1, arg2)
            return 0
        case 0x114
            sub_64d880(arg1 + 0x1d8, zx.d(arg4.w))
            sub_645940(arg1)
            return 0
        case 0x115
            sub_64d880(arg1 + 0x1bc, zx.d(arg4.w))
            sub_645940(arg1)
            return 0
else if (arg3 - 0x200 u<= 0xa3)
    switch (arg3)
        case 0x200
            sub_645560(arg1, arg2)
            return 0
        case 0x201
            sub_645600(arg1)
            return 0
        case 0x202
            edx.b = *(arg1 + 0x1a4)
            *(arg1 + 0x1a5) = edx.b
            *(arg1 + 0x1a4) = 0
            return 0
        case 0x2a3
            *(arg1 + 0x1b8) = 0
            return 0
return DefWindowProcA(arg2, arg3, arg4, arg5)
