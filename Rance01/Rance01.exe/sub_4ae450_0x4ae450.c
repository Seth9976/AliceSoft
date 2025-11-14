// 函数: sub_4ae450
// 地址: 0x4ae450
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b448
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 2
sub_4ae7e0(arg1)
int32_t* var_14 = &arg1[9]
var_4.b = 3
int32_t* eax_3 = arg1[0xa]
void var_10
sub_4aef70(&arg1[9], &var_10, *eax_3, eax_3)
int32_t var_28_1 = arg1[0xa]
sub_6b4d5b()

if (arg1[7] u>= 0x10)
    int32_t var_28_2 = arg1[2]
    sub_6b4d5b()

int32_t result = 0
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
CRITICAL_SECTION* lpCriticalSection = *arg1

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
