// 函数: sub_4f9240
// 地址: 0x4f9240
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724d1a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float var_44 = fconvert.s(fconvert.t(0.0253999997f))
int32_t var_40 = 0xffffffff
int32_t var_3c = 0
int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_2c = 0
int32_t var_28 = 0
int32_t var_24 = 0
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_4 = 0

if (sub_4f2c40(&var_44, arg2, arg3) == 0)
    int32_t var_4_1 = 0xffffffff
    sub_4f2ba0(&var_44)
    int32_t eax_6
    eax_6.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

if (sub_4f97c0(&var_44, arg1) == 0)
    int32_t var_4_2 = 0xffffffff
    sub_4f2ba0(&var_44)
    int32_t eax_8
    eax_8.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8

if (sub_4f9980(arg1, &var_44) == 0)
    int32_t var_4_3 = 0xffffffff
    sub_4f2ba0(&var_44)
    int32_t eax_10
    eax_10.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_10

float* var_50_6 = &var_44

if (sub_4f9a00(arg1) == 0)
    int32_t var_4_4 = 0xffffffff
    sub_4f2ba0(&var_44)
    int32_t eax_12
    eax_12.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_12

arg1[0x27] = sub_4fbf40(arg1)
int32_t var_4_5 = 0xffffffff
sub_4f2ba0(&var_44)
int32_t eax_15
eax_15.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_15
