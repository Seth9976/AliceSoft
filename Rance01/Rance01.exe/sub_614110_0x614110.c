// 函数: sub_614110
// 地址: 0x614110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_719375
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
int32_t* result = operator new(0x2c)
int32_t* result_1 = result
int128_t* arg_4

if (result == 0)
    arg_4 = nullptr
    struct std::exception::VTable* var_24
    std::exception::exception(&var_24, &arg_4)
    var_24 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_24, 0x771508)
    noreturn

*result = *(arg1 + 4)
result[1] = *(arg1 + 4)
result[2] = *(arg1 + 4)
result[0xa].w = 0
int32_t var_8_1 = 0
var_8_1.b = 1

if (result != 0xfffffff4)
    int128_t* eax_5 = arg_4
    result[8] = 0xf
    result[7] = 0
    result[3].b = 0
    void* edi_1 = eax_5 + 1
    int32_t ecx
    
    do
        ecx.b = *eax_5
        eax_5 += 1
    while (ecx.b != 0)
    sub_401270(&result[3], eax_5 - edi_1, arg_4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
