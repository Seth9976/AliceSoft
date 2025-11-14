// 函数: sub_6924b0
// 地址: 0x6924b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720dd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = *(arg1 + 0x50)

if (esi != 0xffffffff)
    int32_t eax_5 = sub_695c40(arg1 + 0x60)
    var_4c = eax_5
    int32_t* ecx_1 = &var_4c
    
    if (eax_5 s>= esi)
        ecx_1 = arg1 + 0x50
    
    void* eax_6 = &var_4c
    
    if (esi s>= eax_5)
        eax_6 = arg1 + 0x50
    
    int32_t var_64_1 = *eax_6
    int32_t var_68_1 = *ecx_1
    int32_t var_48
    sub_691000(arg1, &var_48)
    int32_t var_4 = 0
    var_4.b = 1
    int32_t var_2c
    sub_401ef0(&var_48, sub_692320(&var_2c, &var_48))
    var_4.b = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_64_3 = var_2c
        sub_6b4d5b()
    
    result = sub_4131f0(&var_48)
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_64_5 = var_48
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
