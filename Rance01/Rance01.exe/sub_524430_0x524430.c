// 函数: sub_524430
// 地址: 0x524430
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_38 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg1 s< 0)
    result.b = 0
else
    void* ecx_1 = data_797d4c
    
    if (arg1 s>= (*(ecx_1 + 0x44) - *(ecx_1 + 0x40)) s>> 2)
        result.b = 0
    else
        result = *(*(ecx_1 + 0x40) + (arg1 << 2))
        
        if (result == 0 || arg2 s< 0)
            result.b = 0
        else
            int32_t ecx_3 = *(result + 0x10)
            
            if (arg2 s>= (*(result + 0x14) - ecx_3) s>> 2)
                result.b = 0
            else
                result = *(ecx_3 + (arg2 << 2))
                
                if (result == 0)
                    result.b = 0
                else
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    var_2c = 0
                    int32_t var_4 = 0
                    
                    if (sub_4c5860(result, arg3, &var_2c).b != 0)
                        char* eax_8 = var_2c.d
                        
                        if (var_18_1 u< 0x10)
                            eax_8 = &var_2c
                        
                        (*(*arg4 + 4))(eax_8)
                        
                        if (var_18_1 u>= 0x10)
                            int32_t var_3c_4 = var_2c.d
                            sub_6b4d5b()
                        
                        result.b = 1
                    else
                        if (var_18_1 u>= 0x10)
                            int32_t var_3c_2 = var_2c.d
                            sub_6b4d5b()
                        
                        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
