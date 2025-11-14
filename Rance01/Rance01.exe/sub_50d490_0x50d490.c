// 函数: sub_50d490
// 地址: 0x50d490
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_717378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** arg_4
int32_t* ebp = arg_4
void* var_10 = arg1 + 4
EnterCriticalSection(*(arg1 + 4))
char var_14 = 1
int32_t var_4 = 0
int32_t eax_4 = *(arg1 + 0xc)
void** eax_6 = sub_429b30(arg1 + 8, ebp)
arg_4 = eax_6
char eax_8

if (eax_6 != *(arg1 + 0xc))
    eax_8 = sub_405dd0(&eax_6[3], ebp)

void*** eax_9

if (eax_6 == *(arg1 + 0xc) || eax_8 != 0)
    void** var_1c = *(arg1 + 0xc)
    eax_9 = &var_1c
else
    eax_9 = &arg_4

if (*eax_9 != eax_4)
    LeaveCriticalSection(*(arg1 + 4))
    int32_t eax_11
    eax_11.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_11

EnterCriticalSection(arg2[1])
*arg2 += 1
LeaveCriticalSection(arg2[1])
*sub_513fa0(arg1 + 8, ebp) = arg2
LeaveCriticalSection(*(arg1 + 4))
int32_t eax_14
eax_14.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_14
