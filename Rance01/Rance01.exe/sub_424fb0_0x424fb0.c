// 函数: sub_424fb0
// 地址: 0x424fb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711f1b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IJoystick::ibis::CJoystick::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IJoystick::ibis::CJoystick::VTable** var_10_1 = arg1
*arg1 = &ibis::CJoystick::`vftable'{for `IJoystick'}
int32_t var_4 = 0
sub_425240(arg1)
int32_t* eax_3 = arg1[2]

if (eax_3 != 0)
    (*(*eax_3 + 8))(eax_3)
    arg1[2] = 0

int32_t eax_4 = arg1[4]

if (eax_4 != 0)
    int32_t var_20_2 = eax_4
    sub_6b4d5b()

arg1[4] = 0
arg1[5] = 0
arg1[6] = 0

if ((arg2 & 1) != 0)
    struct IJoystick::ibis::CJoystick::VTable** var_20_3 = arg1
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
