// 函数: sub_651eb0
// 地址: 0x651eb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &dpparts::CPartsWindow::`vftable'{for `dpparts::CWindow'}
int32_t* eax = arg1[0x7c]

if (eax != 0)
    sub_405780(eax, arg1[0x7d])
    int32_t var_10_1 = arg1[0x7c]
    sub_6b4d5b()

arg1[0x7c] = 0
arg1[0x7d] = 0
arg1[0x7e] = 0
arg1[0x75] = &dpparts::CGuiScrollBar::`vftable'
arg1[0x6e] = &dpparts::CGuiScrollBar::`vftable'
sub_64e750(&arg1[0x47])
sub_64dd60(&arg1[0x27])

if (arg1[0x23] u>= 0x10)
    int32_t __saved_edi_1 = arg1[0x1e]
    sub_6b4d5b()

arg1[0x22] = 0
arg1[0x23] = 0xf
arg1[0x1e].b = 0
return sub_65e310(arg1) __tailcall
