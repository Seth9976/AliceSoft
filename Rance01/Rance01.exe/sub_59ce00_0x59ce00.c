// 函数: sub_59ce00
// 地址: 0x59ce00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71e3dd
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

for (; i != arg4; i = &i[8])
    int32_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        sub_6b05e0(result, i)
        var_8_1.b = 2
        sub_4ea490(&result[4], &i[4])
    
    result = &result[8]
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
