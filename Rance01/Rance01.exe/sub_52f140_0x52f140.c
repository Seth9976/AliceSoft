// 函数: sub_52f140
// 地址: 0x52f140
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_38 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[0xc] = arg3
*arg1 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t var_4 = 0
void* result

if (sub_410070(arg2, &var_2c).b != 0)
    sub_401180(&arg1[1], 0xffffffff, &var_2c, 0)
    result = *arg2
    
    if (result + 4 u<= arg2[1])
        arg1[8] = ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))) << 8
            | zx.d(*result)
        *arg2 += 4
        
        if (sub_5546f0(arg2, &arg1[9]).b != 0)
            char eax_8 = sub_5546f0(arg2, &arg1[0xa])
            char eax_9
            
            if (eax_8 != 0)
                eax_9 = sub_5546f0(arg2, &arg1[0xb])
            
            if (eax_8 == 0 || eax_9 == 0)
                sub_401110(&var_2c)
                result.b = 0
            else
                char* ecx_9 = &var_2c
                
                if (sub_55c9c0(arg2, &arg1[0xf], arg1[0xb]) == 0)
                    sub_401110(ecx_9)
                    result.b = 0
                else
                    sub_401110(ecx_9)
                    result.b = 1
        else if (var_18 u< 0x10)
            result.b = 0
        else
            int32_t var_3c_3 = var_2c.d
            sub_6b4d5b()
            result.b = 0
    else if (var_18 u< 0x10)
        result.b = 0
    else
        int32_t var_3c_4 = var_2c.d
        sub_6b4d5b()
        result.b = 0
else
    if (var_18 u>= 0x10)
        int32_t var_3c_1 = var_2c.d
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
