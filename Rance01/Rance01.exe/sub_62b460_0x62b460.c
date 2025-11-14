// 函数: sub_62b460
// 地址: 0x62b460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &dplogviewer::CSurface::`vftable'{for `ISurface'}
sub_62ef50(arg1)
int32_t eax = arg1[0xd]

if (eax != 0)
    int32_t var_c_1 = eax
    sub_6b4d5b()

arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = 0
int32_t eax_1 = arg1[9]

if (eax_1 != 0)
    int32_t var_c_2 = eax_1
    sub_6b4d5b()

struct ISurface::dplogviewer::CSurface::VTable** var_c_3 = arg1
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 0
sub_6b4d5b()
return arg1
