// 函数: sub_58d340
// 地址: 0x58d340
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7143c5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = &var_24
int32_t* ebx = arg2
int32_t* result = sub_4fddf0(1)
*result = *(arg1 + 4)
result[1] = *(arg1 + 4)
arg2 = result
result[2] = *(arg1 + 4)
result[8].w = 0
int32_t var_8_1 = 0
var_8_1.b = 1

if (result != 0xfffffff4)
    sub_6b05e0(&result[3], ebx)
    result[7] = ebx[4]

fsbase->NtTib.ExceptionList = ExceptionList
return result
