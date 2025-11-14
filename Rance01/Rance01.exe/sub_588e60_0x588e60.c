// 函数: sub_588e60
// 地址: 0x588e60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct IVertexBuffer::graphengine::CVertexBuffer::VTable** result_1 = arg1
struct IVertexBuffer::graphengine::CVertexBuffer::VTable** result_2 = operator new(0x40)
struct IVertexBuffer::graphengine::CVertexBuffer::VTable** result

if (result_2 == 0)
    result = nullptr
else
    *result_2 = &graphengine::CVertexBuffer::`vftable'{for `IVertexBuffer'}
    result_2[1] = 1
    result_2[2] = arg1
    __builtin_memset(&result_2[3], 0, 0x14)
    __builtin_memset(&result_2[9], 0, 0x1a)
    result = result_2

int32_t (__fastcall* const vFunc_0)(void* arg1) = (*result)->vFunc_0
result_1 = result
vFunc_0()
sub_61b5a0(&result_1, &arg1[9])
return result
