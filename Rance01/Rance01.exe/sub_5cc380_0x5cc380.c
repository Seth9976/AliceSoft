// 函数: sub_5cc380
// 地址: 0x5cc380
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719c15
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t* var_14 = &arg1[0xc]
var_4.b = 2
int32_t* eax_3 = arg1[0xd]
int32_t* var_10
sub_50d940(&arg1[0xc], &var_10, *eax_3, eax_3)
int32_t var_28_1 = arg1[0xd]
sub_6b4d5b()
var_10 = &arg1[8]
var_4.b = 3
int32_t* eax_4 = arg1[9]
sub_58bc40(&arg1[8], &var_14, *eax_4, eax_4)
int32_t var_28_3 = arg1[9]
int32_t result = sub_6b4d5b()

if (arg1[5] u>= 0x10)
    int32_t var_28_4 = *arg1
    result = sub_6b4d5b()

arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
