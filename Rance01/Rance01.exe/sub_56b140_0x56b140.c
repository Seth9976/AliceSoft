// 函数: sub_56b140
// 地址: 0x56b140
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a1f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_88
int32_t eax_2 = data_78c474 ^ &var_88
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_88 = nullptr
char* result

if (*(arg2 + 0x3b8) != 0)
    int32_t* eax_8 = (***(arg2 + 0x3b8))(0x74b760)
    
    if (eax_8 == 0)
        goto label_56b190
    
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    char var_64 = 0
    int32_t var_4 = 0
    char var_2c
    var_88 = sub_401800(sub_401270(&var_64, 6, "Manual"), &var_64, &var_2c)
    var_4.b = 1
    int128_t* esi_2 = (**eax_8)(eax_4)
    char* ecx_3 = esi_2
    int32_t var_6c_1 = 0xf
    int32_t var_70_1 = 0
    char var_80 = 0
    int128_t* eax_11
    
    do
        eax_11.b = *ecx_3
        ecx_3 = &ecx_3[1]
    while (eax_11.b != 0)
    var_4.b = 2
    char var_48
    int32_t* var_a4_1 =
        sub_4b3c20(&var_80, sub_401270(&var_80, ecx_3 - &ecx_3[1], esi_2), var_88, &var_48)
    var_4.b = 3
    sub_402c60(arg1, "index.html", nullptr)
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_a0_3 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    
    if (var_6c_1 u>= 0x10)
        int32_t var_a0_4 = var_80.d
        sub_6b4d5b()
    
    int32_t var_6c_2 = 0xf
    int32_t var_70_2 = 0
    var_80 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_a0_5 = var_2c.d
        sub_6b4d5b()
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (var_50_1 u>= 0x10)
        int32_t var_a0_6 = var_64.d
        sub_6b4d5b()
    
    result = arg1
else
label_56b190:
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    result = arg1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_88)
return result
