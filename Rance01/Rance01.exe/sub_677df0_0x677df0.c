// 函数: sub_677df0
// 地址: 0x677df0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7276db
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &guiengine::CGUICGBoxModel::`vftable'{for `guiengine::CGUIModel'}
int32_t var_4 = 0
__builtin_memset(&arg1[0x13], 0, 0x19)
int32_t* result = sub_401270(&arg1[0xc], nullptr, 0x72d295)
arg1[0xb].w = 1
arg1[0xa] = 0
arg1[9] = 0xff
arg1[8] = 0x1e
arg1[7] = 0xc8
arg1[6] = 0
arg1[5] = 0
arg1[4] = 0
arg1[2] = 0

if (arg1[0x11] u>= 0x10)
    int32_t var_24_1 = arg1[0xc]
    result = sub_6b4d5b()

arg1[0x11] = 0xf
arg1[0x10] = 0
arg1[0xc].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
