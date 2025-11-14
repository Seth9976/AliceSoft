// 函数: sub_632880
// 地址: 0x632880
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721351
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_34 = 0
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
char* var_30 = arg1
*arg1 = 0
int32_t var_4 = 0
var_34 = 1
sub_401180(arg1, 0xffffffff, &data_79341c, 0)
sub_587150(arg1)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 2, 0x7339c8)
int32_t var_4_1 = 1
sub_5870d0(arg1)
sub_402000(arg1, &var_2c, 0, 0xffffffff)

if (var_18 u>= 0x10)
    int32_t var_4c_1 = var_2c.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return arg1
