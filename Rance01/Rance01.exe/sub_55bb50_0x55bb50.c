// 函数: sub_55bb50
// 地址: 0x55bb50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_716d3a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 8) = 0
int32_t* eax_3 = sub_4ecfc0(1)
*(arg1 + 4) = eax_3
*eax_3 = eax_3
void* eax_4 = *(arg1 + 4)
*(eax_4 + 4) = eax_4
void* eax_5 = *(arg1 + 4)
*(eax_5 + 8) = eax_5
*(*(arg1 + 4) + 0x14) = 1
*(*(arg1 + 4) + 0x15) = 1
int32_t var_4 = 0
*(arg1 + 0x18) = 0
int32_t* eax_7 = operator new(0x30)

if (eax_7 == 0)
    int32_t var_1c = 0
    struct std::exception::VTable* var_18
    std::exception::exception(&var_18, &var_1c)
    var_18 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_18, 0x771508)
    noreturn

*(arg1 + 0x14) = eax_7
*eax_7 = eax_7
void* eax_8 = *(arg1 + 0x14)
*(eax_8 + 4) = eax_8
void* eax_9 = *(arg1 + 0x14)
*(eax_9 + 8) = eax_9
*(*(arg1 + 0x14) + 0x2c) = 1
*(*(arg1 + 0x14) + 0x2d) = 1
*(arg1 + 0x20) = 0xffffffff
*(arg1 + 0x24) = 0xffffffff
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
