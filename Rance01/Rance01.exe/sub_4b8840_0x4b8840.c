// 函数: sub_4b8840
// 地址: 0x4b8840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg2 + 0x64) = arg5
float* result

if (sub_4b3f30(arg2 + 4, arg3, arg4, 0xb, arg1, 1).b == 0)
    result.b = 0
else
    long double x87_r7_1 = float.t(1)
    float var_48_1 = fconvert.s(x87_r7_1)
    long double x87_r7_4 = float.t(0)
    
    if (sub_519f30(arg1, arg2 + 0x68, fconvert.s(x87_r7_4), fconvert.s(x87_r7_4), 
            fconvert.s(float.t(arg3)), fconvert.s(float.t(arg4)), -nanf, fconvert.s(x87_r7_1)).b == 0)
        result.b = 0
    else
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        sub_401270(&var_2c, 9, "ps_dof.fx")
        int32_t var_48_2 = 0x14
        int32_t var_4 = 0
        int32_t* eax_7 = sub_513af0(&var_2c)
        int32_t var_4_1 = 0xffffffff
        
        if (var_18_1 u>= 0x10)
            int32_t var_48_3 = var_2c.d
            sub_6b4d5b()
        
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        result = sub_511f10(arg5, eax_7)
        *(arg2 + 0x8c) = result
        
        if (result != 0)
            result.b = 1
        else
            sub_51ddc0(0x75647c)
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
