// 函数: sub_610290
// 地址: 0x610290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71d8ad
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
int32_t* result_1
int32_t* result_2 = result_1
int32_t* result = operator new(0xa8)
result_1 = result

if (result == 0)
    result_1 = nullptr
    struct std::exception::VTable* var_24
    std::exception::exception(&var_24, &result_1)
    var_24 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_24, 0x771508)
    noreturn

*result = result_2[1]
result[1] = result_2[1]
int32_t var_8_1 = 0
result[2] = result_2[1]
result[0x29].w = 0
void* var_18 = &result[3]
var_8_1.b = 1

if (result != 0xfffffff4)
    result[7] = 0
    result[8] = 0xf
    result[3].b = 0
    sub_401180(&result[3], 0xffffffff, arg1, 0)
    var_8_1.b = 2
    sub_60a880(&arg1[7], &result[0xa])

fsbase->NtTib.ExceptionList = ExceptionList
return result
