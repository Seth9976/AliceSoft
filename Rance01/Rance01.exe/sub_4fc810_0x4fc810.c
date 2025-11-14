// 函数: sub_4fc810
// 地址: 0x4fc810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_717628
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_1c = arg1 + 4
EnterCriticalSection(*(arg1 + 4))
char var_20 = 1
int32_t var_4 = 0
void* var_18
sub_4fd4d0(arg1 + 0x18, &var_18, arg2)
int32_t result = LeaveCriticalSection(*(arg1 + 4))
fsbase->NtTib.ExceptionList = ExceptionList
return result
