// 函数: sub_42cb80
// 地址: 0x42cb80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7207e9
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
sub_401270(&var_2c, 4, "Data")
int32_t var_4_1 = 1
sub_5870d0(arg1)
sub_402000(arg1, &var_2c, 0, 0xffffffff)
var_4_1.b = 0

if (var_18 u>= 0x10)
    int32_t var_4c_1 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_401270(&var_2c, 4, "Flat")
int32_t var_4_2 = 2
sub_5870d0(arg1)
sub_402000(arg1, &var_2c, 0, 0xffffffff)

if (var_18_1 u>= 0x10)
    int32_t var_4c_2 = var_2c.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return arg1
