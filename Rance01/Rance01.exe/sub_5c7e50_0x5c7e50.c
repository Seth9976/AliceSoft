// 函数: sub_5c7e50
// 地址: 0x5c7e50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719cbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IMemory::common::CIMemory::VTable** eax_3 = operator new(0x20)
struct IMemory::common::CIMemory::VTable** var_10_1 = eax_3
struct IMemory::common::CIMemory::VTable** result = nullptr
int32_t var_4 = 0

if (eax_3 != 0)
    result = sub_631440(eax_3)

int32_t var_4_1 = 0xffffffff

if (sub_5c8180(result, arg1, arg2) != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

(*result)->vFunc_1(eax_2)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
