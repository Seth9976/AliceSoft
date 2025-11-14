// 函数: sub_4309c0
// 地址: 0x4309c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71364b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CFlatKeyDataGraphic::`vftable'{for `partsengine::IKeyData'}
int32_t var_4 = 0
sub_430930(arg1)

if (arg1[7] u>= 0x10)
    int32_t var_18_1 = arg1[2]
    sub_6b4d5b()

arg1[7] = 0xf
arg1[6] = 0
struct partsengine::IKeyData::partsengine::CFlatKeyDataGraphic::VTable** var_18_2 = arg1
arg1[2].b = 0
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
