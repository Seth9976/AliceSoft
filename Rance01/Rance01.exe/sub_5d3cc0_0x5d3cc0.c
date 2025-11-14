// 函数: sub_5d3cc0
// 地址: 0x5d3cc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char eax = sub_5d3e70(arg2)

if (eax == 0)
    return eax

*(arg2 + 0x10) = arg1

if (arg1 != 0)
    (**arg1)()

*(arg2 + 0x14) = arg3

if (arg3 != 0)
    (**arg3)()

*(arg2 + 0x18) = arg4

if (arg4 != 0)
    (**arg4)()

*(arg2 + 0x1c) = arg5

if (arg5 != 0)
    (**arg5)()

*(arg2 + 0x20) = arg6

if (arg6 != 0)
    (**arg6)()

*(arg2 + 0x24) = *(arg2 + 0xc)
sub_5d6c00(arg2 + 0x24)

if (*(arg2 + 0x28) != 0)
    int32_t* edi_2 = *(arg2 + 0x28)
    (*(*edi_2 + 0x30))(edi_2, 0, 0, 1)

int32_t eax_7
eax_7.b = 1
return eax_7
