// 函数: sub_526140
// 地址: 0x526140
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_38 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg1

if (result s>= 0)
    void* ecx_1 = data_797d4c
    
    if (result s< (*(ecx_1 + 0x44) - *(ecx_1 + 0x40)) s>> 2)
        result = *(*(ecx_1 + 0x40) + (result << 2))
        
        if (result != 0 && arg2 s>= 0)
            int32_t ecx_3 = *(result + 0x10)
            result = (*(result + 0x14) - ecx_3) s>> 2
            
            if (arg2 s< result)
                result = *(ecx_3 + (arg2 << 2))
                
                if (result != 0)
                    char* eax_7 = sub_4c7760(result, &var_2c)
                    int32_t var_4 = 0
                    
                    if (*(eax_7 + 0x14) u>= 0x10)
                        eax_7 = *eax_7
                    
                    result = (*(*arg3 + 4))(eax_7)
                    int32_t var_18
                    
                    if (var_18 u>= 0x10)
                        int32_t var_3c_2 = var_2c
                        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
