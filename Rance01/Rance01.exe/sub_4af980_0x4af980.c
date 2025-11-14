// 函数: sub_4af980
// 地址: 0x4af980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7154f5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = &var_24
int32_t* ebx = arg2
int32_t* result = sub_52d190(1)
*result = *(arg1 + 4)
result[1] = *(arg1 + 4)
arg2 = result
result[2] = *(arg1 + 4)
result[0xd].w = 0
int32_t var_8_1 = 0
var_8_1.b = 1

if (result != 0xfffffff4)
    result[7] = 0
    result[8] = 0xf
    result[3].b = 0
    sub_401180(&result[3], 0xffffffff, ebx, 0)
    result[0xa] = ebx[7]
    result[0xb] = ebx[8]
    result[0xc] = ebx[9]

fsbase->NtTib.ExceptionList = ExceptionList
return result
