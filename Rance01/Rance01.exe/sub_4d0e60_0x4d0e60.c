// 函数: sub_4d0e60
// 地址: 0x4d0e60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711008
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10 = &arg1[1]
EnterCriticalSection(arg1[1])
char var_14 = 1
int32_t var_4 = 0
*arg1 -= 1
int32_t result = *arg1

if (result != 0)
    LeaveCriticalSection(arg1[1])
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

char var_14_1 = 0
LeaveCriticalSection(arg1[1])
sub_4d0d10(arg1)
int32_t* var_24_3 = arg1
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return 0
