// 函数: sub_5cc2a0
// 地址: 0x5cc2a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719c45
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_28 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
int32_t var_4 = 0
arg1[0x1c] = 0
*(arg1 + 0x28) = 0
int32_t* eax_3 = sub_416b10(1)
*(arg1 + 0x24) = eax_3
*eax_3 = eax_3
void* eax_4 = *(arg1 + 0x24)
*(eax_4 + 4) = eax_4
void* eax_5 = *(arg1 + 0x24)
*(eax_5 + 8) = eax_5
*(*(arg1 + 0x24) + 0x10) = 1
*(*(arg1 + 0x24) + 0x11) = 1
var_4.b = 1
*(arg1 + 0x38) = 0
int32_t* eax_7 = operator new(0x2c)

if (eax_7 == 0)
    int32_t var_1c = 0
    struct std::exception::VTable* var_18
    std::exception::exception(&var_18, &var_1c)
    var_18 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_18, 0x771508)
    noreturn

*(arg1 + 0x34) = eax_7
*eax_7 = eax_7
void* eax_8 = *(arg1 + 0x34)
*(eax_8 + 4) = eax_8
void* eax_9 = *(arg1 + 0x34)
*(eax_9 + 8) = eax_9
*(*(arg1 + 0x34) + 0x28) = 1
*(*(arg1 + 0x34) + 0x29) = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
