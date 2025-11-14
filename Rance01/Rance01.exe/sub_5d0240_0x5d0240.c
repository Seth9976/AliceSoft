// 函数: sub_5d0240
// 地址: 0x5d0240
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_716563
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_98
int32_t eax_2 = data_78c474 ^ &var_98
int32_t __saved_edi
int32_t var_a8 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_6 = sub_5d0560(arg2, arg1)
void* result

if (eax_6 == *(arg2 + 4))
label_5d02a8:
    float var_88_1 = fconvert.s(float.t(0))
    struct commonsystemdata::CProperty::VTable* const var_94 =
        &commonsystemdata::CProperty::`vftable'
    int32_t var_90_1 = 0
    int32_t var_8c_1 = 0
    int32_t var_70_1 = 0xf
    int32_t var_74_1 = 0
    char var_84_1 = 0
    char var_68_1 = 0
    int32_t var_4 = 0
    void var_64
    sub_5d10c0(&var_94, &var_64, arg1)
    void* var_ac_2 = &var_64
    var_4.b = 1
    sub_5d0a40(arg2, &var_98, eax_6, sub_5d0ff0(arg2))
    void* edi_2 = var_98
    sub_5d0370(&var_64)
    
    if (var_70_1 u>= 0x10)
        int32_t var_ac_4 = var_84_1.d
        sub_6b4d5b()
    
    result = edi_2 + 0x28
else
    if (sub_405dd0(&eax_6[3], arg1) != 0)
        goto label_5d02a8
    
    result = &eax_6[0xa]

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_98)
return result
