// 函数: sub_430fa0
// 地址: 0x430fa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725beb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CFlatSprite::`vftable'{for `partsengine::CSprite'}
int32_t var_4 = 0
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0
int32_t* ecx = arg1[0x10]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x10] = 0

if (arg1[7] u>= 0x10)
    int32_t var_1c_1 = arg1[2]
    sub_6b4d5b()

arg1[7] = 0xf
arg1[6] = 0
struct partsengine::CSprite::partsengine::CFlatSprite::VTable** var_1c_2 = arg1
arg1[2].b = 0
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
