// 函数: sub_631b70
// 地址: 0x631b70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715e98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_10 = arg3
int32_t var_14 = data_78c474 ^ &var_10
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
char var_30
var_10 = &var_30
int32_t var_20 = 0
int32_t var_1c = 0xf
var_30 = 0
int32_t arg_c
void** eax_5 =
    *sub_631c50(sub_401180(&var_30, 0xffffffff, &arg_c, 0), arg5, &var_10, arg5, arg6, var_30)
arg5 = eax_5
*arg4 = eax_5

if (arg7 u>= 0x10)
    int32_t var_18_1 = arg_c
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return arg4
