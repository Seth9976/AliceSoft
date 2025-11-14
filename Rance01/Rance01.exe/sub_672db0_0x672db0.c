// 函数: sub_672db0
// 地址: 0x672db0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_715be5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* result = sub_672710(1)
*result = *(arg1 + 4)
result[1] = *(arg1 + 4)
int32_t* result_1 = result
result[2] = *(arg1 + 4)
result[0x11].w = 0
int32_t var_8_1 = 0
var_8_1.b = 1

if (result != 0xfffffff4)
    sub_672e90(arg2, &result[3])

fsbase->NtTib.ExceptionList = ExceptionList
return result
