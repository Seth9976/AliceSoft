// 函数: sub_5633b0
// 地址: 0x5633b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg1 & 0xfff0

if (eax != 0xf020 && eax != 0xf120)
    return DefWindowProcA(arg3, 0x112, arg1, arg2)

PostMessageA(GetParent(arg3), 0x112, arg1, arg2)
PostMessageA(arg3, 0x7fff, 0, 0)
return 0
