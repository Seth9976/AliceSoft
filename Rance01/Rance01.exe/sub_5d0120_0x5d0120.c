// 函数: sub_5d0120
// 地址: 0x5d0120
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7165b3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_a4
int32_t eax_2 = data_78c474 ^ &var_a4
int32_t __saved_edi
int32_t var_b4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_6 = sub_5d0560(arg2, arg1)
void* result

if (eax_6 == *(arg2 + 4))
label_5d018a:
    float var_94_1 = fconvert.s(float.t(0))
    struct commonsystemdata::CProperty::VTable* const var_a0 =
        &commonsystemdata::CProperty::`vftable'
    int32_t var_9c_1 = 0
    int32_t var_98_1 = 0
    int32_t var_7c_1 = 0xf
    int32_t var_80_1 = 0
    char var_90_1 = 0
    char var_74_1 = 0
    int32_t var_c_1 = 0
    void var_70
    sub_5d05f0(&var_70, &var_a0)
    void* var_b8_2 = arg2
    var_c_1.b = 1
    sub_5d0a40(arg2, &var_a4, eax_6, sub_5d0f20(&var_70))
    void* edi_1 = var_a4
    sub_5d0370(&var_70)
    
    if (var_7c_1 u>= 0x10)
        int32_t var_b8_4 = var_90_1.d
        sub_6b4d5b()
    
    result = edi_1 + 0x28
else
    if (sub_405dd0(&eax_6[3], arg1) != 0)
        goto label_5d018a
    
    result = &eax_6[0xa]

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_a4)
return result
