// 函数: sub_587380
// 地址: 0x587380
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &graphengine::CDepthSurface::`vftable'{for `IDepthSurface'}
sub_5875a0(arg1)
int32_t* eax = arg1[3]

if (eax != 0)
    (*(*eax + 8))(eax)
    arg1[3] = 0

arg1[6] = 0
arg1[7] = 0
arg1[8] = 0
arg1[5].b = 0
arg1[9] = 0

if ((arg2 & 1) != 0)
    struct IDepthSurface::graphengine::CDepthSurface::VTable** var_c_2 = arg1
    sub_6b4d5b()

return arg1
