// 函数: sub_4e5070
// 地址: 0x4e5070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71fff0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
int32_t var_4 = 0
int32_t eax_6 = *(arg2 + 0x24)
int32_t result
void* const var_60_1
void* edi_1

if (eax_6 == 0)
    var_60_1 = &data_755890
    edi_1 = 4
label_4e50ea:
    sub_401270(&var_48, edi_1, var_60_1)
    char* eax_8 = var_48.d
    
    if (var_34 u< 0x10)
        eax_8 = &var_48
    
    char* var_60_2 = eax_8
    char* eax_9 = sub_4104a0(0x7558a0)
    var_4.b = 1
    int32_t ecx_1 = *(eax_9 + 0x14)
    int32_t esi_2 = *(eax_9 + 0x10)
    char* edi_2
    
    if (ecx_1 u< 0x10)
        edi_2 = eax_9
    else
        edi_2 = *eax_9
    
    if (ecx_1 u>= 0x10)
        eax_9 = *eax_9
    
    int32_t var_60_3 = var_4c
    sub_4102d0(arg1 + 4, *(arg1 + 8), eax_9, &edi_2[esi_2])
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_2c
        int32_t var_60_4 = var_2c
        sub_6b4d5b()
    
    if (var_34 u>= 0x10)
        int32_t var_60_5 = var_48.d
        sub_6b4d5b()
    
    result.b = 1
else
    if (eax_6 == 1)
        var_60_1 = &data_755898
        edi_1 = 6
        goto label_4e50ea
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
