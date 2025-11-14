// 函数: sub_58e280
// 地址: 0x58e280
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &graphengine::CRenderTexture::`vftable'{for `IRenderTexture'}
arg1[1] = 1
arg1[2] = arg2
int32_t* eax = operator new(0x20)

if (eax == 0)
    eax = nullptr
else
    *eax = arg2
    eax[1].b = 0

arg1[3] = eax
__builtin_memset(&arg1[4], 0, 0x2e)
arg1[0x10] = 0
return arg1
