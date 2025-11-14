// 函数: sub_5074f0
// 地址: 0x5074f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg1
char* eax = *ebx

if (&eax[4] u> ebx[1])
    eax.b = 0
    return eax

uint32_t edi_6 = ((zx.d(eax[3]) << 8 | zx.d(eax[2])) << 8 | zx.d(eax[1])) << 8 | zx.d(*eax)
*ebx = &eax[4]
sub_65a090(arg2, edi_6)
int32_t edx_2 = 0
int32_t eax_2

if (edi_6 s> 0)
    do
        int32_t* ecx_2 = *arg2 + (edx_2 << 2)
        char* ecx_3 = *ebx
        
        if (&ecx_3[4] u> ebx[1])
            int32_t eax_3
            eax_3.b = 0
            return eax_3
        
        eax_2 = ((zx.d(ecx_3[3]) << 8 | zx.d(ecx_3[2])) << 8 | zx.d(ecx_3[1])) << 8 | zx.d(*ecx_3)
        edx_2 += 1
        *ebx = &ecx_3[4]
        *ecx_2 = eax_2
    while (edx_2 s< edi_6)

eax_2.b = 1
return eax_2
