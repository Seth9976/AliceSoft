// 函数: sub_55c8a0
// 地址: 0x55c8a0
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
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t var_4 = 0
char result

if (sub_410070(arg2, &var_2c) != 0)
    sub_401180(arg1, 0xffffffff, &var_2c, 0)
    char* ecx_2 = *arg2
    
    if (&ecx_2[4] u<= arg2[1])
        uint32_t eax_11 =
            ((zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])) << 8 | zx.d(*ecx_2)
        *arg2 = &ecx_2[4]
        arg1[7] = eax_11
        
        if (sub_5546f0(arg2, &arg1[8]) == 0)
            goto label_55c8f7
        
        char* ecx_5 = &var_2c
        
        if (sub_5546f0(arg2, &arg1[9]) != 0)
            sub_401110(ecx_5)
            result = 1
        else
            sub_401110(ecx_5)
            result = 0
    else if (var_18 u< 0x10)
        result = 0
    else
        int32_t var_3c_4 = var_2c.d
        sub_6b4d5b()
        result = 0
else
label_55c8f7:
    
    if (var_18 u< 0x10)
        result = 0
    else
        int32_t var_3c_1 = var_2c.d
        sub_6b4d5b()
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
