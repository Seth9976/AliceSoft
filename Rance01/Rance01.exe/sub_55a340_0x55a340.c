// 函数: sub_55a340
// 地址: 0x55a340
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_716d98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_esi
int32_t var_60 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = sub_4d3aa0(arg1, arg2)
char eax_8

if (esi != *(arg1 + 4))
    eax_8 = sub_405dd0(&esi[3], arg2)

if (esi == *(arg1 + 4) || eax_8 != 0)
    int32_t var_4c_1 = 0
    int32_t var_48_1 = 0
    int32_t var_44_1 = 0
    int32_t var_4 = 0
    int32_t var_28_1 = 0xf
    int32_t var_2c_1 = 0
    char var_3c = 0
    sub_401180(&var_3c, 0xffffffff, arg2, 0)
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t var_4c_2 = 0
    int32_t var_48_2 = 0
    int32_t var_44_2 = 0
    var_4.b = 2
    sub_55a870(arg1, &var_50, esi, sub_55ad40(arg1, &var_3c))
    esi = var_50
    
    if (var_20_1 != 0)
        int32_t var_64_3 = var_20_1
        sub_6b4d5b()
    
    int32_t var_20_2 = 0
    int32_t var_1c_2 = 0
    int32_t var_18_2 = 0
    
    if (var_28_1 u>= 0x10)
        int32_t var_64_4 = var_3c.d
        sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return &esi[0xa]
