// 函数: sub_565580
// 地址: 0x565580
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721e70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
int32_t var_4 = 0
sub_401180(&var_48, 0xffffffff, &data_79341c, 0)
sub_587150(&var_48)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 0xe, "AliceStart.ini")
var_4.b = 1
sub_5870d0(&var_48)
sub_402000(&var_48, &var_2c, 0, 0xffffffff)
var_4.b = 0

if (var_18 u>= 0x10)
    int32_t var_64_1 = var_2c.d
    sub_6b4d5b()

char result

if (sub_633e40(arg1 + 0x14, &var_48) != 0)
    if (var_34 u>= 0x10)
        int32_t var_64_4 = var_48.d
        sub_6b4d5b()
    
    result = 1
else
    if (var_34 u>= 0x10)
        int32_t var_64_3 = var_48.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
