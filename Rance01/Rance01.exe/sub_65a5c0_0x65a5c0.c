// 函数: sub_65a5c0
// 地址: 0x65a5c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 == 0x201)
    arg1[0x22].b = 1
    SetCapture(arg2)
    return 0

if (arg3 == 0x202)
    arg1[0x22].b = 0
    *arg1[0x23] = 1
    *arg1[0x24] = 0
    ReleaseCapture()
    return 0

if (arg3 == 0x200)
    return (*(*arg1 + 8))(arg2, arg4, arg5, 0)

if (arg3 == 5)
    sub_6a4b20(zx.d(arg5.w), &arg1[0x18], arg2, arg5 u>> 0x10)
    return 0

if (arg3 == 0xf)
    return (*(*arg1 + 0xc))(arg2, arg4, arg5)

return DefWindowProcA(arg2, arg3, arg4, arg5) __tailcall
