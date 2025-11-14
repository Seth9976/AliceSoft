// 函数: sub_632670
// 地址: 0x632670
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718e8d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 0
*(arg1 + 0xc) = 0
int32_t* eax_3 = operator new(0x2c)

if (eax_3 == 0)
    int32_t var_28 = 0
    struct std::exception::VTable* var_18
    std::exception::exception(&var_18, &var_28)
    var_18 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_18, 0x771508)
    noreturn

*(arg1 + 8) = eax_3
*eax_3 = eax_3
void* eax_4 = *(arg1 + 8)
*(eax_4 + 4) = eax_4
void* eax_5 = *(arg1 + 8)
*(eax_5 + 8) = eax_5
*(*(arg1 + 8) + 0x28) = 1
*(*(arg1 + 8) + 0x29) = 1
int32_t var_4 = 0
*(arg1 + 0x1c) = 0
int32_t* eax_7 = operator new(0x2c)

if (eax_7 == 0)
    int32_t var_2c = 0
    struct std::exception::VTable* var_24
    std::exception::exception(&var_24, &var_2c)
    var_24 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_24, 0x771508)
    noreturn

*(arg1 + 0x18) = eax_7
*eax_7 = eax_7
void* eax_8 = *(arg1 + 0x18)
*(eax_8 + 4) = eax_8
void* eax_9 = *(arg1 + 0x18)
*(eax_9 + 8) = eax_9
*(*(arg1 + 0x18) + 0x28) = 1
*(*(arg1 + 0x18) + 0x29) = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
