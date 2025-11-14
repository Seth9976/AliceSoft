// 函数: sub_4e6e50
// 地址: 0x4e6e50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_7 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71fed0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t var_7c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50 = 0xf
void* var_54 = nullptr
char var_64 = 0
sub_401270(&var_64, 0x11, 0x755aa8)
int32_t var_4 = 0
char* ecx = var_64.d
int128_t* eax_5 = *(arg1 + 8)
char* edi = ecx

if (var_50 u< 0x10)
    edi = &var_64
    ecx = &var_64

var_68 = arg1 + 4
int32_t* var_80 = var_68
sub_4102d0(arg1 + 4, eax_5, ecx, var_54 + edi)
int32_t var_4_1 = 0xffffffff

if (var_50 u>= 0x10)
    int32_t var_80_1 = var_64.d
    sub_6b4d5b()

int32_t eax_7 = *(arg2 + 0x158)
int32_t result

if (eax_7 == 0)
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0
    sub_401270(&var_64, 0xe, 0x755abc)
    int32_t var_4_4 = 1
    int128_t* ecx_4 = var_64.d
    int128_t* esi_3 = ecx_4
    
    if (var_50_1 u< 0x10)
        esi_3 = &var_64
        ecx_4 = &var_64
    
    int32_t* var_80_5 = var_68
    sub_4102d0(var_68, *(arg1 + 8), ecx_4, esi_3 + var_54_1)
    int32_t var_4_5 = 0xffffffff
    
    if (var_50_1 u< 0x10)
        goto label_4e700e
    
    int32_t var_80_6 = var_64.d
label_4e6ff8:
    sub_6b4d5b()
label_4e700e:
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    sub_401270(&var_48, 2, 0x755ae0)
    int32_t var_4_6 = 3
    int128_t* eax_13 = var_48.d
    int128_t* edx_8 = eax_13
    
    if (var_34_1 u< 0x10)
        edx_8 = &var_48
        eax_13 = &var_48
    
    int32_t* var_80_7 = var_68
    sub_4102d0(var_68, *(arg1 + 8), eax_13, edx_8 + var_38_1)
    
    if (var_34_1 u>= 0x10)
        int32_t var_80_8 = var_48.d
        sub_6b4d5b()
    
    result.b = 1
else
    if (eax_7 == 1)
        int32_t var_80_2 = **(arg2 + 0x15c)
        char* eax_10 = sub_4104a0(0x755acc)
        int32_t var_4_2 = 2
        int32_t ecx_2 = *(eax_10 + 0x14)
        int32_t ebx_1 = *(eax_10 + 0x10)
        char* edi_1
        
        if (ecx_2 u< 0x10)
            edi_1 = eax_10
        else
            edi_1 = *eax_10
        
        if (ecx_2 u>= 0x10)
            eax_10 = *eax_10
        
        int32_t* var_80_3 = var_68
        sub_4102d0(arg1 + 4, *(arg1 + 8), eax_10, &edi_1[ebx_1])
        int32_t var_4_3 = 0xffffffff
        int32_t var_18
        
        if (var_18 u< 0x10)
            goto label_4e700e
        
        int32_t var_2c
        int32_t var_80_4 = var_2c
        goto label_4e6ff8
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_68)
return result
