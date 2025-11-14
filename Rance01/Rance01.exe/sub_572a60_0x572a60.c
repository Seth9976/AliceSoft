// 函数: sub_572a60
// 地址: 0x572a60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_572ae0(arg1)
int32_t __saved_ebx_3 = arg1[0xe]

if (__saved_ebx_3 != 0)
    int32_t __saved_ebx_1 = __saved_ebx_3
    sub_6b4d5b()

arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10] = 0
*arg1 = &chipmunk::CSurface8bpp::`vftable'{for `ISurface'}
int128_t* eax = arg1[3]
int128_t* ebx = arg1[2]

if (ebx != eax)
    void* edi_2 = 0
    sub_6b49d0(ebx, eax, edi_2)
    arg1[3] = edi_2 + ebx

arg1[6] = 0
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
int32_t result = arg1[2]

if (result != 0)
    int32_t __saved_ebx_2 = result
    result = sub_6b4d5b()

arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
return result
