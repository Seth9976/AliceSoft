// 函数: sub_6a9970
// 地址: 0x6a9970
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx

if (arg3 u<= 0x115)
    switch (arg3)
        case 1
            sub_6a9b90(arg2, edx, arg1)
            return 0
        case 2
            sub_6a9cc0(arg1)
            return 0
        case 5
            sub_6a9de0(arg5, arg1, arg2)
            return 0
        case 0xf
            sub_6a9d00(arg1, arg2)
            return 0
        case 0x114
            sub_6a7910(arg1 + 0x2cc, zx.d(arg4.w))
            sub_6aa6b0(arg1)
            return 0
        case 0x115
            sub_6a7910(arg1 + 0x2ac, zx.d(arg4.w))
            sub_6aa6b0(arg1)
            return 0
else if (arg3 - 0x200 u<= 0xa3)
    switch (arg3)
        case 0x200
            sub_6a9f20(arg1, arg2)
            return 0
        case 0x201
            sub_6a9e70(arg1)
            return 0
        case 0x202
            edx.b = *(arg1 + 0x28c)
            *(arg1 + 0x28d) = edx.b
            *(arg1 + 0x28c) = 0
            return 0
        case 0x20a
            sub_6a9fc0(arg4, arg1)
            return 0
        case 0x2a3
            *(arg1 + 0x2a0) = 0
            return 0
return DefWindowProcA(arg2, arg3, arg4, arg5)
