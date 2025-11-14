// 函数: sub_6b0b70
// 地址: 0x6b0b70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?_FullAliasWait@_TaskCollection@details@Concurrency@@AAEXPAV123@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
int32_t* result_1
int32_t* result_2 = result_1
int32_t* result = operator new(0x34)
result_1 = result

if (result == 0)
    result_1 = nullptr
    struct std::exception::VTable* var_24
    std::exception::exception(&var_24, &result_1)
    var_24 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_24, 0x771508)
    noreturn

*result = *(arg1 + 4)
result[1] = *(arg1 + 4)
result[2] = *(arg1 + 4)
result[0xc].w = 0
int32_t var_8_1 = 0
var_8_1.b = 1

if (result != 0xfffffff4)
    result[3] = *result_2
    void* var_18_1 = &result[4]
    sub_6b05e0(&result[4], &result_2[1])
    var_8_1.b = 2
    sub_6b05e0(&result[8], &result_2[5])

fsbase->NtTib.ExceptionList = ExceptionList
return result
