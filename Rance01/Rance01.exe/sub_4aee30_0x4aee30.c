// 函数: sub_4aee30
// 地址: 0x4aee30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_717d88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_40
int32_t eax_2 = data_78c474 ^ &var_40
int32_t __saved_esi
int32_t var_50 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = sub_4af030(arg1, arg2)
char eax_8

if (esi != *(arg1 + 4))
    eax_8 = sub_405dd0(&esi[3], arg2)

if (esi == *(arg1 + 4) || eax_8 != 0)
    int32_t var_28_1 = 0xf
    int32_t var_2c_1 = 0
    char var_3c = 0
    sub_401180(&var_3c, 0xffffffff, arg2, 0)
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t var_4 = 0
    sub_4af470(arg1, &var_40, esi, sub_4af980(arg1, &var_3c))
    esi = var_40
    
    if (var_28_1 u>= 0x10)
        int32_t var_54_3 = var_3c.d
        sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_40)
return &esi[0xa]
