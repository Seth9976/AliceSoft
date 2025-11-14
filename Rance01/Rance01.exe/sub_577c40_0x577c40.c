// 函数: sub_577c40
// 地址: 0x577c40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_710ce3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct viewtrans::CDXTransitionType::viewtrans::CDXTransitionBlindTBLR::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = data_78c474 ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct viewtrans::CDXTransitionType::viewtrans::CDXTransitionBlindTBLR::VTable** var_10_1 = arg1
*arg1 = &viewtrans::CDXTransitionBlindTBLR::`vftable'{for `viewtrans::CDXTransitionType'}
int32_t var_4 = 1
int32_t* ecx = arg1[6]

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    arg1[6] = 0

arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
var_4.b = 0
int32_t* ecx_1 = arg1[1]

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)
    arg1[1] = 0

arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
*arg1 = &viewtrans::CDXTransitionType::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
