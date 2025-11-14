// 函数: sub_5372d0
// 地址: 0x5372d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719d18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t var_30 = data_78c474 ^ &var_2c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t var_4 = 0
void* result

if (sub_410070(arg1, &var_2c).b != 0)
    result = *arg1
    
    if (result + 4 u> arg1[1])
        goto label_537328
    
    *arg2 = ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))) << 8
        | zx.d(*result)
    *arg1 += 4
    
    if (var_18 u>= 0x10)
        int32_t var_34_2 = var_2c.d
        sub_6b4d5b()
    
    result.b = 1
else
label_537328:
    
    if (var_18 u>= 0x10)
        int32_t var_34_1 = var_2c.d
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
