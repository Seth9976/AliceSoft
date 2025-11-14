// 函数: sub_55ba80
// 地址: 0x55ba80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71a4a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
*(arg1 + 8) = 0
int32_t* eax_3 = operator new(0x30)

if (eax_3 == 0)
    int32_t var_18 = 0
    struct std::exception::VTable* var_24
    std::exception::exception(&var_24, &var_18)
    var_24 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_24, 0x771508)
    noreturn

*(arg1 + 4) = eax_3
*eax_3 = eax_3
void* eax_4 = *(arg1 + 4)
*(eax_4 + 4) = eax_4
void* eax_5 = *(arg1 + 4)
*(eax_5 + 8) = eax_5
*(*(arg1 + 4) + 0x2c) = 1
*(*(arg1 + 4) + 0x2d) = 1
int32_t var_8_1 = 0
var_8_1.b = 1
sub_55b790(arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
