// 函数: sub_6a6160
// 地址: 0x6a6160
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &dpsound::CMainWindow::`vftable'{for `dpsound::CWindow'}
uint32_t uIDEvent = arg1[0x46]

if (uIDEvent != 0)
    KillTimer(arg1[0x47], uIDEvent)
    arg1[0x46] = 0

if (arg1[0x39] u>= 0x10)
    int32_t var_14_2 = arg1[0x34]
    sub_6b4d5b()

arg1[0x39] = 0xf
arg1[0x38] = 0
arg1[0x34].b = 0

if (arg1[0x32] u>= 0x10)
    int32_t var_14_3 = arg1[0x2d]
    sub_6b4d5b()

arg1[0x32] = 0xf
arg1[0x31] = 0
arg1[0x2d].b = 0

if (arg1[0x2b] u>= 0x10)
    int32_t var_14_4 = arg1[0x26]
    sub_6b4d5b()

arg1[0x2b] = 0xf
arg1[0x2a] = 0
arg1[0x26].b = 0

if (arg1[0x24] u>= 0x10)
    int32_t var_14_5 = arg1[0x1f]
    sub_6b4d5b()

arg1[0x24] = 0xf
arg1[0x23] = 0
arg1[0x1f].b = 0

if (arg1[0x1d] u>= 0x10)
    int32_t __saved_ebp_2 = arg1[0x18]
    sub_6b4d5b()

arg1[0x1d] = 0xf
arg1[0x1c] = 0
arg1[0x18].b = 0
return sub_6b1730(arg1) __tailcall
