// 函数: sub_52bd90
// 地址: 0x52bd90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_710f08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = data_797de8
*(arg1 + 0x1c) += 1
bool cond:0 = (eax_3 | data_797dec) != 0
struct win32only::CHighResolutionTimer::VTable* const var_20 =
    &win32only::CHighResolutionTimer::`vftable'
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_28
int32_t result

if (not(cond:0))
    QueryPerformanceFrequency(&var_28)
    data_797de8 = var_28
    data_797dec = result

int32_t var_4 = 0
sub_52bf00(&var_20, arg1 + 0x20)
void* esi_1 = *(arg1 + 0x24)
QueryPerformanceCounter(&var_28)
*(esi_1 - 8) = var_28
*(esi_1 - 4) = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
