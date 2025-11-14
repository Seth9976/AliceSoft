// 函数: sub_60f5b0
// 地址: 0x60f5b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7217d1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_134
int32_t eax_2 = data_78c474 ^ &var_134
int32_t __saved_edi
int32_t var_148 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_6 = sub_60f7f0(arg2, arg1)
void* result

if (eax_6 == arg2[1])
label_60f61c:
    int32_t var_114_1 = 0xf
    int32_t var_118_1 = 0
    char var_128_1 = 0
    int32_t var_108_1 = 0
    int32_t var_104_1 = 0
    int32_t var_ec_1 = 0xf
    int32_t var_f0_1 = 0
    char var_100_1 = 0
    int32_t var_e0_1 = 0
    int32_t var_dc_1 = 0
    int32_t var_d8_1 = 0
    int32_t var_bc_1 = 0xf
    int32_t var_c0_1 = 0
    char var_d0_1 = 0
    int32_t var_4 = 0
    int32_t var_98_1 = 0xf
    int32_t var_9c_1 = 0
    char var_ac = 0
    sub_401180(&var_ac, 0xffffffff, arg1, 0)
    var_4.b = 1
    void var_12c
    void var_90
    sub_60a880(&var_12c, &var_90)
    void** var_14c_2 = arg2
    var_4.b = 2
    void* var_130
    sub_60fd50(arg2, &var_130, eax_6, sub_610290(&var_ac))
    void* edi_2 = var_130
    sub_607f00(&var_90)
    
    if (var_98_1 u>= 0x10)
        int32_t var_14c_4 = var_ac.d
        sub_6b4d5b()
    
    int32_t var_98_2 = 0xf
    int32_t var_9c_2 = 0
    var_ac = 0
    sub_607f00(&var_12c)
    result = edi_2 + 0x28
else
    if (sub_405dd0(&eax_6[3], arg1) != 0)
        goto label_60f61c
    
    result = &eax_6[0xa]

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_134)
return result
