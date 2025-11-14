// 函数: sub_6ae3b0
// 地址: 0x6ae3b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71203b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_28 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 0
arg1[0xd].w = 0
*(arg1 + 0x36) = 0
arg1[0x13] = 0xf
arg1[0x12] = 0
arg1[0xe].b = 0
int32_t var_4 = 0
arg1[0x15] = 0xffffff
arg1[0x16] = 0
arg1[0x17] = 0
arg1[0x18] = 0
arg1[0x19] = 0
arg1[0x1c] = 0
int32_t* eax_3 = operator new(0x34)

if (eax_3 == 0)
    int32_t var_1c = 0
    struct std::exception::VTable* var_18
    std::exception::exception(&var_18, &var_1c)
    var_18 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_18, 0x771508)
    noreturn

arg1[0x1b] = eax_3
*eax_3 = eax_3
void* eax_4 = arg1[0x1b]
*(eax_4 + 4) = eax_4
void* eax_5 = arg1[0x1b]
*(eax_5 + 8) = eax_5
*(arg1[0x1b] + 0x30) = 1
*(arg1[0x1b] + 0x31) = 1
arg1[0x1e] = 0
arg1[0x1f] = 0
arg1[0x20] = 0
arg1[0x22] = 0
arg1[0x23] = 0
arg1[0x24] = 0
arg1[0x26] = 0
arg1[0x27] = 0
arg1[0x28] = 0
arg1[0x2a] = 0
arg1[0x2b] = 0
arg1[0x2c] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
