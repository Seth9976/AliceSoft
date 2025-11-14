// 函数: sub_5f46b0
// 地址: 0x5f46b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71dc93
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_100
int32_t eax_2 = data_78c474 ^ &var_100
int32_t __saved_edi
int32_t var_114 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float var_f8 = fconvert.s(fconvert.t(arg3))
float var_fc = fconvert.s(fconvert.t(arg4))
float var_f0 = fconvert.s(fconvert.t(arg5))
var_100 = fconvert.s(fconvert.t(arg6))
int32_t var_4 = 0
float var_e8[0x1b]
sub_5ec210(
    sub_5eb4f0(arg1, &var_e8, fconvert.s(fconvert.t(var_f8)), fconvert.s(fconvert.t(var_f0)), arg7, 
        arg8), 
    arg2 + 0x64)
int32_t var_4_1 = 0xffffffff
sub_4329b0(&var_e8)
int32_t var_4_2 = 1
float var_7c[0x1b]
sub_5ec210(
    sub_5eb4f0(arg1, &var_7c, fconvert.s(fconvert.t(var_fc)), fconvert.s(fconvert.t(var_100)), 
        arg7, arg8), 
    arg2 + 0x74)
int32_t result = sub_4329b0(&var_7c)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_100)
return result
