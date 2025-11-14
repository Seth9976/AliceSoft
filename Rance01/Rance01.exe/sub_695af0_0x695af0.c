// 函数: sub_695af0
// 地址: 0x695af0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = arg2[4]

if (edx s> arg1)
    result = nullptr
    int32_t esi_1 = 0
    
    if (edx s> 0)
        while (esi_1 s< arg1)
            char* ecx
            
            if (arg2[5] u< 0x10)
                ecx = arg2
            else
                ecx = *arg2
            
            ecx.b = *(ecx + result)
            
            if (ecx.b u< 0x81)
                if (ecx.b u>= 0xe0)
                    result += 1
            else if (ecx.b u<= 0x9f || ecx.b u>= 0xe0)
                result += 1
            
            result += 1
            esi_1 += 1
            
            if (result s>= edx)
                break
    
    if (result != edx)
        int32_t var_4 = 0
        result = sub_401ef0(arg2, sub_401ec0(arg2, &var_2c, 0, result))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_40_2 = var_2c
            result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
