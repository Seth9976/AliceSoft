// 函数: sub_688d30
// 地址: 0x688d30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7159c7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &guiengine::CGUIListBoxModel::`vftable'{for `guiengine::CGUIModel'}
int32_t var_4 = 2
arg1[0x39].b = 0
arg1[0x38] = 0xffffffff
arg1[0x27] = 0
sub_401270(&arg1[0x20], nullptr, 0x72d04b)
arg1[0x1f].b = 1
arg1[0x1e] = 0
arg1[0x1d] = 0
arg1[0x1c] = 0x96
arg1[0x1b] = 0x10
arg1[0x1a] = 0xc8
arg1[0x19] = 0
arg1[0x18] = 0
arg1[0x17] = 0
arg1[2] = 0
int32_t* result = arg1[0x34]

if (result != 0)
    sub_405780(result, arg1[0x35])
    int32_t var_24_1 = arg1[0x34]
    result = sub_6b4d5b()

arg1[0x34] = 0
arg1[0x35] = 0
arg1[0x36] = 0

if (arg1[0x25] u>= 0x10)
    int32_t var_24_2 = arg1[0x20]
    result = sub_6b4d5b()

arg1[0x25] = 0xf
arg1[0x24] = 0
arg1[0x20].b = 0

if (arg1[9] u>= 0x10)
    int32_t var_24_3 = arg1[4]
    result = sub_6b4d5b()

arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
