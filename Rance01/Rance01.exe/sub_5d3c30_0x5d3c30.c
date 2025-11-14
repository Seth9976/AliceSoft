// 函数: sub_5d3c30
// 地址: 0x5d3c30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7164b5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct ISoundDevice::kiwi::CDirectSound::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct ISoundDevice::kiwi::CDirectSound::VTable** var_10_1 = arg1
*arg1 = &kiwi::CDirectSound::`vftable'{for `ISoundDevice'}
int32_t var_4 = 2
sub_5d40d0(arg1)
var_4.b = 1
sub_5d3a30(&arg1[0x11])
var_4.b = 0
sub_5d3a30(&arg1[0xb])
int32_t var_4_1 = 0xffffffff
int32_t* result = arg1[0xa]

if (result != 0)
    result = (*(*result + 8))(result)
    arg1[0xa] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
