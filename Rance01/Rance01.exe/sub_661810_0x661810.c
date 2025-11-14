// 函数: sub_661810
// 地址: 0x661810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721098
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, nullptr, 0x72d59b)
int32_t var_4 = 0
char* result = *arg4

if (&result[4] u> arg4[1])
    if (var_18 u>= 0x10)
        int32_t var_70_4 = var_2c.d
        sub_6b4d5b()
    
    result.b = 0
else
    uint32_t ecx_6 =
        ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
    *arg4 = &result[4]
    
    if (sub_40ff90(arg4, &var_2c, ecx_6).b == 0)
        goto label_661920
    
    sub_401180(arg1 + 0xc, 0xffffffff, &var_2c, 0)
    *(arg1 + 8) = 4
    var_58 = 0
    int32_t var_54_1 = 0
    int32_t var_50_1 = 0
    int32_t var_48 = 0
    int32_t var_44_1 = 0
    int32_t var_40_1 = 0
    var_4.b = 2
    
    if (sub_661b00(arg4, &var_58) != 0)
        char eax_9 = sub_662000(arg4, &var_48, arg2)
        char eax_10
        
        if (eax_9 != 0)
            eax_10 = sub_661a00(&var_48, &var_58)
        
        if (eax_9 == 0 || eax_10 == 0)
            sub_4add00(&var_48)
            var_4.b = 0
            sub_662e20(&var_58)
            sub_401110(&var_2c)
            result.b = 0
        else
            sub_669360(&var_48, sub_6691e0(arg1 + 0x4c, &var_58), arg1 + 0x5c)
            sub_4add00(&var_48)
            var_4.b = 0
            sub_662e20(&var_58)
            sub_401110(&var_2c)
            result.b = 1
    else
        sub_4add00(&var_48)
        var_4.b = 0
        sub_662e20(&var_58)
    label_661920:
        
        if (var_18 u< 0x10)
            result.b = 0
        else
            int32_t var_70_3 = var_2c.d
            sub_6b4d5b()
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return result
