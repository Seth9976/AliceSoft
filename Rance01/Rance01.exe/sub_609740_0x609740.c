// 函数: sub_609740
// 地址: 0x609740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7134fa
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg2[1]
int32_t eax_3

if (arg1 u< ecx)
    eax_3 = *arg2

int32_t* result

if (arg1 u>= ecx || eax_3 u> arg1)
    if (ecx == arg2[2])
        sub_609b50(arg2)
    
    result = arg2[1]
    int32_t var_4_1 = 1
    
    if (result != 0)
        result = sub_60a880(arg1, result)
else
    if (ecx == arg2[2])
        sub_609b50(arg2)
    
    result = arg2[1]
    int32_t var_4 = 0
    
    if (result != 0)
        result = sub_60a880((arg1 - eax_3) s/ 0x7c * 0x7c + *arg2, result)

arg2[1] += 0x7c
fsbase->NtTib.ExceptionList = ExceptionList
return result
