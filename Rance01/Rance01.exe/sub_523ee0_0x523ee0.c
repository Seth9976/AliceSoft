// 函数: sub_523ee0
// 地址: 0x523ee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ae18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg1 s< 0)
    result.b = 0
else
    void* edx_1 = data_797d4c
    
    if (arg1 s>= (*(edx_1 + 0x44) - *(edx_1 + 0x40)) s>> 2)
        result.b = 0
    else
        result = *(*(edx_1 + 0x40) + (arg1 << 2))
        
        if (result == 0 || arg2 s< 0)
            result.b = 0
        else
            int32_t edx_3 = *(result + 0x10)
            
            if (arg2 s>= (*(result + 0x14) - edx_3) s>> 2)
                result.b = 0
            else
                void* ebp_1 = *(edx_3 + (arg2 << 2))
                
                if (ebp_1 != 0)
                    int32_t __saved_edi
                    int128_t* eax_8 = (**arg3)(data_78c474 ^ &__saved_edi)
                    char* ecx_1 = eax_8
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    var_2c = 0
                    char i
                    
                    do
                        i = *ecx_1
                        ecx_1 = &ecx_1[1]
                    while (i != 0)
                    sub_401270(&var_2c, ecx_1 - &ecx_1[1], eax_8)
                    int32_t var_4 = 0
                    char ebx_1 = sub_4c54c0(ebp_1, &var_2c).b
                    
                    if (var_18_1 u>= 0x10)
                        int32_t var_44_3 = var_2c.d
                        sub_6b4d5b()
                    
                    result.b = ebx_1
                else
                    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
