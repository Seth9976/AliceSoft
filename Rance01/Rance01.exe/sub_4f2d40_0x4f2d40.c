// 函数: sub_4f2d40
// 地址: 0x4f2d40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723a98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
void* result

if (sub_410070(arg1, &var_2c).b != 0)
    if (sub_402680(0x754d4c, &var_2c).b == 0)
    label_4f2de0:
        
        if (var_18 u< 0x10)
            result.b = 0
        else
            int32_t var_40_3 = var_2c.d
            sub_6b4d5b()
            result.b = 0
    else
        if (sub_5546f0(arg1, &result_1).b == 0)
            goto label_4f2d99
        
        result = result_1
        
        if (result u> 5)
            goto label_4f2de0
        
        *(arg2 + 4) = result
        sub_401110(&var_2c)
        result.b = 1
else
label_4f2d99:
    
    if (var_18 u< 0x10)
        result.b = 0
    else
        int32_t var_40_1 = var_2c.d
        sub_6b4d5b()
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
