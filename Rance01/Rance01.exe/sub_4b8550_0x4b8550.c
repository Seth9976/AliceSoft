// 函数: sub_4b8550
// 地址: 0x4b8550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_724e0b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_114
int32_t eax_2 = data_78c474 ^ &var_114
fsbase->NtTib.ExceptionList = &ExceptionList
float result

if (arg2[1].b != 0)
    int32_t* ecx = *arg2
    int32_t __saved_edi
    
    if (ecx == 0)
        result.b = 1
    else if ((*(*ecx + 0x10))(data_78c474 ^ &__saved_edi).b == 0)
        result.b = 1
    else
        struct sealengine::CDrawParam::VTable* var_100
        sub_4b97d0(&var_100)
        int32_t var_c_1 = 0
        (*(*arg1 + 0x94))(1)
        (*(*arg1 + 0x98))(1)
        (*(*arg1 + 0x8c))(0, 2)
        long double x87_r7_1 = float.t(1)
        var_114 = fconvert.s(x87_r7_1)
        float var_110_1 = fconvert.s(x87_r7_1)
        float var_10c_1 = fconvert.s(x87_r7_1)
        float var_108_1 = fconvert.s(x87_r7_1)
        void var_fc
        __builtin_memcpy(&var_fc, arg4, 0x40)
        float var_b0_1 = var_114
        var_114 = fconvert.s(x87_r7_1)
        float var_a4_1 = var_108_1
        float var_ac_1 = var_110_1
        float var_90_1 = fconvert.s(x87_r7_1)
        float var_98_1 = fconvert.s(x87_r7_1)
        int32_t* ecx_7 = *arg2
        float var_a8_1 = var_10c_1
        float var_a0_1 = var_114
        float var_9c_1 = fconvert.s(x87_r7_1)
        float var_94_1 = fconvert.s(x87_r7_1)
        
        if (ecx_7 == 0)
            result.b = 0
        else if ((*(*ecx_7 + 0x20))().b != 0)
            if (sub_509e40(arg3, &var_100).b == 0)
                result.b = 0
            else
                result.b = (*(**arg2 + 0x30))().b != 0
        else
            result.b = 0
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_114)
return result
