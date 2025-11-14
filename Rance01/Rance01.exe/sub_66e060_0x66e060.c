// 函数: sub_66e060
// 地址: 0x66e060
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
long double result

if (arg2 != 0)
    result = float.t(0)
    
    if (arg4 != 0)
        int32_t* eax_5 = *arg4
        var_30 = fconvert.s(result)
        int128_t* eax_6 = (*eax_5)(eax_4)
        char* ecx_1 = eax_6
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        int32_t var_2c[0x4]
        __builtin_memset(&var_2c, 0, 1)
        char i
        
        do
            i = *ecx_1
            ecx_1 = &ecx_1[1]
        while (i != 0)
        sub_401270(&var_2c, ecx_1 - &ecx_1[1], eax_6)
        int32_t var_4 = 0
        void* ebx
        ebx.b = sub_66abe0(arg1 + 8, arg2, arg3, &var_2c, &var_30) == 0
        
        if (var_18_1 u>= 0x10)
            int32_t var_48_3 = var_2c[0]
            sub_6b4d5b()
        
        if (ebx.b != 0)
            result = float.t(0)
        else
            result = fconvert.t(var_30)
else
    result = float.t(0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
