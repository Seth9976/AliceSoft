// 函数: sub_5357b0
// 地址: 0x5357b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71aa20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* result = arg5
int32_t* i = arg3
int32_t* result_2 = result
int32_t var_8_1 = 0

for (; i != arg4; i = &i[9])
    int32_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = *i
        sub_6b05e0(&result[1], &i[1])
        var_8_1.b = 2
        sub_535460(&result[5], &i[5])
    
    result = &result[9]
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
