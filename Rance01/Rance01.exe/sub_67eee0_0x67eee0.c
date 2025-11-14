// 函数: sub_67eee0
// 地址: 0x67eee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
int32_t ecx = *ebx
int32_t eax = ebx[1]

if (ecx == eax)
    eax.b = 1
    return eax

int32_t eax_2 = (eax - ecx) s>> 2
arg2 = eax_2
char eax_4 = (*(*arg1 + 0x18))(&arg2, 1)

if (eax_4 == 0)
    return eax_4

sub_6c02a0((*(*arg1 + 0x10))(0), *ebx, eax_2 << 2)
int128_t* eax_8
eax_8.b = 1
return eax_8
