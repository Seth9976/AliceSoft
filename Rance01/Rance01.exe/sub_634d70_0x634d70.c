// 函数: sub_634d70
// 地址: 0x634d70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712408
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t var_20 = data_78c474 ^ &__saved_ebx
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xffffffff
int32_t var_14 = 0
int32_t var_10 = 0
int32_t* var_24 = arg1
int32_t var_4 = 0
int32_t* ecx

if (sub_601f80(ecx) == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return false

int32_t result = *arg1
int32_t ecx_3 = arg1[1]

if (result != ecx_3)
    arg1[4] = result
    arg1[5] = ecx_3
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

arg1[4] = 0
arg1[5] = 0
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
