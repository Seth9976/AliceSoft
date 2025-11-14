// 函数: sub_5ded10
// 地址: 0x5ded10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723601
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CCGSprite::`vftable'{for `partsengine::CSprite'}
int32_t var_4 = 2
int32_t edi = arg1[0x19]

if (edi != 0xffffffff)
    result = sub_409390(edi)
    arg1[0x19] = 0xffffffff

if (arg1[0x15] u>= 0x10)
    int32_t var_20_1 = arg1[0x10]
    result = sub_6b4d5b()

arg1[0x15] = 0xf
arg1[0x14] = 0
arg1[0x10].b = 0

if (arg1[0xd] u>= 0x10)
    int32_t var_20_2 = arg1[8]
    result = sub_6b4d5b()

arg1[0xd] = 0xf
arg1[0xc] = 0
arg1[8].b = 0

if (arg1[6] u>= 0x10)
    int32_t var_20_3 = arg1[1]
    result = sub_6b4d5b()

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
