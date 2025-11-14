// 函数: sub_5e9ee0
// 地址: 0x5e9ee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724506
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CLoopCGSprite::`vftable'{for `partsengine::CSprite'}
int32_t var_4 = 1
sub_5e9f90(arg1)

if (arg1[0xb] u>= 0x10)
    int32_t var_1c_1 = arg1[6]
    sub_6b4d5b()

arg1[0xb] = 0xf
arg1[0xa] = 0
arg1[6].b = 0
int32_t result = arg1[2]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
