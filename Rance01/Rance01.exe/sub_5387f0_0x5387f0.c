// 函数: sub_5387f0
// 地址: 0x5387f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* eax = *arg1

if (&eax[4] u> arg1[1])
    eax.b = 0
    return eax

uint32_t ebp_6 = ((zx.d(eax[3]) << 8 | zx.d(eax[2])) << 8 | zx.d(eax[1])) << 8 | zx.d(*eax)
*arg1 = &eax[4]

if (ebp_6 s> 0)
    int32_t* edi_2 = arg2 + 0x6c
    int32_t* var_10_1 = edi_2
    sub_52f370(edi_2, ebp_6)
    int32_t ebx_1 = 0
    
    if (ebp_6 s> 0)
        void** var_8_1 = arg2 + 0x12c
        int32_t ebp_7 = 0
        
        while (true)
            sub_52efe0(*edi_2 + ebp_7, arg1, ebx_1)
            *sub_513fa0(arg2 + 0x10c, *edi_2 + ebp_7 + 4) = ebx_1
            int32_t var_c = *(*var_10_1 + ebp_7)
            *sub_4ccf80(var_8_1, &var_c) = ebx_1
            ebx_1 += 1
            ebp_7 += 0x4c
            
            if (ebx_1 s>= ebp_6)
                break
            
            edi_2 = var_10_1

uint32_t eax_1
eax_1.b = 1
return eax_1
