// 函数: sub_5515f0
// 地址: 0x5515f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[0x10].b == 0)
    int32_t eax
    eax.b = 1
    return eax

uint32_t eax_2

if (arg1[0xc] != 0)
    int32_t edi_1 = (arg1[1] u>> 2) - 1
    
    if (edi_1 s>= 0)
        while (true)
            eax_2 = arg1[1]
            
            if (edi_1 u>= eax_2 u>> 2)
                break
            
            if (eax_2 != 0)
                eax_2 = *arg1
            
            int32_t ecx_2 = *(eax_2 + (edi_1 << 2))
            eax_2 = arg1[5]
            
            if (ecx_2 u>= (*(eax_2 + 0xc) - *(eax_2 + 8)) s>> 2)
                break
            
            if (*(*(eax_2 + 8) + (ecx_2 << 2)) == 0)
                break
            
            sub_5515f0()
            int32_t temp0_1 = edi_1
            edi_1 -= 1
            
            if (temp0_1 - 1 s< 0)
                goto label_55165e
        
        eax_2.b = 0
        return eax_2
else if (arg1[0xd] == 0x11 && sub_551670(arg1).b == 0)
    eax_2.b = 0
    return eax_2

label_55165e:
eax_2.b = 1
return eax_2
