// 函数: sub_696150
// 地址: 0x696150
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718722
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[0x11] = fconvert.s(float.t(0))
arg1[2] = arg2
*arg1 = &guiengine::CGUIVScrollbarModel::`vftable'{for `guiengine::CGUIModel'}
arg1[1] = 1
arg1[3] = 0xffffffff
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7].b = 1
arg1[8] = 0
arg1[9] = 0
__builtin_memcpy(&arg1[0xa], 
    "\x18\x00\x00\x00\x00\x01\x00\x00\x18\x00\x00\x00\x18\x00\x00\x00\x64\x00\x00\x00\x01\x00\x00\x00", 
    0x18)
arg1[0x10] = 0
arg1[0x12] = 1
arg1[0x18] = 0xf
arg1[0x17] = 0
arg1[0x13].b = 0
sub_401270(&arg1[0x13], nullptr, 0x72cd71)
int32_t var_4 = 0
arg1[0x1f] = 0xf
arg1[0x1e] = 0
arg1[0x1a].b = 0
sub_401270(&arg1[0x1a], nullptr, 0x72cd72)
var_4.b = 1
arg1[0x26] = 0xf
arg1[0x25] = 0
arg1[0x21].b = 0
sub_401270(&arg1[0x21], nullptr, 0x72cd73)
var_4.b = 2
arg1[0x2d] = 0xf
arg1[0x2c] = 0
arg1[0x28].b = 0
sub_401270(&arg1[0x28], nullptr, 0x72cda5)
var_4.b = 3
arg1[0x34] = 0xf
arg1[0x33] = 0
arg1[0x2f].b = 0
sub_401270(&arg1[0x2f], nullptr, 0x72cda6)
arg1[0x36].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
