// 函数: sub_588c90
// 地址: 0x588c90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct IIndexBuffer::graphengine::CIndexBuffer::VTable** result_1 = arg1
struct IIndexBuffer::graphengine::CIndexBuffer::VTable** result_2 = operator new(0x20)
struct IIndexBuffer::graphengine::CIndexBuffer::VTable** result

if (result_2 == 0)
    result = nullptr
else
    *result_2 = &graphengine::CIndexBuffer::`vftable'{for `IIndexBuffer'}
    result_2[1] = 1
    result_2[2] = arg1
    result_2[7].b = 0
    result_2[3] = 0
    result_2[4] = 0
    result_2[5].b = 0
    result_2[6] = 0x65
    result = result_2

int32_t (__fastcall* const vFunc_0)(void* arg1) = (*result)->vFunc_0
result_1 = result
vFunc_0()
sub_61b5a0(&result_1, &arg1[0x12])
return result
