// 函数: sub_4e8ad0
// 地址: 0x4e8ad0
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
int32_t result = *(arg2 + 0x64)

if (result u> 3)
    result.b = 0
else
    void* const var_60_1
    void* edi_1
    
    switch (result)
        case 0
            var_60_1 = &data_755cb4
            edi_1 = 4
        case 1
            var_60_1 = &data_755cbc
            edi_1 = 6
        case 2
            var_60_1 = &data_755cc4
            edi_1 = 8
        case 3
            var_60_1 = &data_755cd0
            edi_1 = 0xe
    
    sub_401270(&var_48, edi_1, var_60_1)
    char* eax_6 = var_48.d
    
    if (var_34 u< 0x10)
        eax_6 = &var_48
    
    char* var_60_2 = eax_6
    char* eax_7 = sub_4104a0(0x755ce0)
    var_4.b = 1
    int32_t ecx_1 = *(eax_7 + 0x14)
    int32_t esi_2 = *(eax_7 + 0x10)
    char* edi_2
    
    if (ecx_1 u< 0x10)
        edi_2 = eax_7
    else
        edi_2 = *eax_7
    
    if (ecx_1 u>= 0x10)
        eax_7 = *eax_7
    
    int32_t var_60_3 = var_4c
    sub_4102d0(arg1 + 4, *(arg1 + 8), eax_7, &edi_2[esi_2])
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_2c
        int32_t var_60_4 = var_2c
        sub_6b4d5b()
    
    if (var_34 u>= 0x10)
        int32_t var_60_5 = var_48.d
        sub_6b4d5b()
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
