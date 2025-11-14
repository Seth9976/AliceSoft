// 函数: sub_513fa0
// 地址: 0x513fa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_717348
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_38
int32_t eax_2 = data_78c474 ^ &var_38
int32_t __saved_esi
int32_t var_48 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = sub_429b30(arg1, arg2)
char eax_8

if (esi != *(arg1 + 4))
    eax_8 = sub_405dd0(&esi[3], arg2)

if (esi == *(arg1 + 4) || eax_8 != 0)
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    char var_34 = 0
    sub_401180(&var_34, 0xffffffff, arg2, 0)
    int32_t var_18_1 = 0
    char* var_4c_1 = &var_34
    int32_t var_4 = 0
    sub_514070(arg1, &var_38, esi, sub_55b9a0(arg1))
    esi = var_38
    
    if (var_20_1 u>= 0x10)
        int32_t var_4c_3 = var_34.d
        sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return &esi[0xa]
