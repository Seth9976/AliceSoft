// 函数: sub_4d6910
// 地址: 0x4d6910
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71503d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* ebx = arg2
int32_t* result = sub_4b5460(1)
*result = *(arg1 + 4)
result[1] = *(arg1 + 4)
int32_t var_8_1 = 0
arg2 = result
result[2] = *(arg1 + 4)
result[0xe].w = 0
void* var_18 = &result[3]
var_8_1.b = 1

if (result != 0xfffffff4)
    result[7] = 0
    result[8] = 0xf
    result[3].b = 0
    sub_401180(&result[3], 0xffffffff, ebx, 0)
    var_8_1.b = 2
    sub_4d3ed0(&result[0xa], &ebx[7])

fsbase->NtTib.ExceptionList = ExceptionList
return result
