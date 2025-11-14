// 函数: sub_5bab90
// 地址: 0x5bab90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*arg2 s<= 1)
    sub_5b4af0(arg3, 0, 1)
else
    sub_5b4af0(arg3, 1, 1)
    sub_5b4af0(arg3, *arg2 - 1, 4)

if (arg2[0x121] s<= 0)
    sub_5b4af0(arg3, 0, 1)
else
    sub_5b4af0(arg3, 1, 1)
    sub_5b4af0(arg3, arg2[0x121] - 1, 8)
    int32_t i = 0
    
    if (arg2[0x121] s> 0)
        void* edi_1 = &arg2[0x222]
        
        do
            int32_t ecx_3 = *(arg1 + 4)
            int32_t eax_3 = 0
            
            if (ecx_3 != 0)
                uint32_t j = ecx_3 - 1
                
                if (ecx_3 != 1)
                    do
                        eax_3 += 1
                        j u>>= 1
                    while (j != 0)
            
            sub_5b4af0(arg3, *(edi_1 - 0x400), eax_3)
            int32_t eax_5 = *(arg1 + 4)
            int32_t ecx_5 = 0
            
            if (eax_5 != 0)
                uint32_t j_1 = eax_5 - 1
                
                if (eax_5 != 1)
                    do
                        ecx_5 += 1
                        j_1 u>>= 1
                    while (j_1 != 0)
            
            sub_5b4af0(arg3, *edi_1, ecx_5)
            i += 1
            edi_1 += 4
        while (i s< arg2[0x121])

int32_t result = sub_5b4af0(arg3, 0, 2)

if (*arg2 s> 1)
    result = arg1
    int32_t i_1 = 0
    
    if (*(result + 4) s> 0)
        void* ebx_1 = &arg2[1]
        
        do
            result = sub_5b4af0(arg3, *ebx_1, 4)
            i_1 += 1
            ebx_1 += 4
        while (i_1 s< *(arg1 + 4))

int32_t i_2 = 0

if (*arg2 s> 0)
    void* edi_2 = &arg2[0x111]
    
    do
        sub_5b4af0(arg3, 0, 8)
        sub_5b4af0(arg3, *(edi_2 - 0x40), 8)
        result = sub_5b4af0(arg3, *edi_2, 8)
        i_2 += 1
        edi_2 += 4
    while (i_2 s< *arg2)

return result
