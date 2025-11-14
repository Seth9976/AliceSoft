// 函数: sub_432d30
// 地址: 0x432d30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b478
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_84
int32_t eax_2 = data_78c474 ^ &var_84
int32_t __saved_edi
int32_t var_90 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_84 = fconvert.s(fconvert.t(arg4))
int32_t var_4 = 0
float var_7c[0x1b]
sub_5ec210(
    sub_5eb4f0(arg1, &var_7c, fconvert.s(fconvert.t(var_84)), 
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg5)))), arg6, arg2), 
    arg3 + 0x148)
int32_t result = sub_4329b0(&var_7c)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_84)
return result
