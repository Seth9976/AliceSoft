// 函数: sub_687530
// 地址: 0x687530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7159fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_50 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &guiengine::CGUILabelModel::`vftable'{for `guiengine::CGUIModel'}
int32_t var_4 = 0
long double x87_r7 = float.t(0)
float var_24 = fconvert.s(x87_r7)
float var_20 = fconvert.s(x87_r7)
int32_t var_10 = 0xff
int32_t var_3c = 0
int32_t var_38
__builtin_memcpy(&var_38, 
    "\x10\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00", 0x14)
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_14 = 0
__builtin_memcpy(&arg1[0x12], &var_3c, 0x30)
arg1[0x1e].b = 0
int32_t* result = sub_401270(&arg1[0xb], nullptr, &data_72d06d)
*(arg1 + 0x29) = 0
arg1[0xa].b = 1
arg1[9] = 0xff
arg1[8] = 0x1e
arg1[7] = 0xc8
arg1[6] = 0
arg1[5] = 0
arg1[4] = 0
arg1[2] = 0

if (arg1[0x10] u>= 0x10)
    int32_t var_54_1 = arg1[0xb]
    result = sub_6b4d5b()

arg1[0x10] = 0xf
arg1[0xf] = 0
arg1[0xb].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
