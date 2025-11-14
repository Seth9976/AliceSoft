// 函数: sub_594bb0
// 地址: 0x594bb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71693a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct ISoundDevice::kiwi::CDummySoundDevice::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct ISoundDevice::kiwi::CDummySoundDevice::VTable** var_10_1 = arg1
*arg1 = &kiwi::CDummySoundDevice::`vftable'{for `ISoundDevice'}
int32_t var_4 = 1
sub_594db0(arg1)
var_4.b = 0
sub_594910(&arg1[0xc])
int32_t var_4_1 = 0xffffffff
sub_594910(&arg1[7])

if ((arg2 & 1) != 0)
    struct ISoundDevice::kiwi::CDummySoundDevice::VTable** var_1c_2 = arg1
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
