// 函数: sub_537530
// 地址: 0x537530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a9a5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
__builtin_memset(arg1, 0, 0x18)
int32_t var_4 = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0
*(arg1 + 0x2c) = 0
*(arg1 + 0x30) = 0
*(arg1 + 0x34) = 0
*(arg1 + 0x3c) = 0
*(arg1 + 0x40) = 0
*(arg1 + 0x44) = 0
*(arg1 + 0x4c) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x54) = 0
*(arg1 + 0x5c) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x64) = 0
*(arg1 + 0x6c) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x74) = 0
*(arg1 + 0x7c) = 0
*(arg1 + 0x80) = 0
*(arg1 + 0x84) = 0
*(arg1 + 0x8c) = 0
*(arg1 + 0x90) = 0
*(arg1 + 0x94) = 0
*(arg1 + 0x9c) = 0
*(arg1 + 0xa0) = 0
*(arg1 + 0xa4) = 0
*(arg1 + 0xac) = 0
*(arg1 + 0xb0) = 0
*(arg1 + 0xb4) = 0
*(arg1 + 0xbc) = 0
*(arg1 + 0xc0) = 0
*(arg1 + 0xc4) = 0
*(arg1 + 0xcc) = 0
*(arg1 + 0xd0) = 0
*(arg1 + 0xd4) = 0
*(arg1 + 0xdc) = 0
*(arg1 + 0xe0) = 0
*(arg1 + 0xe4) = 0
*(arg1 + 0xec) = 0
*(arg1 + 0xf0) = 0
*(arg1 + 0xf4) = 0
*(arg1 + 0xfc) = 0
*(arg1 + 0x100) = 0
*(arg1 + 0x104) = 0
var_4.b = 0xd
*(arg1 + 0x114) = 0
int32_t* eax_3 = operator new(0x30)
void* var_28

if (eax_3 == 0)
    var_28 = nullptr
    struct std::exception::VTable* var_18
    std::exception::exception(&var_18, &var_28)
    var_18 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_18, 0x771508)
    noreturn

*(arg1 + 0x110) = eax_3
*eax_3 = eax_3
void* eax_4 = *(arg1 + 0x110)
*(eax_4 + 4) = eax_4
void* eax_5 = *(arg1 + 0x110)
*(eax_5 + 8) = eax_5
*(*(arg1 + 0x110) + 0x2c) = 1
*(*(arg1 + 0x110) + 0x2d) = 1
var_4.b = 0xe
*(arg1 + 0x124) = 0
int32_t* eax_7 = operator new(0x30)
int32_t var_2c
struct std::exception::VTable* var_24

if (eax_7 == 0)
    var_2c = 0
    std::exception::exception(&var_24, &var_2c)
    var_24 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_24, 0x771508)
    noreturn

*(arg1 + 0x120) = eax_7
*eax_7 = eax_7
void* eax_8 = *(arg1 + 0x120)
*(eax_8 + 4) = eax_8
void* eax_9 = *(arg1 + 0x120)
*(eax_9 + 8) = eax_9
*(*(arg1 + 0x120) + 0x2c) = 1
*(*(arg1 + 0x120) + 0x2d) = 1
var_4.b = 0xf
*(arg1 + 0x134) = 0
int32_t* eax_11 = sub_4ecfc0(1)
*(arg1 + 0x130) = eax_11
*eax_11 = eax_11
void* eax_12 = *(arg1 + 0x130)
*(eax_12 + 4) = eax_12
void* eax_13 = *(arg1 + 0x130)
*(eax_13 + 8) = eax_13
*(*(arg1 + 0x130) + 0x14) = 1
*(*(arg1 + 0x130) + 0x15) = 1
var_4.b = 0x10
*(arg1 + 0x144) = 0
int32_t* eax_14 = operator new(0x30)

if (eax_14 == 0)
    var_2c = 0
    std::exception::exception(&var_24, &var_2c)
    var_24 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_24, 0x771508)
    noreturn

*(arg1 + 0x140) = eax_14
*eax_14 = eax_14
void* eax_15 = *(arg1 + 0x140)
*(eax_15 + 4) = eax_15
void* eax_16 = *(arg1 + 0x140)
*(eax_16 + 8) = eax_16
*(*(arg1 + 0x140) + 0x2c) = 1
*(*(arg1 + 0x140) + 0x2d) = 1
*(arg1 + 0x14c) = 0
*(arg1 + 0x150) = 0
*(arg1 + 0x154) = 0xffffffff
*(arg1 + 0x158) = 0xffffffff
*(arg1 + 0x15c) = 0
*(arg1 + 0x160) = 0x64
*(arg1 + 0x164) = 0
*(arg1 + 0x168) = 0
*(arg1 + 0x16c) = &sys43vm::CVMFuncList::`vftable'{for `IVMFuncList'}
var_28 = arg1 + 0x16c
*(arg1 + 0x170) = 0
*(arg1 + 0x174) = 0
*(arg1 + 0x178) = 0
var_4.b = 0x12
*(arg1 + 0x188) = 0
int32_t* eax_18 = operator new(0x30)

if (eax_18 == 0)
    var_2c = 0
    std::exception::exception(&var_24, &var_2c)
    var_24 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_24, 0x771508)
    noreturn

*(arg1 + 0x184) = eax_18
*eax_18 = eax_18
void* eax_19 = *(arg1 + 0x184)
*(eax_19 + 4) = eax_19
void* eax_20 = *(arg1 + 0x184)
*(eax_20 + 8) = eax_20
*(*(arg1 + 0x184) + 0x2c) = 1
*(*(arg1 + 0x184) + 0x2d) = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
