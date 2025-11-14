// 函数: sub_42f490
// 地址: 0x42f490
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b53b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CFlatStopMotionData::`vftable'{for `IInterface'}
int32_t var_4 = 0
arg1[0xa] = 0
arg1[9] = 0
sub_401270(&arg1[2], nullptr, 0x72da55)

if (arg1[7] u>= 0x10)
    int32_t var_24_1 = arg1[2]
    sub_6b4d5b()

arg1[7] = 0xf
arg1[6] = 0
struct IInterface::partsengine::CFlatStopMotionData::VTable** var_24_2 = arg1
arg1[2].b = 0
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
