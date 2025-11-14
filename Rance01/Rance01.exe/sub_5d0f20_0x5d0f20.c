// 函数: sub_5d0f20
// 地址: 0x5d0f20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_716535
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* result_1
int32_t* result_2 = result_1
int32_t* result = operator new(0x5c)
result_1 = result

if (result == 0)
    result_1 = nullptr
    struct std::exception::VTable* var_20
    std::exception::exception(&var_20, &result_1)
    var_20 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_20, 0x771508)
    noreturn

*result = result_2[1]
result[1] = result_2[1]
result[2] = result_2[1]
result[0x16].w = 0
int32_t var_8_1 = 0
var_8_1.b = 1

if (result != 0xfffffff4)
    sub_5d05f0(&result[3], arg1 + 0x1c)

fsbase->NtTib.ExceptionList = ExceptionList
return result
