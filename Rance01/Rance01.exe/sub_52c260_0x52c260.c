// 函数: sub_52c260
// 地址: 0x52c260
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ade9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 3
int32_t ecx
sub_52c800(ecx, arg1)
arg1[0xc] = &win32only::CHighResolutionTimer::`vftable'
arg1[8] = &win32only::CHighResolutionTimer::`vftable'
var_4.b = 0
int32_t* eax_3 = arg1[4]

if (eax_3 != 0)
    int32_t* var_1c_1 = arg1
    int32_t var_20_1 = arg1[5]
    sub_52d870(eax_3, arg1)
    int32_t var_24_1 = arg1[4]
    sub_6b4d5b()

arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
int32_t var_4_1 = 0xffffffff
int32_t* result = *arg1

if (result != 0)
    int32_t* var_1c_2 = arg1
    sub_52d7c0(result, arg1[1])
    int32_t var_28_1 = *arg1
    result = sub_6b4d5b()

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
