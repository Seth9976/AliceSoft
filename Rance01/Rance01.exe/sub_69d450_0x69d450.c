// 函数: sub_69d450
// 地址: 0x69d450
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ae18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != 0)
    int32_t __saved_edi
    int128_t* eax_6 = (**arg2)(data_78c474 ^ &__saved_edi)
    char* ecx_1 = eax_6
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    sub_401270(&var_2c, ecx_1 - &ecx_1[1], eax_6)
    int32_t var_4 = 0
    result = sub_418bd0(data_797ddc + 0xa8, arg1)
    
    if (result != 0)
        result = sub_4146d0(result)
        struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
        
        if (result_1 != 0)
            char* ecx_4 = var_2c.d
            
            if (var_18_1 u< 0x10)
                ecx_4 = &var_2c
            
            int32_t esi_3 = result_1[0x10]
            int32_t eax_10 = esi_3
            
            if (esi_3 u>= var_1c_1)
                eax_10 = var_1c_1
            
            int32_t* edx_2
            
            if (result_1[0x11] u< 0x10)
                edx_2 = &result_1[0xc]
            else
                edx_2 = result_1[0xc]
            
            if (sub_402320(eax_10, edx_2, ecx_4, eax_10) != 0 || esi_3 u< var_1c_1)
                result = sub_401180(&result_1[0xc], 0xffffffff, &var_2c, 0)
                result_1[0x19].b = 1
            else
                result.b = esi_3 != var_1c_1
                
                if (result != 0)
                    result = sub_401180(&result_1[0xc], 0xffffffff, &var_2c, 0)
                    result_1[0x19].b = 1
    
    if (var_18_1 u>= 0x10)
        int32_t var_44_4 = var_2c.d
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
