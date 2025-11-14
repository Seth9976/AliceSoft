// 函数: sub_5ee210
// 地址: 0x5ee210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
char* eax = *arg1

if (&eax[4] u> arg1[1])
    eax.b = 0
    return eax

uint32_t edx_1 = zx.d(eax[1])
uint32_t ebx_6 = ((zx.d(eax[3]) << 8 | zx.d(eax[2])) << 8 | edx_1) << 8 | zx.d(*eax)
*arg1 = &eax[4]
sub_5ee340(ebx_6, edx_1, &eax[4], arg2)
int32_t edi_1 = 0
uint32_t* eax_3

if (ebx_6 s> 0)
    var_4 = 0
    
    do
        uint32_t* ebp_2 = *arg2 + var_4
        
        if (sub_410070(arg1, &ebp_2[4]).b == 0)
            eax_3.b = 0
            return eax_3
        
        if (sub_410070(arg1, &ebp_2[0xb]).b == 0)
            eax_3.b = 0
            return eax_3
        
        eax_3 = *arg1
        
        if (&eax_3[1] u> arg1[1])
            eax_3.b = 0
            return eax_3
        
        *ebp_2 = ((zx.d(*(eax_3 + 3)) << 8 | zx.d(*(eax_3 + 2))) << 8 | zx.d(*(eax_3 + 1))) << 8
            | zx.d(*eax_3)
        *arg1 += 4
        eax_3 = *arg1
        
        if (&eax_3[1] u> arg1[1])
            eax_3.b = 0
            return eax_3
        
        ebp_2[1] = ((zx.d(*(eax_3 + 3)) << 8 | zx.d(*(eax_3 + 2))) << 8 | zx.d(*(eax_3 + 1))) << 8
            | zx.d(*eax_3)
        *arg1 += 4
        
        if (sub_5546f0(arg1, &ebp_2[2]).b == 0)
            eax_3.b = 0
            return eax_3
        
        if (sub_5546f0(arg1, &ebp_2[3]).b == 0)
            eax_3.b = 0
            return eax_3
        
        var_4 += 0x6c
        edi_1 += 1
        ebp_2[0x12].b = 0
    while (edi_1 s< ebx_6)

eax_3.b = 1
return eax_3
