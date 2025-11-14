// 函数: sub_571b70
// 地址: 0x571b70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e7c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[1]
var_34 = *arg1
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
char result

if (sub_410070(&var_34, &var_2c) != 0)
    if (sub_402680(0x74b3d4, &var_2c) != 0)
        char* ecx_2 = var_34
        
        if (&ecx_2[4] u<= ecx)
            uint32_t ecx_3 = zx.d(*ecx_2)
            char eax_16
            
            if ((((zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])) << 8 | ecx_3) == 0
                    && &ecx_2[8] u<= ecx)
                var_34 = &ecx_2[8]
                eax_16 = sub_40ff00(ecx_3, &var_34, arg2)
            
            if ((((zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])) << 8 | ecx_3) != 0
                    || &ecx_2[8] u> ecx || eax_16 == 0)
                sub_401110(&var_2c)
                result = 0
            else
                char* ecx_4 = &var_2c
                
                if (*arg2 u< 4)
                    sub_401110(ecx_4)
                    result = 0
                else
                    sub_401110(ecx_4)
                    result = 1
        else if (var_18 u< 0x10)
            result = 0
        else
            int32_t var_48_3 = var_2c.d
            sub_6b4d5b()
            result = 0
    else if (var_18 u< 0x10)
        result = 0
    else
        int32_t var_48_2 = var_2c.d
        sub_6b4d5b()
        result = 0
else
    if (var_18 u>= 0x10)
        int32_t var_48_1 = var_2c.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
