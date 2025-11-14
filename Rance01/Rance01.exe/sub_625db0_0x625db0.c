// 函数: sub_625db0
// 地址: 0x625db0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &dpvariable::CVarWnd::`vftable'{for `dpvariable::CTextChildWnd'}
uint32_t uIDEvent = arg1[0x50]

if (uIDEvent != 0)
    KillTimer(arg1[0x51], uIDEvent)
    arg1[0x50] = 0

void* eax_1 = arg1[0x3b]

if (eax_1 != 0)
    struct dpvariable::CTextChildWnd::dpvariable::CVarWnd::VTable** var_14_2 = arg1
    sub_62a5b0(eax_1, arg1[0x3c])
    int32_t var_18_1 = arg1[0x3b]
    sub_6b4d5b()

arg1[0x3b] = 0
arg1[0x3c] = 0
arg1[0x3d] = 0
*arg1 = &dpvariable::CTextChildWnd::`vftable'{for `dpvariable::CWindow'}
return sub_62a7c0(arg1)
