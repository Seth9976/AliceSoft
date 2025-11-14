// 函数: sub_538600
// 地址: 0x538600
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* eax = *arg2

if (&eax[4] u> arg2[1])
    eax.b = 0
    return eax

uint32_t edi_6 = ((zx.d(eax[3]) << 8 | zx.d(eax[2])) << 8 | zx.d(eax[1])) << 8 | zx.d(*eax)
*arg2 = &eax[4]

if (edi_6 != 0)
    uint32_t eax_2
    
    if (sub_427ad0(arg1, edi_6).b == 0)
        eax_2.b = 0
        return eax_2
    
    int128_t* ecx_1
    
    if (arg1[1] != 0)
        ecx_1 = *arg1
    else
        ecx_1 = nullptr
    
    eax_2 = *arg2
    
    if (eax_2 + edi_6 u> arg2[1])
        eax_2.b = 0
        return eax_2
    
    sub_6c02a0(ecx_1, eax_2, edi_6)
    *arg2 += edi_6

uint32_t eax_1
eax_1.b = 1
return eax_1
