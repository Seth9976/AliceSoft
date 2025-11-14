// 函数: sub_61e810
// 地址: 0x61e810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = GetWindowLongA(arg1, 0xffffffeb)

if (arg2 == 0x10)
    return (*(*eax + 8))(arg1, arg3, arg4)

if (arg2 == 0x110)
    SetWindowLongA(arg1, 0xffffffeb, arg4)
    return (**arg4)(arg1, arg3, arg4)

if (arg2 == 0x111)
    return (*(*eax + 4))(arg1, arg3, arg4)

return 0
