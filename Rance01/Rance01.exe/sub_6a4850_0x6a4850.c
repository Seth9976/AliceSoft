// 函数: sub_6a4850
// 地址: 0x6a4850
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 == 0x110)
    sub_6a48b0(arg1)
    return 1

if (arg3 != 0x111)
    return 0

uint32_t edx_2 = zx.d(arg4)

if (edx_2 == 1)
    sub_6a4a60(arg1, arg1 + 5)
else if (edx_2 != 2)
    return 1

EndDialog(arg2, 0)
return 1
