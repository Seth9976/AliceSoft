// 函数: sub_66d7e0
// 地址: 0x66d7e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (arg2 != 0)
    int32_t edx_1 = **arg3
    result_1 = 0xffffffff
    int128_t* eax_6 = edx_1(eax_4)
    char* ecx_1 = eax_6
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    sub_401270(&var_2c, ecx_1 - &ecx_1[1], eax_6)
    int32_t var_4 = 0
    int32_t* eax_7 = *(arg1 + 8)
    
    if ((*(arg1 + 0xc) - eax_7) s>> 2 s< arg2)
        eax_7.b = 0
    else
        eax_7 = eax_7[arg2 - 1]
        
        if (eax_7 == 0)
            eax_7.b = 0
        else if (eax_7[2] == 4)
            result_1 = sub_668fd0(eax_7, &var_2c)
            eax_7.b = 1
        else
            eax_7.b = 0
    
    int32_t ebx
    ebx.b = eax_7.b == 0
    
    if (var_18_1 u>= 0x10)
        int32_t var_48_3 = var_2c.d
        sub_6b4d5b()
    
    result = ebx.b != 0 ? 0xffffffff : result_1
else
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
