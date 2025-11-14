// 函数: sub_5348c0
// 地址: 0x5348c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg1 u>= (*(arg3 + 0xc) - *(arg3 + 8)) s>> 2)
    result = 0xffffffff
else
    int32_t* ecx = *(*(arg3 + 8) + (arg1 << 2))
    
    if (ecx != 0 && ecx[1] != 0)
        char* ebx_1 = *ecx
        
        if (ebx_1 == 0)
            result = 0xffffffff
        else if (*ebx_1 != 0)
            int32_t ecx_2 = *(arg2 + 0x24) - *(arg2 + 0x20)
            sub_402be0(&var_2c, ebx_1)
            int32_t var_4 = 0
            sub_405150(&var_2c, arg2 + 0x20)
            int32_t var_18
            
            if (var_18 u>= 0x10)
                int32_t var_40_2 = var_2c
                sub_6b4d5b()
            
            result = ecx_2 s/ 0x1c
        else
            result = 0x7fffffff
    else
        result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
