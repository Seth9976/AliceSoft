// 函数: sub_5b9f50
// 地址: 0x5b9f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

while (arg3 != 0)
    int32_t ecx_1 = arg1[4]
    int32_t edx_1 = *arg1
    arg3 -= 1
    int32_t eax_1 = arg1[1]
    char eax
    
    if (edx_1 s< ecx_1 - 4)
    label_5b9f96:
        char* ebp_3 = arg1[3]
        ecx_1.b = eax_1.b
        uint32_t edi_5 = zx.d(*ebp_3) u>> ecx_1.b
        
        if (eax_1 + 8 s> 8)
            char eax_2 = (neg.d(eax_1)).b
            edi_5 |= zx.d(ebp_3[1]) << (eax_2 + 8)
            
            if (eax_1 + 8 s> 0x10)
                edi_5 |= zx.d(ebp_3[2]) << (eax_2 + 0x10)
                
                if (eax_1 + 8 s> 0x18)
                    edi_5 |= zx.d(ebp_3[3]) << (eax_2 + 0x18)
                    
                    if (eax_1 + 8 s> 0x20 && arg1[1] != 0)
                        edi_5 |= zx.d(ebp_3[4]) << (eax_2 + 0x20)
        
        int32_t eax_4
        int32_t edx_10
        edx_10:eax_4 = sx.q(eax_1 + 8)
        int32_t eax_6 = (eax_4 + (edx_10 & 7)) s>> 3
        *arg1 += eax_6
        arg1[3] = &ebp_3[eax_6]
        arg1[1] = (eax_1 + 8) & 7
        eax = edi_5.b & 0xff
    else if (edx_1 s> ecx_1 - ((eax_1 + 0xf) s>> 3))
        arg1[3] = 0
        *arg1 = ecx_1
        arg1[1] = 1
        eax = -1
    else
        if (eax_1 != 0xfffffff8)
            goto label_5b9f96
        
        eax = 0
    
    char* ecx_7 = arg2
    *ecx_7 = eax
    arg2 = &ecx_7[1]
