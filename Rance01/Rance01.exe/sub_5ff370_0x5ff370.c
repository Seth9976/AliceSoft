// 函数: sub_5ff370
// 地址: 0x5ff370
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725beb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CVGaugeSprite::`vftable'{for `partsengine::CSprite'}
int32_t var_4 = 0
int32_t edi = arg1[0xb]

if (edi != 0xffffffff)
    sub_409390(edi)
    arg1[0xb] = 0xffffffff

if (arg1[7] u>= 0x10)
    int32_t var_1c_1 = arg1[2]
    sub_6b4d5b()

arg1[7] = 0xf
arg1[6] = 0
struct partsengine::CSprite::partsengine::CVGaugeSprite::VTable** var_1c_2 = arg1
arg1[2].b = 0
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
