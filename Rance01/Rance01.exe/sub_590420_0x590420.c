// 函数: sub_590420
// 地址: 0x590420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = arg1[3]
*arg1 = &graphengine::CTexture::`vftable'{for `ITexture'}

if (eax != 0)
    (*(*eax + 8))(eax)
    arg1[3] = 0

int32_t* ecx_1 = arg1[4]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    arg1[4] = 0

__builtin_memset(&arg1[5], 0, 0x15)
arg1[0xb] = 0

if ((arg2 & 1) != 0)
    struct ITexture::graphengine::CTexture::VTable** var_c_2 = arg1
    sub_6b4d5b()

return arg1
