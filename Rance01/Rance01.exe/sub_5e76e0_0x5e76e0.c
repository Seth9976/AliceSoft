// 函数: sub_5e76e0
// 地址: 0x5e76e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_44
int32_t eax_2 = data_78c474 ^ &var_44
int32_t __saved_edi
int32_t var_54 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
char result

if (sub_410070(arg2, &var_2c) != 0)
    char* ecx_1 = *arg2
    
    if (&ecx_1[4] u<= arg2[1])
        uint32_t ecx_2 = zx.d(*ecx_1)
        uint32_t eax_11 =
            ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | ecx_2
        *arg2 = &ecx_1[4]
        float var_3c
        
        if (sub_40ff40(ecx_2, arg2, &var_3c) == 0)
            goto label_5e773c
        
        uint32_t var_38
        
        if (sub_5546f0(arg2, &var_44) != 0)
            uint32_t var_30
            
            if (sub_5546f0(arg2, &var_38) == 0)
                sub_401110(&var_2c)
                result = 0
            else
                uint32_t var_40
                
                if (sub_5546f0(arg2, &var_30) == 0)
                    sub_401110(&var_2c)
                    result = 0
                else if (sub_5546f0(arg2, &var_40) == 0)
                    sub_401110(&var_2c)
                    result = 0
                else
                    sub_5ff490(var_44, var_40, var_30, var_38, arg1)
                    
                    if (sub_5ff430(&var_2c, arg1) == 0)
                        sub_401110(&var_2c)
                        result = 0
                    else
                        sub_5e6dd0(arg1, fconvert.s(fconvert.t(eax_11)), 
                            fconvert.s(fconvert.t(var_3c)))
                        sub_401110(&var_2c)
                        result = 1
        else
            sub_401110(&var_2c)
            result = 0
    else if (var_18 u< 0x10)
        result = 0
    else
        int32_t var_58_4 = var_2c.d
        sub_6b4d5b()
        result = 0
else
label_5e773c:
    
    if (var_18 u< 0x10)
        result = 0
    else
        int32_t var_58_1 = var_2c.d
        sub_6b4d5b()
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_44)
return result
