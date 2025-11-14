// 函数: sub_42f600
// 地址: 0x42f600
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722a5b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CFlatTimeLineData::`vftable'{for `IInterface'}
int32_t var_4 = 0
sub_42f670(arg1)
int32_t eax_3 = arg1[2]

if (eax_3 != 0)
    int32_t var_1c_1 = eax_3
    sub_6b4d5b()

struct IInterface::partsengine::CFlatTimeLineData::VTable** var_1c_2 = arg1
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
