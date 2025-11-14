// 函数: sub_6d38d0
// 地址: 0x6d38d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = 0
HANDLE edx = *(arg3 + 0x3c)

if (edx == 0)
    char* edx_7 = *(arg3 + 0x10)
    
    if (&edx_7[arg2] u>= *(arg3 + 0x18))
        return 0xffffffe4
    
    int32_t eax
    
    if (*(arg3 + 0xc) s< 8)
        eax.b = *arg3
        *(arg3 + 0x10) = &edx_7[1]
        *edx_7 = eax.b
        *(arg3 + 0x1c) += 1
        uint32_t edi_6 = zx.d(*arg3)
        *(arg3 + 0x24) -= 1
        
        if (edi_6 == 0xff)
            char* ecx_7 = *(arg3 + 0x10)
            *(arg3 + 0x10) = &ecx_7[1]
            *ecx_7 = 0
            *(arg3 + 0x1c) += 1
            *(arg3 + 0x24) -= 1
        
        *(arg3 + 0xc) = 8
        *arg3 = 0
        *(arg3 + 4) = 0
        edx_7 = *(arg3 + 0x10)
    
    char* ecx_8 = nullptr
    
    if (arg2 u> 0)
        if (arg2 u>= 6)
            int32_t var_18_2 = 0
            
            while (true)
                eax.b = ecx_8[arg1]
                *(edx_7 + ecx_8) = eax.b
                eax.b = ecx_8[arg1 + 1]
                ecx_8[*(arg3 + 0x10) + 1] = eax.b
                eax.b = ecx_8[arg1 + 2]
                ecx_8[*(arg3 + 0x10) + 2] = eax.b
                eax.b = ecx_8[arg1 + 3]
                ecx_8[*(arg3 + 0x10) + 3] = eax.b
                int32_t edx_9
                edx_9.b = ecx_8[arg1 + 4]
                ecx_8[*(arg3 + 0x10) + 4] = edx_9.b
                ecx_8 = &ecx_8[5]
                
                if (ecx_8 u> arg2 - 6)
                    break
                
                edx_7 = *(arg3 + 0x10)
            
            esi = var_18_2
            edx_7 = *(arg3 + 0x10)
        
        while (true)
            eax.b = ecx_8[arg1]
            *(edx_7 + ecx_8) = eax.b
            ecx_8 = &ecx_8[1]
            
            if (ecx_8 u>= arg2)
                break
            
            edx_7 = *(arg3 + 0x10)
        
        edx_7 = *(arg3 + 0x10)
    
    *(arg3 + 0x10) = &edx_7[arg2]
    int32_t edx_12 = *(arg3 + 0x24) - arg2
    *(arg3 + 0x1c) += arg2
    *(arg3 + 0x24) = edx_12
else
    uint32_t var_1c
    
    if (*(arg3 + 0xc) s< 8)
        char* ecx_1 = *(arg3 + 0x10)
        
        if (ecx_1 u>= *(arg3 + 0x18))
            if (sub_6ca7f0(edx, &arg3[0x40], 0x1000, &var_1c) == 0 || var_1c != 0x1000)
                return 0xffffffe9
            
            ecx_1 = *(arg3 + 0x14)
        
        uint32_t eax_1
        eax_1.b = *arg3
        *(arg3 + 0x10) = &ecx_1[1]
        *ecx_1 = eax_1.b
        *(arg3 + 0x1c) += 1
        
        if (zx.d(*arg3) == 0xff)
            char* edx_2 = *(arg3 + 0x10)
            
            if (edx_2 u>= *(arg3 + 0x18))
                if (sub_6ca7f0(*(arg3 + 0x3c), &arg3[0x40], 0x1000, &var_1c) == 0
                        || var_1c != 0x1000)
                    return 0xffffffe9
                
                edx_2 = *(arg3 + 0x14)
            
            *(arg3 + 0x10) = &edx_2[1]
            *edx_2 = 0
            *(arg3 + 0x1c) += 1
        
        *arg3 = 0
        *(arg3 + 4) = 0
        *(arg3 + 0xc) = 8
    
    if (arg2 u> 0)
        int32_t var_18_1 = 0
        char* edi_4 = nullptr
        
        do
            char* edx_5 = *(arg3 + 0x10)
            
            if (edx_5 u>= *(arg3 + 0x18))
                if (sub_6ca7f0(*(arg3 + 0x3c), &arg3[0x40], 0x1000, &var_1c) == 0
                        || var_1c != 0x1000)
                    return 0xffffffe9
                
                edx_5 = *(arg3 + 0x14)
                *(arg3 + 0x10) = edx_5
            
            uint32_t eax_8
            eax_8.b = edi_4[arg1]
            edi_4 = &edi_4[1]
            *(arg3 + 0x10) = &edx_5[1]
            *edx_5 = eax_8.b
            *(arg3 + 0x1c) += 1
        while (edi_4 u< arg2)
        
        return var_18_1

return esi
