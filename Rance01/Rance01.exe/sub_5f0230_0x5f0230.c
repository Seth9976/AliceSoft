// 函数: sub_5f0230
// 地址: 0x5f0230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725ccc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CNumeralSprite::`vftable'{for `partsengine::CSprite'}
int32_t var_4 = 0
void* var_10_1 = &arg1[0xc9]
var_4.b = 4
sub_5e9cc0(&arg1[0xc9])
int32_t eax_3 = arg1[0xc9]

if (eax_3 != 0)
    int32_t var_24_1 = eax_3
    sub_6b4d5b()

arg1[0xc9] = 0
arg1[0xca] = 0
arg1[0xcb] = 0
var_4.b = 2
sub_6b54b3(&arg1[0x64], 0x1c, 0xc, sub_401110)
var_4.b = 1
sub_6b54b3(&arg1[0x10], 0x1c, 0xc, sub_401110)
int32_t result = arg1[0xc]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0

if (arg1[9] u>= 0x10)
    int32_t var_24_2 = arg1[4]
    result = sub_6b4d5b()

arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
