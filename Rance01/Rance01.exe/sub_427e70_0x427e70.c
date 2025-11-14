// 函数: sub_427e70
// 地址: 0x427e70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726a9b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::C3DLayerSprite::`vftable'{for `partsengine::CSprite'}
int32_t var_4 = 0
sub_428170(arg1)
int32_t var_4_1 = 0xffffffff
int32_t edi = arg1[2]

if (edi != 0xffffffff)
    sub_409390(edi)
    arg1[2] = 0xffffffff

struct partsengine::CSprite::partsengine::C3DLayerSprite::VTable** var_1c = arg1
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
