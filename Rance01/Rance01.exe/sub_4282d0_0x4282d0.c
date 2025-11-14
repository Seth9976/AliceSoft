// 函数: sub_4282d0
// 地址: 0x4282d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718184
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
long double x87_r7 = float.t(0)
arg1[5] = fconvert.s(x87_r7)
arg1[6] = fconvert.s(x87_r7)
*arg1 = &partsengine::CFlatData::`vftable'{for `IInterface'}
arg1[1] = 1
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
arg1[0xc] = 0
int32_t* eax_3 = operator new(0x30)

if (eax_3 == 0)
    int32_t var_34 = 0
    struct std::exception::VTable* var_18
    std::exception::exception(&var_18, &var_34)
    var_18 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_18, 0x771508)
    noreturn

arg1[0xb] = eax_3
*eax_3 = eax_3
void* eax_4 = arg1[0xb]
*(eax_4 + 4) = eax_4
void* eax_5 = arg1[0xb]
*(eax_5 + 8) = eax_5
*(arg1[0xb] + 0x2c) = 1
*(arg1[0xb] + 0x2d) = 1
int32_t var_4 = 0
arg1[0x10] = 0
int32_t* eax_7 = operator new(0x30)
int32_t var_38
struct std::exception::VTable* var_24

if (eax_7 == 0)
    var_38 = 0
    std::exception::exception(&var_24, &var_38)
    var_24 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_24, 0x771508)
    noreturn

arg1[0xf] = eax_7
*eax_7 = eax_7
void* eax_8 = arg1[0xf]
*(eax_8 + 4) = eax_8
void* eax_9 = arg1[0xf]
*(eax_9 + 8) = eax_9
*(arg1[0xf] + 0x2c) = 1
*(arg1[0xf] + 0x2d) = 1
var_4.b = 1
arg1[0x14] = 0
int32_t* eax_11 = operator new(0x30)
int32_t var_3c
struct std::exception::VTable* var_30

if (eax_11 == 0)
    var_3c = 0
    std::exception::exception(&var_30, &var_3c)
    var_30 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_30, 0x771508)
    noreturn

arg1[0x13] = eax_11
*eax_11 = eax_11
void* eax_12 = arg1[0x13]
*(eax_12 + 4) = eax_12
void* eax_13 = arg1[0x13]
*(eax_13 + 8) = eax_13
*(arg1[0x13] + 0x2c) = 1
*(arg1[0x13] + 0x2d) = 1
var_4.b = 2
arg1[0x18] = 0
int32_t* eax_14 = operator new(0x30)

if (eax_14 == 0)
    var_38 = 0
    std::exception::exception(&var_24, &var_38)
    var_24 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_24, 0x771508)
    noreturn

arg1[0x17] = eax_14
*eax_14 = eax_14
void* eax_15 = arg1[0x17]
*(eax_15 + 4) = eax_15
void* eax_16 = arg1[0x17]
*(eax_16 + 8) = eax_16
*(arg1[0x17] + 0x2c) = 1
*(arg1[0x17] + 0x2d) = 1
var_4.b = 3
arg1[0x1c] = 0
int32_t* eax_18 = operator new(0x30)

if (eax_18 == 0)
    var_3c = 0
    std::exception::exception(&var_30, &var_3c)
    var_30 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_30, 0x771508)
    noreturn

arg1[0x1b] = eax_18
*eax_18 = eax_18
void* eax_19 = arg1[0x1b]
*(eax_19 + 4) = eax_19
void* eax_20 = arg1[0x1b]
*(eax_20 + 8) = eax_20
*(arg1[0x1b] + 0x2c) = 1
*(arg1[0x1b] + 0x2d) = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
