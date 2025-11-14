// 函数: sub_61b450
// 地址: 0x61b450
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg1
int32_t* eax = operator new(0x48)
int32_t* edi

if (eax == 0)
    edi = nullptr
else
    *eax = 0
    eax[1] = 0
    eax[2].b = 0
    eax[8] = 0xf
    eax[7] = 0
    eax[3].b = 0
    eax[0xa] = 0
    eax[0xb] = 0
    eax[0xc] = 0
    eax[0xe] = 0
    eax[0xf] = 0
    eax[0x10] = 0
    edi = eax

*edi = *ebx
int32_t ecx = ebx[1]
arg1 = edi
int32_t* esi
sub_61b340(esi, edi, arg3, ecx)
sub_61b5a0(&arg1, &ebx[0xa])
return arg1
