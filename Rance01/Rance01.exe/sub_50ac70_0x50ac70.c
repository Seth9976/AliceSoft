// 函数: sub_50ac70
// 地址: 0x50ac70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_723c98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_1c = arg1 + 0x68
EnterCriticalSection(*(arg1 + 0x68))
char var_20 = 1
int32_t var_c_1 = 0
sub_50d390(arg1 + 0x6c)
int32_t result = LeaveCriticalSection(*(arg1 + 0x68))
fsbase->NtTib.ExceptionList = ExceptionList
return result
