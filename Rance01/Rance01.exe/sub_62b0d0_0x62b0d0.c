// 函数: sub_62b0d0
// 地址: 0x62b0d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718f35
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 8) = 0
int32_t* eax_3 = operator new(0x34)

if (eax_3 == 0)
    int32_t var_1c = 0
    struct std::exception::VTable* var_18
    std::exception::exception(&var_18, &var_1c)
    var_18 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_18, 0x771508)
    noreturn

*(arg1 + 4) = eax_3
*eax_3 = eax_3
void* eax_4 = *(arg1 + 4)
*(eax_4 + 4) = eax_4
void* eax_5 = *(arg1 + 4)
*(eax_5 + 8) = eax_5
*(*(arg1 + 4) + 0x30) = 1
*(*(arg1 + 4) + 0x31) = 1
int32_t var_4 = 0
*(arg1 + 0x10) = &dplogviewer::CDIBSurface::`vftable'{for `ISurface'}
*(arg1 + 0x14) = 0
__builtin_memset(arg1 + 0x18, 0, 0x30)
var_4.b = 1
*(arg1 + 0x48) = 0x10
*(arg1 + 0x60) = 0xf
*(arg1 + 0x5c) = 0
*(arg1 + 0x4c) = 0
sub_401270(arg1 + 0x4c, 0xd, 0x733ccc)
*(arg1 + 0x68) = 0x190
*(arg1 + 0x6c) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
