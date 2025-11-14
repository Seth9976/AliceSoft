// 函数: sub_572650
// 地址: 0x572650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_716bb5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* result = arg5
int32_t* i = arg3
int32_t* result_1 = result
int32_t var_8_1 = 0

for (; i != arg4; i = &i[4])
    var_8_1.b = 1
    
    if (result != 0)
        sub_572720(result, i)
    
    result = &result[4]
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
