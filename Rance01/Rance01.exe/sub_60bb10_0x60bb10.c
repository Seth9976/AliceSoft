// 函数: sub_60bb10
// 地址: 0x60bb10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = GetWindowLongA(arg1, 0xffffffeb)

if (arg2 == 0x81)
    int32_t* lParam = arg4
    SetWindowLongA(arg1, 0xffffffeb, *lParam)
    return DefWindowProcA(arg1, 0x81, arg3, lParam)

if (eax != 0)
    if (arg2 == 0xf)
        sub_60bba0(eax, arg1)
        return 0
    
    if (arg2 == 1)
        return 0
    
    if (arg2 == 2)
        return arg2 - 2
    
    if (arg2 == 0x201)
        DestroyWindow(arg1)
        return 0

return DefWindowProcA(arg1, arg2, arg3, arg4)
