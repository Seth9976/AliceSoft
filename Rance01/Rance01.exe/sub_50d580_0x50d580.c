// 函数: sub_50d580
// 地址: 0x50d580
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7149a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** arg_8
int32_t* ebp = arg_8
void** arg_4
void** ebx = arg_4
void* var_10 = &ebx[1]
EnterCriticalSection(ebx[1])
char var_14 = 1
int32_t var_4 = 0
void** eax_5 = sub_429b30(&ebx[2], ebp)
arg_8 = eax_5
char eax_7

if (eax_5 != ebx[3])
    eax_7 = sub_405dd0(&eax_5[3], ebp)

void*** eax_8

if (eax_5 == ebx[3] || eax_7 != 0)
    arg_4 = ebx[3]
    eax_8 = &arg_4
else
    eax_8 = &arg_8

void** eax_10 = *eax_8
int32_t* result

if (eax_10 != ebx[3])
    int32_t* result_1 = eax_10[0xa]
    EnterCriticalSection(result_1[1])
    *result_1 += 1
    LeaveCriticalSection(result_1[1])
    LeaveCriticalSection(ebx[1])
    result = result_1
else
    LeaveCriticalSection(ebx[1])
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
return result
