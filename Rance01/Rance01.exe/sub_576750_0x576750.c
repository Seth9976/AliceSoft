// 函数: sub_576750
// 地址: 0x576750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10 = arg1 + 4
EnterCriticalSection(*(arg1 + 4))
char var_14 = 1
int32_t var_4 = 0
void* edi = *(arg1 + 8)
void arg_4
int32_t* eax_4 = sub_576850(edi, *(edi + 4), &arg_4)
int32_t ecx_1 = *(arg1 + 0xc)

if (0x3ffffffe - ecx_1 u< 1)
    sub_6b47bf("list<T> too long")
    noreturn

*(arg1 + 0xc) = ecx_1 + 1
*(edi + 4) = eax_4
*eax_4[1] = eax_4
BOOL result = LeaveCriticalSection(*(arg1 + 4))
HANDLE hEvent = *(arg1 + 0x18)

if (hEvent != 0)
    result = SetEvent(hEvent)

fsbase->NtTib.ExceptionList = ExceptionList
return result
