// 函数: sub_566db0
// 地址: 0x566db0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71eae8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t eax_4 = data_78c474 ^ &var_30
fsbase->NtTib.ExceptionList = &ExceptionList
var_30 = 0
int32_t var_2c
sub_566ea0(arg2, &var_2c)
int32_t var_4 = 0
int32_t var_1c
int32_t var_18

if (var_1c == 0)
    int32_t eax_6 = (*(*(arg2 + 0x644) + 4))(eax_4)
    int32_t var_38_2 = eax_6 s% 0x64
    int32_t var_3c_2 = eax_6 s/ 0x64
    sub_4104a0("%d.%02d")
    
    if (var_18 u>= 0x10)
        int32_t var_38_3 = var_2c
        sub_6b4d5b()
else
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    sub_401180(arg1, 0xffffffff, &var_2c, 0)
    
    if (var_18 u>= 0x10)
        int32_t var_38_1 = var_2c
        sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return arg1
