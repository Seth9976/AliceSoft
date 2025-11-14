// 函数: sub_5727f0
// 地址: 0x5727f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7144c5
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

for (; i != arg4; i = &i[5])
    var_8_1.b = 1
    
    if (result != 0)
        *result = *i
        sub_4f7750(&result[1], &i[1])
    
    result = &result[5]
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
