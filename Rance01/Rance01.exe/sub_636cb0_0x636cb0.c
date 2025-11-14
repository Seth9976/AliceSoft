// 函数: sub_636cb0
// 地址: 0x636cb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 == 0x110)
    sub_636d10(arg1, arg2)
    return 1

if (arg3 != 0x111)
    return 0

uint32_t edx_2 = zx.d(arg4)

if (edx_2 == 1)
    sub_637270(arg1 + 5, arg1)
else if (edx_2 != 2)
    return 1

EndDialog(arg2, 0)
return 1
