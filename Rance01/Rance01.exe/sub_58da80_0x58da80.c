// 函数: sub_58da80
// 地址: 0x58da80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_713cf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float* var_28 = nullptr
int32_t var_24 = 0
int32_t var_20 = 0
sub_65a090(&var_28, 4)
int32_t var_c_1 = 0
float* esi_1 = var_28
*esi_1 = fconvert.s(fconvert.t(arg3))
float** var_40 = &var_28
esi_1[1] = fconvert.s(fconvert.t(arg4))
esi_1[2] = fconvert.s(fconvert.t(arg5))
esi_1[3] = fconvert.s(fconvert.t(arg6))
float* var_40_1 = esi_1

if (sub_58dd10(arg1, arg2) != 0)
    sub_6b4d5b()
    int32_t eax_5
    eax_5.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

sub_6b4d5b()
int32_t eax_4
eax_4.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
