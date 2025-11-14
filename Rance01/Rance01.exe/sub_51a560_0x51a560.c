// 函数: sub_51a560
// 地址: 0x51a560
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
sub_51a6c0(arg1)
int32_t* result

if (*(arg1 i+ 0xa4) != 0)
    long double x87_r7_1 = float.t(1)
    float var_48_1 = fconvert.s(x87_r7_1)
    long double x87_r7_4 = float.t(0)
    
    if (sub_519f30(arg4, arg1, fconvert.s(x87_r7_4), fconvert.s(x87_r7_4), 
            fconvert.s(float.t(arg2)), fconvert.s(float.t(arg3)), -nanf, fconvert.s(x87_r7_1)).b == 0)
        result.b = 0
    else if (sub_50a8a0(arg1 i+ 0x24, 0, arg2, arg3, 1, 0, arg4).b == 0)
        result.b = 0
    else
        char var_2c
        sub_402be0(&var_2c, "ps_ssao.fx")
        int32_t var_48_3 = 0x1e
        int32_t var_4 = 0
        int32_t* eax_7 = sub_513af0(&var_2c)
        int32_t var_4_1 = 0xffffffff
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_48_4 = var_2c.d
            sub_6b4d5b()
        
        int32_t* ecx_4 = *(arg1 i+ 0xa4)
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        result = sub_511f10(ecx_4, eax_7)
        *(arg1 i+ 0xa0) = result
        
        if (result == 0)
            result.b = 0
        else
            *(arg1 i+ 0x9c) = *(arg1 i+ 0xa4)
            result.b = sub_4b3f30(arg1 i+ 0x3c, arg2, arg3, 3, arg4, 1).b != 0
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
