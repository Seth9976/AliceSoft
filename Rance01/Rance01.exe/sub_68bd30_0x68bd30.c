// 函数: sub_68bd30
// 地址: 0x68bd30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7138c5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = data_78c474 ^ &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg3
int32_t var_4 = 0

if (result != 0)
    *result = *arg2
    result[1] = arg2[1]
    result[2] = fconvert.s(fconvert.t(arg2[2]))
    int32_t ecx_2
    ecx_2.b = arg2[3].b
    result[3].b = ecx_2.b
    result[9] = 0xf
    result[8] = 0
    result[4].b = 0
    result = sub_401180(&result[4], 0xffffffff, &arg2[4], 0)

fsbase->NtTib.ExceptionList = ExceptionList
return result
