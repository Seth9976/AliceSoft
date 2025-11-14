// 函数: sub_55bfb0
// 地址: 0x55bfb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_716d15
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
int32_t* result = operator new(0x30)
int32_t* result_1 = result

if (result == 0)
    result_1 = nullptr
    struct std::exception::VTable* var_24
    std::exception::exception(&var_24, &result_1)
    var_24 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_24, 0x771508)
    noreturn

*result = *(arg2 + 4)
result[1] = *(arg2 + 4)
result[2] = *(arg2 + 4)
result[0xb].w = 0
int32_t var_8_1 = 0
var_8_1.b = 1

if (result != 0xfffffff4)
    result[8] = 0xf
    result[7] = 0
    result[3].b = 0
    sub_401ef0(&result[3], arg1)
    result[0xa] = *(arg1 + 0x1c)

fsbase->NtTib.ExceptionList = ExceptionList
return result
