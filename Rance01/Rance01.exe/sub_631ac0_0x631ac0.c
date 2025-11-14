// 函数: sub_631ac0
// 地址: 0x631ac0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_713c35
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_24 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = &var_24
int32_t* ebx = arg3
int32_t* result = sub_631c00(1)
int32_t var_8_1 = 0
arg3 = result
*result = arg1
result[1] = arg2
var_8_1.b = 1

if (result != 0xfffffff8)
    result[7] = 0xf
    result[6] = 0
    result[2].b = 0
    sub_401180(&result[2], 0xffffffff, ebx, 0)
    result[9] = ebx[7]

fsbase->NtTib.ExceptionList = ExceptionList
return result
