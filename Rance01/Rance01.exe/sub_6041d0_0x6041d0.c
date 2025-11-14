// 函数: sub_6041d0
// 地址: 0x6041d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_716300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
var_10 = data_78c474 ^ &var_10
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != arg1)
    int32_t edx_1 = *arg2
    int32_t esi_1 = arg2[1]
    int32_t edi_1 = arg2[2]
    int32_t ebx_1 = arg2[3]
    *arg2 = *arg1
    arg2[1] = arg1[1]
    arg2[2] = arg1[2]
    arg2[3] = arg1[3]
    *arg1 = edx_1
    arg1[1] = esi_1
    arg1[2] = edi_1
    arg1[3] = ebx_1
    int32_t edx_2 = arg2[4]
    arg2[4] = arg1[4]
    arg1[4] = edx_2
    int32_t edx_3 = arg2[5]
    arg2[5] = arg1[5]
    arg1[5] = edx_3

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(var_10 ^ &var_10)
return arg2
