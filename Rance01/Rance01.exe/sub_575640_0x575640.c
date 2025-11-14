// 函数: sub_575640
// 地址: 0x575640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_716b05
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = &var_24
int32_t* ebx = arg2
int32_t* result = sub_672710(1)
*result = *(arg1 + 4)
result[1] = *(arg1 + 4)
arg2 = result
result[2] = *(arg1 + 4)
result[0x11].w = 0
int32_t var_8_1 = 0
var_8_1.b = 1

if (result != 0xfffffff4)
    sub_575d70(ebx, &result[3], &ebx[0xd])

fsbase->NtTib.ExceptionList = ExceptionList
return result
