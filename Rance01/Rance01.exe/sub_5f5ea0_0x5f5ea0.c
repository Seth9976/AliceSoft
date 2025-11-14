// 函数: sub_5f5ea0
// 地址: 0x5f5ea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b69b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = data_797da0
int32_t* ecx_1 = *esi

if (ecx_1 != 0)
    (**ecx_1)(1)

*esi = 0
struct partsengine::CPartsList::VTable** eax_4 = operator new(0x3c)
struct partsengine::CPartsList::VTable** var_10_1 = eax_4
int32_t var_4 = 0
struct partsengine::CPartsList::VTable** result

if (eax_4 == 0)
    result = nullptr
else
    result = sub_5f6fc0(eax_4, arg1, arg2, arg3, arg4, arg5, arg6)

*esi = result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
