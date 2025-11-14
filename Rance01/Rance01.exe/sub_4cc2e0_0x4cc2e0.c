// 函数: sub_4cc2e0
// 地址: 0x4cc2e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_724dcb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_15c
int32_t eax_2 = data_78c474 ^ &var_15c
fsbase->NtTib.ExceptionList = &ExceptionList
float result
int32_t __saved_edi

if (arg2 == 1 && *(arg1 + 4) != 0)
    if ((*(**(arg1 + 4) + 0x10))(data_78c474 ^ &__saved_edi).b == 0)
        result.b = 1
    else
        struct sealengine::CDrawParam::VTable* var_100
        sub_4b97d0(&var_100)
        int32_t var_c_1 = 0
        float var_140
        sub_42e110(&var_140)
        int32_t edx_3 = *(*arg4 + 0x94)
        void var_fc
        __builtin_memcpy(&var_fc, &var_140, 0x40)
        int32_t var_bc_1 = 0
        edx_3(zx.d(*(arg1 + 0xc)))
        (*(*arg4 + 0x98))(zx.d(*(arg1 + 0xd)))
        (*(*arg4 + 0x8c))(0, 2)
        long double x87_r7_1 = float.t(1)
        char var_b3_1 = 0
        long double x87_r6_1 = float.t(0)
        float var_ac_1 = fconvert.s(x87_r7_1)
        float var_b0_1 = fconvert.s(x87_r7_1)
        float var_a0_1 = fconvert.s(x87_r6_1)
        float var_a8_1 = fconvert.s(x87_r7_1)
        float var_a4_1 = fconvert.s(x87_r7_1)
        float var_90_1 = fconvert.s(x87_r7_1)
        float var_94_1 = fconvert.s(x87_r6_1)
        float var_9c_1 = fconvert.s(x87_r6_1)
        float var_98_1 = fconvert.s(x87_r6_1)
        
        if ((*(**(arg1 + 4) + 0x20))().b != 0)
            if (sub_509e40(arg3, &var_100).b == 0)
                result.b = 0
            else
                result.b = (*(**(arg1 + 4) + 0x30))().b != 0
        else
            result.b = 0
else
    result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_15c)
return result
