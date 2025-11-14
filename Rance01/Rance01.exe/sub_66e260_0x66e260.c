// 函数: sub_66e260
// 地址: 0x66e260
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_722e80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 == 0)
    result = 0
else
    int32_t __saved_edi
    int128_t* esi_1 = (**arg2)(data_78c474 ^ &__saved_edi)
    char* ecx_1 = esi_1
    int32_t var_24_1 = 0xf
    int32_t var_28_1 = 0
    char var_38 = 0
    int128_t* eax_6
    
    do
        eax_6.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_6.b != 0)
    sub_401270(&var_38, ecx_1 - &ecx_1[1], esi_1)
    int32_t var_c_1 = 0
    var_4c = nullptr
    int32_t var_48_1 = 0
    int32_t var_44_1 = 0
    var_c_1.b = 1
    
    if (sub_66b050(&var_4c, arg1 + 8, &var_38) == 0)
        int32_t* esi_6 = var_4c
        
        if (esi_6 != 0)
            sub_405780(esi_6, var_48_1)
            int32_t* var_60_5 = esi_6
            sub_6b4d5b()
        
        if (var_24_1 u>= 0x10)
            int32_t var_60_6 = var_38.d
            sub_6b4d5b()
        
        result = 0
    else
        int32_t* edi_2 = var_4c
        
        if (edi_2 != 0)
            int32_t* ebx_1 = var_4c
            sub_405780(ebx_1, var_48_1)
            int32_t* var_60_3 = ebx_1
            sub_6b4d5b()
        
        if (var_24_1 u>= 0x10)
            int32_t var_60_4 = var_38.d
            sub_6b4d5b()
        
        result = (var_48_1 - edi_2) s/ 0x1c

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
