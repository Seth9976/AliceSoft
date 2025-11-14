// 函数: sub_624480
// 地址: 0x624480
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int32_t eax_13 = (*(**(arg1 + 4) + 0x18))((*(**(arg1 + 4) + 0x30))(
    (*(**(arg1 + 4) + 0x2c))(data_78c474 ^ &__saved_edi) - 1 - arg3 - 1))
int32_t* result

if ((***(arg1 + 8))(eax_13) != 0)
    int32_t var_4 = 0
    sub_401ef0(arg2, sub_53d900())
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_3c_3 = var_2c
        sub_6b4d5b()
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
