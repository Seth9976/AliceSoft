// 函数: sub_621570
// 地址: 0x621570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_715fa5
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

for (; i != arg4; i = &i[0xa])
    var_8_1.b = 1
    
    if (result != 0)
        *result = *i
        result[6] = 0xf
        result[5] = 0
        result[1].b = 0
        sub_401180(&result[1], 0xffffffff, &i[1], 0)
        result[8] = i[8]
        result[9].b = i[9].b
    
    result = &result[0xa]
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
