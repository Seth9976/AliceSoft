// 函数: sub_429940
// 地址: 0x429940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723a98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_esi
int32_t eax_4 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
var_30 = arg4
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401180(&var_2c, 0xffffffff, arg1, 0)
int32_t var_4 = 0
void* eax_6 = sub_429780(arg2, arg1)

if (eax_6 != 0)
    sub_401180(&var_2c, 0xffffffff, eax_6 + 8, 0)

int32_t* result = sub_4294e0(arg2, &var_2c)

if (result != 0)
    *arg3 = (*(*result + 0x10))(eax_4)
    result = (*(*result + 0x14))()
    *var_30 = result

if (var_18 u>= 0x10)
    int32_t var_40_2 = var_2c.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
