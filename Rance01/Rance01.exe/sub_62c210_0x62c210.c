// 函数: sub_62c210
// 地址: 0x62c210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_715ec5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* result_1
int32_t* result_2 = result_1
int32_t* result = operator new(0x34)
result_1 = result

if (result == 0)
    result_1 = nullptr
    struct std::exception::VTable* var_20
    std::exception::exception(&var_20, &result_1)
    var_20 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_20, 0x771508)
    noreturn

*result = *(arg1 + 4)
result[1] = *(arg1 + 4)
result[2] = *(arg1 + 4)
result[0xc].w = 0
int32_t var_8_1 = 0
var_8_1.b = 1

if (result != 0xfffffff4)
    result[7] = 0
    result[8] = 0xf
    result[3].b = 0
    sub_401180(&result[3], 0xffffffff, result_2, 0)
    result[0xa] = result_2[7]
    result[0xb] = result_2[8]

fsbase->NtTib.ExceptionList = ExceptionList
return result
