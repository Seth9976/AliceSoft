// 函数: sub_5814e0
// 地址: 0x5814e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7113fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &viewtrans::CTransition::`vftable'{for `IViewTransition'}
int32_t var_4 = 0
sub_581620(arg1)
int32_t* eax_3 = arg1[5]

if (eax_3 != 0)
    int32_t var_1c_1 = *eax_3
    sub_6b53b2()
    int32_t var_20_1 = arg1[5]
    sub_6b53b2()
    arg1[5] = 0
    arg1[6] = 0
    arg1[7] = 0

struct IViewTransition::viewtrans::CTransition::VTable** var_1c_2 = arg1
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
