// 函数: sub_5914f0
// 地址: 0x5914f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71132b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IVertexBuffer::graphengine::CVertexBuffer::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_1c = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IVertexBuffer::graphengine::CVertexBuffer::VTable** var_10_1 = arg1
*arg1 = &graphengine::CVertexBuffer::`vftable'{for `IVertexBuffer'}
int32_t var_4 = 0
int32_t* eax_3 = arg1[4]

if (eax_3 != 0)
    (*(*eax_3 + 8))(eax_3)
    arg1[4] = 0

int32_t* eax_4 = arg1[3]

if (eax_4 != 0)
    (*(*eax_4 + 8))(eax_4)
    arg1[3] = 0

arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xa] = 0
arg1[0xf].w = 0
int32_t result = arg1[5]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
