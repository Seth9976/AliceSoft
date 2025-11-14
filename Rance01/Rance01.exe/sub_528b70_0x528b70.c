// 函数: sub_528b70
// 地址: 0x528b70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result

if (arg1 s< 0)
    result.b = 0
else
    void* ecx_1 = data_797d4c
    
    if (arg1 s>= (*(ecx_1 + 0x44) - *(ecx_1 + 0x40)) s>> 2)
        result.b = 0
    else
        result = *(*(ecx_1 + 0x40) + (arg1 << 2))
        
        if (result == 0)
            result.b = 0
        else if (result != 0xfffffff0)
            sub_4b01c0(result + 0x1c4, &var_2c, arg2)
            int32_t var_4 = 0
            int32_t* eax_6 = var_2c
            int32_t var_18
            
            if (var_18 u< 0x10)
                eax_6 = &var_2c
            
            (*(*arg3 + 4))(eax_6)
            
            if (var_18 u>= 0x10)
                int32_t* var_40_2 = var_2c
                sub_6b4d5b()
            
            result.b = 1
        else
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
