// 函数: sub_5ed210
// 地址: 0x5ed210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7196f5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
float* result = arg5
float* i = arg3
float* result_1 = result
int32_t var_8_1 = 0

for (; i != arg4; i = &i[0x1b])
    var_8_1.b = 1
    
    if (result != 0)
        sub_5ec740(i, result)
    
    result = &result[0x1b]
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
