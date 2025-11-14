// 函数: sub_58f0b0
// 地址: 0x58f0b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edx = arg2
char* ecx = *edx
uint32_t eax

if (&ecx[4] u> edx[1])
label_58f1fc:
    eax.b = 0
    return eax

uint32_t eax_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
uint32_t var_4_1 = eax_7
*edx = &ecx[4]
uint32_t var_10_1 = 0

if (eax_7 s> 0)
    while (true)
        char* ecx_3 = *edx
        int32_t ebp_1 = edx[1]
        
        if (&ecx_3[4] u> ebp_1)
            goto label_58f1fc
        
        uint32_t edi_9 =
            ((zx.d(ecx_3[3]) << 8 | zx.d(ecx_3[2])) << 8 | zx.d(ecx_3[1])) << 8 | zx.d(*ecx_3)
        *edx = &ecx_3[4]
        
        if (&ecx_3[8] u> ebp_1)
            goto label_58f1fc
        
        eax = zx.d(ecx_3[4])
        uint32_t ebx_6 = ((zx.d(ecx_3[7]) << 8 | zx.d(ecx_3[6])) << 8 | zx.d(ecx_3[5])) << 8
        *edx = &ecx_3[8]
        
        if (&ecx_3[0xc] u> ebp_1)
            goto label_58f1fc
        
        char* eax_8 = *edx
        uint32_t esi_11 =
            ((zx.d(eax_8[3]) << 8 | zx.d(eax_8[2])) << 8 | zx.d(eax_8[1])) << 8 | zx.d(*eax_8)
        *edx = &eax_8[4]
        
        if (&eax_8[8] u> ebp_1)
            goto label_58f1fc
        
        uint32_t ebp_8 =
            ((zx.d(eax_8[7]) << 8 | zx.d(eax_8[6])) << 8 | zx.d(eax_8[5])) << 8 | zx.d(eax_8[4])
        *edx = &eax_8[8]
        void var_8
        
        if (sub_40ff00(&eax_8[8], edx, &var_8).b == 0)
            goto label_58f1fc
        
        uint32_t* eax_10 = sub_58f5e0(arg1 + 0x34, &var_8, arg1 + 0x34)
        *eax_10 = edi_9
        eax_10[1] = ebx_6 | eax
        eax_10[2] = esi_11
        eax_10[3] = ebp_8
        eax_7 = var_10_1 + 1
        var_10_1 = eax_7
        
        if (eax_7 s>= var_4_1)
            break
        
        edx = arg2

eax_7.b = 1
return eax_7
