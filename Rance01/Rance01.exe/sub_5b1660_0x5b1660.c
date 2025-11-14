// 函数: sub_5b1660
// 地址: 0x5b1660
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t* esi = arg1

if (arg3 s>= 0x36)
    void* ecx
    int32_t ecx_1
    int32_t edx
    arg1, ecx_1 = sub_5b1740(arg1, edx, ecx)
    
    if (arg1.b != 0)
        uint32_t eax = *esi
        
        if (eax == 8)
            int32_t* ecx_2 = data_797d74
            
            if (ecx_2 != 0)
                eax = (*(*ecx_2 + 0x10))(esi[1], esi[2])
            label_5b169a:
                
                if (eax != 0)
                    goto label_5b16df
        else if (eax == 0x18)
            int32_t* ecx_3 = data_797d74
            
            if (ecx_3 != 0)
                eax = (*(*ecx_3 + 0xc))(esi[1], esi[2], 0x20)
                goto label_5b169a
        else if (eax == 0x20)
            int32_t eax_2 = esi[1]
            int32_t var_c_2 = eax_2
            eax = sub_5b3b10(eax_2, esi[2], ecx_1)
            
            if (eax != 0)
            label_5b16df:
                *(arg2 + 0x10) = eax
                uint32_t ecx_4 = *esi
                
                if (ecx_4 == 8)
                    eax = sub_5b18f0(esi, eax)
                    
                    if (eax.b == 0)
                        return eax
                    
                    goto label_5b171e
                
                if (ecx_4 == 0x18)
                    eax = sub_5b17b0(esi, eax)
                    
                    if (eax.b == 0)
                        return eax
                    
                    goto label_5b171e
                
                if (ecx_4 != 0x20)
                label_5b171e:
                    *(arg2 + 0x14) = 0
                    *(arg2 + 0x18) = 0
                    eax.b = 1
                    return eax
                
                if (sub_5b1860(esi, eax).b != 0)
                    goto label_5b171e
        
        eax.b = 0
        return eax

arg1.b = 0
return arg1
