// 函数: sub_55b070
// 地址: 0x55b070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71eae8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t var_34 = data_78c474 ^ &var_30
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
void* result

if (sub_410070(arg1, &var_2c).b != 0)
    sub_401180(arg2 + 0x10, 0xffffffff, &var_2c, 0)
    result = *arg1
    
    if (result + 4 u> arg1[1])
        goto label_55b0ca
    
    *(arg2 + 0x2c) =
        ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))) << 8
        | zx.d(*result)
    *arg1 += 4
    
    if (sub_5546f0(arg1, arg2 + 0x30).b != 0)
        char eax_7 = sub_5546f0(arg1, &var_30)
        char eax_10
        
        if (eax_7 != 0)
            eax_10 = sub_55c9c0(arg1, arg2 + 0x34, var_30)
        
        if (eax_7 == 0 || eax_10 == 0)
            sub_401110(&var_2c)
            result.b = 0
        else
            sub_55afc0(arg2)
            sub_401110(&var_2c)
            result.b = 1
    else if (var_18 u< 0x10)
        result.b = 0
    else
        int32_t var_38_3 = var_2c.d
        sub_6b4d5b()
        result.b = 0
else
label_55b0ca:
    
    if (var_18 u< 0x10)
        result.b = 0
    else
        int32_t var_38_1 = var_2c.d
        sub_6b4d5b()
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
