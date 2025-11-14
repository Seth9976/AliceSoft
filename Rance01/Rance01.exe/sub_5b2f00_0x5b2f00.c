// 函数: sub_5b2f00
// 地址: 0x5b2f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
uint32_t eax_1

if (sub_5b2dd0(eax, arg1, arg3).b != 0)
    if (arg1[9].b != 0 || *(arg1 + 0x25) == 0)
        eax_1 = arg1[2]
        
        if (eax_1 == 0x18)
            if (*(arg1 + 0x25) != 0)
                int32_t* ecx_1 = data_797d74
                
                if (ecx_1 != 0)
                    eax_1 = (*(*ecx_1 + 8))(*arg1, arg1[1], 0x20)
                    goto label_5b2f3a
            else if (eax_1 == 0x18 && *(arg1 + 0x25) == 0)
                int32_t* ecx_2 = data_797d74
                
                if (ecx_2 != 0)
                    eax_1 = (*(*ecx_2 + 0xc))(*arg1, arg1[1], 0x20)
                    
                    if (eax_1 != 0)
                        goto label_5b2f99
    else
        int32_t* ecx = data_797d74
        
        if (ecx != 0)
            eax_1 = (*(*ecx + 0x10))(*arg1, arg1[1])
        label_5b2f3a:
            
            if (eax_1 != 0)
            label_5b2f99:
                *(arg2 + 0x10) = eax_1
                
                if (arg1[9].b != 0)
                    eax_1 = sub_5b2fe0(arg1, eax_1)
                
                if (arg1[9].b == 0 || eax_1.b != 0)
                    if (*(arg1 + 0x25) != 0)
                        eax_1 = sub_5b3180(arg1, *(arg2 + 0x10))
                    
                    if (*(arg1 + 0x25) == 0 || eax_1.b != 0)
                        int32_t ecx_4 = arg1[3]
                        *(arg2 + 0x18) = arg1[4]
                        *(arg2 + 0x14) = ecx_4
                        int32_t eax_5
                        eax_5.b = 1
                        return eax_5

eax_1.b = 0
return eax_1
