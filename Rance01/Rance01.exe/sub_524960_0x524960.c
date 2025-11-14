// 函数: sub_524960
// 地址: 0x524960
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg1 s< 0)
    result = 0xffffffff
else
    void* edx_1 = data_797d4c
    
    if (arg1 s>= (*(edx_1 + 0x44) - *(edx_1 + 0x40)) s>> 2)
        result = 0xffffffff
    else
        void* eax_6 = *(*(edx_1 + 0x40) + (arg1 << 2))
        
        if (eax_6 == 0 || arg2 s< 0)
            result = 0xffffffff
        else
            int32_t edx_3 = *(eax_6 + 0x10)
            
            if (arg2 s>= (*(eax_6 + 0x14) - edx_3) s>> 2)
                result = 0xffffffff
            else
                void* ebp_1 = *(edx_3 + (arg2 << 2))
                
                if (ebp_1 != 0)
                    int32_t __saved_edi
                    int128_t* eax_11 = (**arg3)(data_78c474 ^ &__saved_edi)
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    var_2c = 0
                    char* ecx_2 = eax_11
                    char i
                    
                    do
                        i = *ecx_2
                        ecx_2 = &ecx_2[1]
                    while (i != 0)
                    sub_401270(&var_2c, ecx_2 - (eax_11 + 1), eax_11)
                    int32_t var_4 = 0
                    void* eax_12 = *(ebp_1 + 0x15c)
                    int32_t result_1
                    
                    if (eax_12 != 0)
                        void* eax_13 = *(eax_12 + 8)
                        int32_t result_2
                        
                        if (eax_13 != 0)
                            result_2 = sub_4d1b30(eax_13, &var_2c)
                        else
                            result_2 = 0xffffffff
                        
                        result_1 = result_2
                    else
                        result_1 = 0xffffffff
                    
                    if (var_18_1 u>= 0x10)
                        int32_t var_40_3 = var_2c.d
                        sub_6b4d5b()
                    
                    result = result_1
                else
                    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
