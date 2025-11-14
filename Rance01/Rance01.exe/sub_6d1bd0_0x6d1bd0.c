// 函数: sub_6d1bd0
// 地址: 0x6d1bd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t eax = arg1[3]

if (eax s< 0x19)
    uint32_t edx_1 = eax
    
    while (true)
        eax.b = arg1[0xc].b
        uint32_t eax_3
        int32_t edx_7
        
        if (eax.b != 0)
            eax_3 = edx_1
            edx_7 = arg2
        else
            int32_t edi_1 = arg1[9]
            
            if (edi_1 s<= 0)
                if (arg1[0xf] == 0)
                    return 0
                
                int32_t eax_8 = sub_6fa810(arg1)
                
                if (eax_8 != 0)
                    return eax_8
                
                edi_1 = arg1[9]
            
            char* eax_1 = arg1[4]
            void* edx_2 = &eax_1[1]
            int32_t edi_2 = edi_1 - 1
            arg1[4] = edx_2
            eax = zx.d(*eax_1)
            int32_t ecx_1 = arg1[7]
            arg1[9] = edi_2
            int32_t ecx_2 = ecx_1 + 1
            arg1[7] = ecx_2
            
            if (eax != 0xff)
                goto label_6d1c20
            
            uint32_t i
            
            do
                if (edi_2 s<= 0)
                    if (arg1[0xf] == 0)
                        return 0xffffffeb
                    
                    int32_t eax_6 = sub_6fa810(arg1)
                    
                    if (eax_6 != 0)
                        return eax_6
                    
                    edi_2 = arg1[9]
                    edx_2 = arg1[4]
                    ecx_2 = arg1[7]
                
                i = zx.d(*edx_2)
                edx_2 += 1
                edi_2 -= 1
                arg1[4] = edx_2
                ecx_2 += 1
                arg1[9] = edi_2
                arg1[7] = ecx_2
            while (i == 0xff)
            
            if (i != 0)
                edx_7 = arg2
                arg1[0xc].b = i.b
                eax_3 = arg1[3]
            else
                eax = 0xff
            label_6d1c20:
                int32_t edx_3 = *arg1
                int32_t edi_4 = arg1[1] << 8 | edx_3 u>> 0xffffffe8
                *arg1 = edx_3 << 8 | eax
                edx_1 = arg1[3] + 8
                arg1[1] = edi_4
                arg1[3] = edx_1
                
                if (edx_1 s>= 0x19)
                    break
                
                continue
        
        if (eax_3 s>= edx_7)
            break
        
        return 0x64

return 0
