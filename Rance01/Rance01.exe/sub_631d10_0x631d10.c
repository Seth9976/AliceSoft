// 函数: sub_631d10
// 地址: 0x631d10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_715e45
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* result = sub_631c00(1)
int32_t var_8_1 = 0
int32_t* result_1 = result
*result = arg2
result[1] = arg3
var_8_1.b = 1

if (result != 0xfffffff8)
    result[7] = 0xf
    result[6] = 0
    result[2].b = 0
    sub_401ef0(&result[2], arg1)
    result[9] = *(arg1 + 0x1c)

fsbase->NtTib.ExceptionList = ExceptionList
return result
