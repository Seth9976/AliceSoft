// 函数: sub_59d7e0
// 地址: 0x59d7e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 == 0)
    arg1.b = 0
    return arg1

int128_t* eax = arg1[1]
int128_t* ebx = *arg1

if (ebx != eax)
    void* edi_2 = 0
    sub_6b49d0(ebx, eax, edi_2)
    arg1[1] = edi_2 + ebx

sub_404f60(arg2, arg1)
int128_t* eax_2
eax_2.b = 1
return eax_2
