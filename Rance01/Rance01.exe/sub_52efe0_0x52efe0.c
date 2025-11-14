// 函数: sub_52efe0
// 地址: 0x52efe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723a98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[0xc] = arg3
char* result = *arg2

if (&result[4] u> arg2[1])
    result.b = 0
else
    *arg1 = ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
    *arg2 += 4
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_4 = 0
    
    if (sub_410070(arg2, &var_2c).b != 0)
        sub_401180(&arg1[1], 0xffffffff, &var_2c, 0)
        
        if (sub_5546f0(arg2, &var_30).b == 0)
            goto label_52f06b
        
        arg1[0xd] = var_30
        
        if (sub_5546f0(arg2, &arg1[8]) != 0)
            if (sub_5546f0(arg2, &arg1[9]) == 0)
                goto label_52f0bd
            
            if (sub_5546f0(arg2, &arg1[0xa]) == 0)
                goto label_52f0bd
            
            if (sub_5546f0(arg2, &arg1[0xb]) == 0)
                goto label_52f0bd
            
            if (sub_5546f0(arg2, &arg1[0xe]) == 0)
                goto label_52f0bd
            
            char* ecx_10 = &var_2c
            
            if (sub_55c9c0(arg2, &arg1[0xf], arg1[0xb]) == 0)
                sub_401110(ecx_10)
                result.b = 0
            else
                sub_401110(ecx_10)
                result.b = 1
        else
        label_52f0bd:
            sub_401110(&var_2c)
            result.b = 0
    else
    label_52f06b:
        
        if (var_18_1 u< 0x10)
            result.b = 0
        else
            int32_t var_40_2 = var_2c.d
            sub_6b4d5b()
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
