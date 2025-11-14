// 函数: sub_613c60
// 地址: 0x613c60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e2b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_esi
int32_t eax_4 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_8 = (*(**(*(arg3 + 0xd0) + 0xc) + 4))(arg2)
int32_t* result

if (eax_8 != 0)
    int32_t eax_12
    int32_t edx_2
    edx_2:eax_12 = sx.q((*(*eax_8 + 0x14))(eax_4))
    int32_t var_38_1 = ((edx_2 & 3) + eax_12) s/ 0xc
    int32_t var_4 = 0
    result = sub_402000(arg1, sub_4104a0("[%d]"), 0, 0xffffffff)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_38_2 = var_2c
        result = sub_6b4d5b()
else
    result = sub_402cb0(arg1, 0x735118, 2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
