// 函数: sub_622580
// 地址: 0x622580
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715f85
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_28 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
__builtin_memset(arg1, 0, 0x14)
*(arg1 + 0x1c) = 0
int32_t* eax_3 = sub_4ecfc0(1)
*(arg1 + 0x18) = eax_3
*eax_3 = eax_3
void* eax_4 = *(arg1 + 0x18)
*(eax_4 + 4) = eax_4
void* eax_5 = *(arg1 + 0x18)
*(eax_5 + 8) = eax_5
*(*(arg1 + 0x18) + 0x14) = 1
*(*(arg1 + 0x18) + 0x15) = 1
int32_t var_4 = 0
*(arg1 + 0x2c) = 0
int32_t* eax_7 = operator new(0x30)
int32_t var_1c
struct std::exception::VTable* var_18

if (eax_7 == 0)
    var_1c = 0
    std::exception::exception(&var_18, &var_1c)
    var_18 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_18, 0x771508)
    noreturn

*(arg1 + 0x28) = eax_7
*eax_7 = eax_7
void* eax_8 = *(arg1 + 0x28)
*(eax_8 + 4) = eax_8
void* eax_9 = *(arg1 + 0x28)
*(eax_9 + 8) = eax_9
*(*(arg1 + 0x28) + 0x2c) = 1
*(*(arg1 + 0x28) + 0x2d) = 1
*(arg1 + 0x34) = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x3c) = 0
var_4.b = 2
*(arg1 + 0x4c) = 0
int32_t* eax_11 = operator new(0x30)

if (eax_11 == 0)
    var_1c = 0
    std::exception::exception(&var_18, &var_1c)
    var_18 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_18, 0x771508)
    noreturn

*(arg1 + 0x48) = eax_11
*eax_11 = eax_11
void* eax_12 = *(arg1 + 0x48)
*(eax_12 + 4) = eax_12
void* eax_13 = *(arg1 + 0x48)
*(eax_13 + 8) = eax_13
*(*(arg1 + 0x48) + 0x2c) = 1
*(*(arg1 + 0x48) + 0x2d) = 1
*(arg1 + 0x54) = 0
*(arg1 + 0x58) = 0
*(arg1 + 0x5c) = 0
*(arg1 + 0x64) = 0
*(arg1 + 0x68) = 0
*(arg1 + 0x6c) = 0
*(arg1 + 0x88) = 0xf
*(arg1 + 0x84) = 0
*(arg1 + 0x74) = 0
*(arg1 + 0x90) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
