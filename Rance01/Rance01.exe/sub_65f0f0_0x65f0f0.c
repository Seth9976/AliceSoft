// 函数: sub_65f0f0
// 地址: 0x65f0f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712376
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &dpparts::DPParts::`vftable'{for `IJaffaDebugPlugin'}
int32_t var_4 = 1
int32_t* ecx = arg1[6]

if (ecx != 0)
    result = (*(*ecx + 4))(1)
    arg1[6] = 0

if (arg1[0x13] u>= 0x10)
    int32_t var_1c_1 = arg1[0xe]
    result = sub_6b4d5b()

arg1[0x13] = 0xf
arg1[0x12] = 0
arg1[0xe].b = 0

if (arg1[0xc] u>= 0x10)
    int32_t var_1c_2 = arg1[7]
    result = sub_6b4d5b()

arg1[0xc] = 0xf
arg1[0xb] = 0
arg1[7].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
