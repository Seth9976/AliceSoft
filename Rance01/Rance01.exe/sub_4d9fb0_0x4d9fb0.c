// 函数: sub_4d9fb0
// 地址: 0x4d9fb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712ec8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_ac = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_6c = 0
int32_t var_68 = 0
int32_t var_64 = 0
int32_t var_4 = 0
int32_t eax_6 = sub_4f5df0(&var_6c, (arg3[1] - *arg3) s>> 6)
long double x87_r7 = fconvert.t(3.40282347e+38f)
float* i = *arg3
float var_88 = fconvert.s(x87_r7)
long double x87_r6 = fconvert.t(-3.40282347e+38f)
float var_84 = fconvert.s(x87_r6)
float var_7c = fconvert.s(x87_r6)
float var_74 = fconvert.s(x87_r6)
float var_80 = fconvert.s(x87_r7)
float var_78 = fconvert.s(x87_r7)
float var_94

if (i != arg3[1])
    long double x87_r7_1 = float.t(0)
    var_94 = fconvert.s(x87_r7_1)
    float var_90_1 = fconvert.s(x87_r7_1)
    float var_8c_1 = fconvert.s(x87_r7_1)
    
    do
        void var_5c
        float var_50[0x11]
        sub_51e1c0(arg1 + 0x8c, &var_5c, sub_4b65f0(eax_6, i, arg1 + 0x8c, &var_50), &var_94)
        sub_4da9d0(&var_5c, &var_6c)
        eax_6 = sub_4b7180(&var_5c, &var_88)
        i = &i[0x10]
    while (i != arg3[1])

long double x87_r7_2 = fconvert.t(var_84)
long double x87_r5 = fconvert.t(var_88)
long double x87_r4_1 = fconvert.t(0.5)
var_94 = fconvert.s((x87_r7_2 + x87_r5) * x87_r4_1)
long double x87_r4_3 = fconvert.t(var_7c)
*arg2 = var_94
long double x87_r2 = fconvert.t(var_80)
float var_90_2 = fconvert.s((x87_r4_3 + x87_r2) * x87_r4_1)
long double x87_r2_3 = fconvert.t(var_74)
float var_b0_3 = var_90_2
arg2[1] = var_90_2
arg2[2] = fconvert.s((x87_r2_3 + fconvert.t(var_78)) * x87_r4_1)
long double x87_r3_4 = (x87_r4_3 - x87_r2) * x87_r4_1
long double x87_r4_6 = (x87_r7_2 - x87_r5) * x87_r4_1
long double x87_r6_5 = x87_r4_1 * (x87_r2_3 - fconvert.t(var_78))
long double x87_r7_9 = sub_4d9250(fconvert.s(fconvert.t(fconvert.s(x87_r3_4 * x87_r3_4
    + x87_r4_6 * x87_r4_6 + x87_r6_5 * x87_r6_5)))) + fconvert.t(arg4)
int32_t eax_10 = var_6c
arg2[3] = fconvert.s(x87_r7_9)

if (eax_10 != 0)
    int32_t var_b0_5 = eax_10
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
