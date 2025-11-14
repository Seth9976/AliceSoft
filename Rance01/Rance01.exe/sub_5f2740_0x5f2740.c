// 函数: sub_5f2740
// 地址: 0x5f2740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7163b6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInterface::partsengine::CParts::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::partsengine::CParts::VTable** var_10_1 = arg1
*arg1 = &partsengine::CParts::`vftable'{for `IInterface'}
int32_t var_4 = 6
int32_t* ecx = arg1[0xb]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0xb] = 0

int32_t* ecx_1 = arg1[0xc]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[0xc] = 0

sub_5f2830(arg1)
(*(arg1[3]->__offset(0x0).d + 4))(eax_2)
arg1[3] = 0
int32_t eax_6 = arg1[0x2d]

if (eax_6 != 0)
    int32_t var_20_1 = eax_6
    sub_6b4d5b()

arg1[0x2d] = 0
arg1[0x2e] = 0
arg1[0x2f] = 0
sub_434640(&arg1[0x29])
sub_434640(&arg1[0x25])
sub_434640(&arg1[0x21])
sub_434640(&arg1[0x1d])
sub_434640(&arg1[0x19])
int32_t result = sub_434640(&arg1[0x15])
fsbase->NtTib.ExceptionList = ExceptionList
return result
