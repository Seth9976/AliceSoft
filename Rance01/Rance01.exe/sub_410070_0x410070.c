// 函数: sub_410070
// 地址: 0x410070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_30 = arg2
void* result = *arg1

if (result u>= arg1[1])
label_4100c8:
    result.b = 0
else
    while (true)
        char* eax_6 = *arg1
        
        if (*eax_6 == 0)
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            
            if (result != eax_6)
                sub_401270(&var_2c, eax_6 - result, result)
            
            int32_t var_4 = 0
            sub_401ef0(var_30, &var_2c)
            
            if (var_18_1 u>= 0x10)
                int32_t var_44_2 = var_2c.d
                sub_6b4d5b()
            
            *arg1 += 1
            result.b = 1
            break
        
        *arg1 = &eax_6[1]
        
        if (&eax_6[1] u>= arg1[1])
            goto label_4100c8

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
