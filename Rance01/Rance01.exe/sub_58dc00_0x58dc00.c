// 函数: sub_58dc00
// 地址: 0x58dc00
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
sub_65a090(&var_28, 0x10)
int32_t var_c_1 = 0
float* esi_1 = var_28
*esi_1 = fconvert.s(fconvert.t(*arg3))
esi_1[1] = fconvert.s(fconvert.t(arg3[4]))
esi_1[2] = fconvert.s(fconvert.t(arg3[8]))
esi_1[3] = fconvert.s(fconvert.t(arg3[0xc]))
esi_1[4] = fconvert.s(fconvert.t(arg3[1]))
esi_1[5] = fconvert.s(fconvert.t(arg3[5]))
esi_1[6] = fconvert.s(fconvert.t(arg3[9]))
esi_1[7] = fconvert.s(fconvert.t(arg3[0xd]))
esi_1[8] = fconvert.s(fconvert.t(arg3[2]))
esi_1[9] = fconvert.s(fconvert.t(arg3[6]))
esi_1[0xa] = fconvert.s(fconvert.t(arg3[0xa]))
esi_1[0xb] = fconvert.s(fconvert.t(arg3[0xe]))
esi_1[0xc] = fconvert.s(fconvert.t(arg3[3]))
esi_1[0xd] = fconvert.s(fconvert.t(arg3[7]))
esi_1[0xe] = fconvert.s(fconvert.t(arg3[0xb]))
float** var_40 = &var_28
esi_1[0xf] = fconvert.s(fconvert.t(arg3[0xf]))
float* var_40_1 = esi_1

if (sub_58dd10(arg1, arg2) != 0)
    sub_6b4d5b()
    int32_t eax_6
    eax_6.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

sub_6b4d5b()
int32_t eax_5
eax_5.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
