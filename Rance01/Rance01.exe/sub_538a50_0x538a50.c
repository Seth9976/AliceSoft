// 函数: sub_538a50
// 地址: 0x538a50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* eax = *arg2

if (&eax[4] u> arg2[1])
    eax.b = 0
    return eax

uint32_t edi_6 = ((zx.d(eax[3]) << 8 | zx.d(eax[2])) << 8 | zx.d(eax[1])) << 8 | zx.d(*eax)
*arg2 = &eax[4]
uint32_t eax_1

if (edi_6 != 0)
    sub_535aa0(arg1 + 0xcc, edi_6)
    int32_t ebx_1 = 0
    
    if (edi_6 s> 0)
        int32_t esi_3 = 0
        
        do
            if (sub_535910(arg2, *(arg1 + 0xcc) + esi_3).b == 0)
                eax_1.b = 0
                return eax_1
            
            ebx_1 += 1
            esi_3 += 0x2c
        while (ebx_1 s< edi_6)

eax_1.b = 1
return eax_1
