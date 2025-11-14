// 函数: sub_61c180
// 地址: 0x61c180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d624
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_62a700(arg1)
int32_t var_4 = 0
arg1[0x2c] = &IJaffaDebugPlugin::`vftable'{for `IInterface'}
*arg1 = &dpvariable::CApp::`vftable'{for `dpvariable::CWindow'}
arg1[0x2c] = &dpvariable::CApp::`vftable'{for `IJaffaDebugPlugin'}
arg1[0x2d] = 1
arg1[0x2e] = 0
arg1[0x34] = 0xf
arg1[0x33] = 0
arg1[0x2f].b = 0
sub_62a700(&arg1[0x36])
arg1[0x36] = &dpvariable::CSplitWndLR::`vftable'{for `dpvariable::CWindow'}
arg1[0x62] = LoadCursorA(nullptr, 0x7f84)
arg1[0x63].b = 0
arg1[0x64] = 0
arg1[0x65] = 0
arg1[0x66] = 0
arg1[0x67] = 0
var_4.b = 2
sub_61fdb0(&arg1[0x68])
sub_625c60(&arg1[0xe2])
int32_t (__fastcall* var_24_1)(struct dpvariable::CTextChildWnd::dpvariable::CVarWnd::VTable** 
    arg1) = sub_625db0
var_4.b = 4
sub_6b5516(&arg1[0x141], 0x17c, 4, sub_625c60)
var_4.b = 5
arg1[0x2bd] = 0
arg1[0x2be] = 0
arg1[0x2bf] = 0x10
arg1[0x2c5] = 0xf
arg1[0x2c4] = 0
arg1[0x2c0].b = 0
sub_401270(&arg1[0x2c0], 0xd, 0x734274)
arg1[0x2c7] = 0x190
arg1[0x2c8].w = 0
arg1[0x2c9] = 0
arg1[0x2ca] = 0
arg1[0x2cb] = 0
sub_62a700(&arg1[0x2cc])
arg1[0x2cc] = &dpvariable::CCheckBoxWindow::`vftable'{for `dpvariable::CWindow'}
arg1[0x2f8] = 0
arg1[0x2f9] = 0
arg1[0x2fa] = 0
arg1[0x2fb] = 0
arg1[0x2fd] = &dpvariable::CStatusBar::`vftable'
arg1[0x303] = 0
arg1[0x304] = 0xf
arg1[0x2ff].b = 0
arg1[0x2fe] = 0
arg1[0x306].w = 0
arg1[0x307] = 0
arg1[0x30d] = 0xf
arg1[0x30c] = 0
arg1[0x308].b = 0
arg1[0x314] = 0xf
arg1[0x313] = 0
arg1[0x30f].b = 0
var_4.b = 8
sub_622580(&arg1[0x316])
arg1[0x33b] = 0
arg1[0x33c] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
