// 函数: sub_54a840
// 地址: 0x54a840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723a98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[0xac] -= 4
int32_t var_2c
sub_54a770(&var_2c, arg1, *arg1[0xac])
int32_t var_4 = 0
int32_t* result
int32_t edx_1
result, edx_1 = sub_552d50(&arg1[0x77], &var_2c, &var_30)
int32_t var_18

if (result.b != 0)
    *arg1[0xac] = var_30
    arg1[0xac] += 4
    
    if (var_18 u>= 0x10)
        int32_t var_40_3 = var_2c
        sub_6b4d5b()
    
    result.b = 1
else
    int32_t ebx
    ebx.b = sub_53d1c0(result, edx_1, arg1, 0x750850).b
    
    if (var_18 u>= 0x10)
        int32_t var_40_2 = var_2c
        sub_6b4d5b()
    
    result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
