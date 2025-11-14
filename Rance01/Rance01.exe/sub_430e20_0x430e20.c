// 函数: sub_430e20
// 地址: 0x430e20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b50b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CFlatKeyDataSound::`vftable'{for `partsengine::IKeyData'}
int32_t var_4 = 0
sub_401270(&arg1[2], nullptr, 0x72da36)

if (arg1[7] u>= 0x10)
    int32_t var_20_1 = arg1[2]
    sub_6b4d5b()

arg1[7] = 0xf
arg1[6] = 0
struct partsengine::IKeyData::partsengine::CFlatKeyDataSound::VTable** var_20_2 = arg1
arg1[2].b = 0
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
