// 函数: sub_582fb0
// 地址: 0x582fb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_710ba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct viewtrans::CTransitionType::viewtrans::CTransitionCrossFadeSepiaNoize::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct viewtrans::CTransitionType::viewtrans::CTransitionCrossFadeSepiaNoize::VTable** var_10_1 =
    arg1
*arg1 = &viewtrans::CTransitionCrossFadeSepiaNoize::`vftable'{for `viewtrans::CTransitionType'}
int32_t var_4 = 0
int32_t* ecx = arg1[3]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[3] = 0

*arg1 = &viewtrans::CTransitionType::`vftable'

if ((arg2 & 1) != 0)
    struct viewtrans::CTransitionType::viewtrans::CTransitionCrossFadeSepiaNoize::VTable** 
        var_1c_1 = arg1
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
