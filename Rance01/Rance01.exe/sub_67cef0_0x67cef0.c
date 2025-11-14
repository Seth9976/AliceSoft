// 函数: sub_67cef0
// 地址: 0x67cef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715aa4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &guiengine::CGUIComboBoxModel::`vftable'{for `guiengine::CGUIModel'}
int32_t var_4 = 2
arg1[0x39].b = 0
sub_401270(&arg1[0x26], nullptr, 0x72d197)
sub_401270(&arg1[0x1f], nullptr, 0x72d1a6)
int32_t result = 0x10
arg1[0x1e].b = 1
arg1[0x1d] = 0
arg1[0x1c] = 0
arg1[0x1b] = 0x10
arg1[0x1a] = 0xc8
arg1[0x19] = 0
arg1[0x18] = 0
arg1[0x17] = 0
arg1[2] = 0

if (arg1[0x2b] u>= 0x10)
    int32_t var_24_1 = arg1[0x26]
    sub_6b4d5b()
    result = 0x10

arg1[0x2b] = 0xf
arg1[0x2a] = 0
arg1[0x26].b = 0

if (arg1[0x24] u>= 0x10)
    int32_t var_24_2 = arg1[0x1f]
    sub_6b4d5b()
    result = 0x10

arg1[0x24] = 0xf
arg1[0x23] = 0
arg1[0x1f].b = 0

if (arg1[9] u>= 0x10)
    int32_t var_24_3 = arg1[4]
    result = sub_6b4d5b()

arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
