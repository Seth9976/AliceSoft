// 函数: sub_578640
// 地址: 0x578640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_710c68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct viewtrans::CDXTransitionType::viewtrans::CDXTransitionCrossFade::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct viewtrans::CDXTransitionType::viewtrans::CDXTransitionCrossFade::VTable** var_10_1 = arg1
*arg1 = &viewtrans::CDXTransitionCrossFade::`vftable'{for `viewtrans::CDXTransitionType'}
int32_t var_4 = 0
int32_t* ecx = arg1[2]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[2] = 0

int32_t* ecx_1 = arg1[1]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[1] = 0

*arg1 = &viewtrans::CDXTransitionType::`vftable'

if ((arg2 & 1) != 0)
    struct viewtrans::CDXTransitionType::viewtrans::CDXTransitionCrossFade::VTable** var_1c_1 = arg1
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
