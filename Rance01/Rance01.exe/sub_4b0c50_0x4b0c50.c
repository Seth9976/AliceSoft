// 函数: sub_4b0c50
// 地址: 0x4b0c50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* eax = *arg2

if (&eax[4] u> arg2[1])
    eax.b = 0
    return eax

uint32_t edx_1 = zx.d(eax[1])
uint32_t ebx_6 = ((zx.d(eax[3]) << 8 | zx.d(eax[2])) << 8 | edx_1) << 8 | zx.d(*eax)
*arg2 = &eax[4]
int32_t eax_3
int80_t st0
st0, eax_3 = sub_4b0de0(ebx_6, edx_1, &eax[4], arg1)
int32_t var_c = 0

if (ebx_6 s> 0)
    int32_t ebx_7 = 0
    
    do
        int32_t* eax_6
        
        if (sub_410070(arg2, *arg1 + ebx_7).b == 0)
            eax_6.b = 0
            return eax_6
        
        eax_6 = *arg2
        
        if (&eax_6[1] u> arg2[1])
            eax_6.b = 0
            return eax_6
        
        *(ebx_7 + *arg1 + 0x1c) =
            ((zx.d(*(eax_6 + 3)) << 8 | zx.d(*(eax_6 + 2))) << 8 | zx.d(*(eax_6 + 1))) << 8
            | zx.d(*eax_6)
        *arg2 += 4
        char* ecx_5 = *arg2
        int32_t edx_9 = *arg1
        
        if (&ecx_5[4] u> arg2[1])
            eax_6.b = 0
            return eax_6
        
        uint32_t eax_14 =
            ((zx.d(ecx_5[3]) << 8 | zx.d(ecx_5[2])) << 8 | zx.d(ecx_5[1])) << 8 | zx.d(*ecx_5)
        *arg2 = &ecx_5[4]
        *(edx_9 + ebx_7 + 0x20) = fconvert.s(fconvert.t(eax_14))
        int32_t ecx_8
        eax_6, ecx_8 = sub_40ff40(&ecx_5[4], arg2, *arg1 + ebx_7 + 0x24)
        
        if (eax_6.b == 0)
            eax_6.b = 0
            return eax_6
        
        int32_t ecx_9
        eax_6, ecx_9 = sub_40ff40(ecx_8, arg2, *arg1 + ebx_7 + 0x28)
        
        if (eax_6.b == 0)
            eax_6.b = 0
            return eax_6
        
        int32_t ecx_10
        eax_6, ecx_10 = sub_40ff40(ecx_9, arg2, *arg1 + ebx_7 + 0x2c)
        
        if (eax_6.b == 0)
            eax_6.b = 0
            return eax_6
        
        int32_t ecx_11
        eax_6, ecx_11 = sub_40ff40(ecx_10, arg2, *arg1 + ebx_7 + 0x30)
        
        if (eax_6.b == 0)
            eax_6.b = 0
            return eax_6
        
        if (sub_40ff40(ecx_11, arg2, *arg1 + ebx_7 + 0x34).b == 0)
            eax_6.b = 0
            return eax_6
        
        if (sub_40fea0(arg2, *arg1 + ebx_7 + 0x38).b == 0)
            eax_6.b = 0
            return eax_6
        
        eax_3 = var_c + 1
        ebx_7 += 0x3c
        var_c = eax_3
    while (eax_3 s< ebx_6)

eax_3.b = 1
return eax_3
