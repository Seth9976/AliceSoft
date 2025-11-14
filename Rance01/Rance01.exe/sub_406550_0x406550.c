// 函数: sub_406550
// 地址: 0x406550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71b8c5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* result = arg5
char* i = arg3
int32_t* result_1 = result
int32_t var_8_1 = 0

for (; i != arg4; i = &i[0x1c])
    var_8_1.b = 1
    
    if (result != 0)
        result[5] = 0xf
        result[4] = 0
        *result = 0
        sub_401ef0(result, i)
    
    result = &result[7]
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
