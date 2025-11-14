// 函数: sub_588df0
// 地址: 0x588df0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct ITexture::graphengine::CTexture::VTable** result_1 = arg1
struct ITexture::graphengine::CTexture::VTable** result_2 = operator new(0x30)
struct ITexture::graphengine::CTexture::VTable** result

if (result_2 == 0)
    result = nullptr
else
    *result_2 = &graphengine::CTexture::`vftable'{for `ITexture'}
    result_2[1] = 1
    result_2[2] = arg1
    __builtin_memset(&result_2[3], 0, 0x1d)
    result_2[0xb] = 0
    result = result_2

int32_t (__fastcall* const vFunc_0)(void* arg1) = (*result)->vFunc_0
result_1 = result
vFunc_0()
sub_61b5a0(&result_1, &arg1[0x1b])
return result
