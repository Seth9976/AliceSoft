// 函数: sub_6730c0
// 地址: 0x6730c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7188a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t var_38 = data_78c474 ^ &var_34
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0xf
int32_t var_24 = 0
var_34 = 0
sub_401180(&var_34, 0xffffffff, arg1, 0)
int32_t eax_5 = arg1[7]
int32_t result_1 = arg1[8]
int32_t var_4 = 0
sub_401180(arg1, 0xffffffff, arg2, 0)
arg1[7] = arg2[7]
arg1[8] = arg2[8]
sub_401180(arg2, 0xffffffff, &var_34, 0)
int32_t result = result_1
arg2[7] = eax_5
arg2[8] = result

if (var_20 u>= 0x10)
    int32_t var_3c_1 = var_34.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
