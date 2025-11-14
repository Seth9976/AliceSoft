// 函数: sub_57a5c0
// 地址: 0x57a5c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711463
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct viewtrans::CDXTransitionType::viewtrans::CDXTransitionPolyExplosion::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &viewtrans::CDXTransitionPolyExplosion::`vftable'{for `viewtrans::CDXTransitionType'}
int32_t var_4 = 1
int32_t* ecx = arg1[0x19]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x19] = 0

int32_t* ecx_1 = arg1[0x18]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[0x18] = 0

sub_57b9e0(&arg1[0x13], &var_10, arg1[0x13], arg1[0x14])
int32_t result = arg1[0x13]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[0x13] = 0
arg1[0x14] = 0
arg1[0x15] = 0
*arg1 = &viewtrans::CDXTransitionType::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
