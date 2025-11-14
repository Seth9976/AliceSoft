// 函数: sub_4fea60
// 地址: 0x4fea60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_714aa5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = &var_24
int32_t* result = sub_4fddf0(1)
*result = arg2[1]
result[1] = arg2[1]
int32_t edx = arg2[1]
arg2 = result
result[2] = edx
result[8].w = 0
int32_t var_8_1 = 0
var_8_1.b = 1

if (result != 0xfffffff4)
    result[3] = *arg1
    result[4] = 0
    result[5] = 0
    result[6] = 0
    
    if (&result[4] != &arg1[1])
        sub_4fd080(&result[4])
        result[4] = arg1[1]
        result[5] = arg1[2]
        result[6] = arg1[3]
        arg1[1] = 0
        arg1[2] = 0
        arg1[3] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
