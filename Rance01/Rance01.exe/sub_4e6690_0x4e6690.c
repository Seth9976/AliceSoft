// 函数: sub_4e6690
// 地址: 0x4e6690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720dd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
int32_t var_4 = 0
int32_t eax_5 = arg2[1]
int32_t result
void* const var_64_1
void* edi_1

if (eax_5 == 0)
    var_64_1 = &data_755904
label_4e66fc:
    edi_1 = 4
label_4e6705:
    sub_401270(&var_48, edi_1, var_64_1)
    char* eax_8 = var_48.d
    
    if (var_34 u< 0x10)
        eax_8 = &var_48
    
    int32_t ebx_1 = *arg2
    char* var_64_2 = eax_8
    var_4c = fconvert.s(fconvert.t(arg2[3]))
    double var_6c_1 = fconvert.d(fconvert.t(var_4c))
    int32_t var_70_1 = ebx_1
    char* eax_9 = sub_4104a0("\t\t{ %d, %f, %s }")
    var_4.b = 1
    int32_t ecx_1 = *(eax_9 + 0x14)
    int32_t esi_2 = *(eax_9 + 0x10)
    char* ebx_2
    
    if (ecx_1 u< 0x10)
        ebx_2 = eax_9
    else
        ebx_2 = *eax_9
    
    if (ecx_1 u>= 0x10)
        eax_9 = *eax_9
    
    var_6c_1:4.d = &ebx_2[esi_2]
    var_6c_1.d = eax_9
    sub_4102d0(arg1 + 4, *(arg1 + 8), var_6c_1, var_4c)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_2c
        int32_t var_64_4 = var_2c
        sub_6b4d5b()
    
    if (var_34 u>= 0x10)
        int32_t var_64_5 = var_48.d
        sub_6b4d5b()
    
    result.b = 1
else
    if (eax_5 == 1)
        var_64_1 = &data_75590c
        goto label_4e66fc
    
    if (eax_5 == 2)
        var_64_1 = &data_755914
        edi_1 = 8
        goto label_4e6705
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
