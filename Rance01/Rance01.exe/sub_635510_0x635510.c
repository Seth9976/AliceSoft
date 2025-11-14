// 函数: sub_635510
// 地址: 0x635510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &dpparts::CChildWindow::`vftable'{for `dpparts::CWindow'}
int32_t* eax = arg1[0x54]

if (eax != 0)
    sub_405780(eax, arg1[0x55])
    int32_t var_10_1 = arg1[0x54]
    sub_6b4d5b()

arg1[0x54] = 0
arg1[0x55] = 0
arg1[0x56] = 0
arg1[0x4d] = &dpparts::CGuiScrollBar::`vftable'
arg1[0x46] = &dpparts::CGuiScrollBar::`vftable'
int32_t edx = sub_64e750(&arg1[0x1f])
void* eax_2 = arg1[0x1b]

if (eax_2 != 0)
    int32_t __saved_edi_1 = arg1[0x1c]
    sub_6367f0(eax_2, edx)
    int32_t var_10_2 = arg1[0x1b]
    sub_6b4d5b()

arg1[0x1b] = 0
arg1[0x1c] = 0
arg1[0x1d] = 0
return sub_65e310(arg1) __tailcall
