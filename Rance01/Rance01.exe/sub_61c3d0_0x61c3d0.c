// 函数: sub_61c3d0
// 地址: 0x61c3d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719244
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &dpvariable::CApp::`vftable'{for `dpvariable::CWindow'}
arg1[0x2c] = &dpvariable::CApp::`vftable'{for `IJaffaDebugPlugin'}
int32_t var_4 = 8
uint32_t uIDEvent = arg1[0x33b]

if (uIDEvent != 0)
    KillTimer(arg1[0x33c], uIDEvent)
    arg1[0x33b] = 0

sub_6226f0(&arg1[0x316])
sub_61fab0(&arg1[0x2fd])
int32_t eax_4 = arg1[0x2f9]

if (eax_4 != 0)
    int32_t var_20_3 = eax_4
    sub_6b4d5b()

arg1[0x2f9] = 0
arg1[0x2fa] = 0
arg1[0x2fb] = 0
sub_62a7c0(&arg1[0x2cc])
HGDIOBJ ho = arg1[0x2be]

if (ho != 0)
    DeleteObject(ho)
    arg1[0x2be] = 0

if (arg1[0x2c5] u>= 0x10)
    int32_t var_20_5 = arg1[0x2c0]
    sub_6b4d5b()

arg1[0x2c5] = 0xf
arg1[0x2c4] = 0
arg1[0x2c0].b = 0
var_4.b = 4
sub_6b54b3(&arg1[0x141], 0x17c, 4, sub_625db0)
sub_625db0(&arg1[0xe2])
sub_620050(&arg1[0x68])
arg1[0x36] = &dpvariable::CSplitWndLR::`vftable'{for `dpvariable::CWindow'}
sub_62a7c0(&arg1[0x36])

if (arg1[0x34] u>= 0x10)
    int32_t var_20_7 = arg1[0x2f]
    sub_6b4d5b()

arg1[0x34] = 0xf
arg1[0x33] = 0
arg1[0x2f].b = 0
int32_t result = sub_62a7c0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
