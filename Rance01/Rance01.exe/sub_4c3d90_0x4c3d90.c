// 函数: sub_4c3d90
// 地址: 0x4c3d90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_723c98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_1c = &arg1[1]
EnterCriticalSection(arg1[1])
char var_20 = 1
int32_t var_c_1 = 0
*arg1 -= 1
int32_t result = *arg1

if (result != 0)
    LeaveCriticalSection(arg1[1])
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

char var_20_1 = 0
LeaveCriticalSection(arg1[1])
sub_4c3bd0(arg1)
int32_t* var_30_3 = arg1
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return 0
