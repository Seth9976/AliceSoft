// 函数: sub_5b0d00
// 地址: 0x5b0d00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax
eax.b = *(arg2 + 0xa)
void* esi_1 = *(arg2 + 4) + arg1
char* eax_1

if (eax.b == 2)
    eax.b = *(arg2 + 9)
    
    if (eax.b == 8)
        char* ecx_1 = arg1 + 2
        eax_1 = arg1 + 1
        
        while (ecx_1 u< esi_1)
            *eax_1 = *ecx_1
            ecx_1 = &ecx_1[2]
            eax_1 = &eax_1[1]
        
        *(arg2 + 0xb) = 8
    label_5b0d61:
        bool cond:0_1 = *(arg2 + 8) != 4
        *(arg2 + 0xa) = 1
        
        if (not(cond:0_1))
            void* eax_2 = eax_1 - arg1
            *(arg2 + 8) = 0
            *(arg2 + 4) = eax_2
            return eax_2
        
        eax = eax_1 - arg1
        *(arg2 + 4) = eax
    else if (eax.b == 0x10)
        char* ecx_2 = arg1 + 4
        eax_1 = arg1 + 2
        
        while (ecx_2 u< esi_1)
            *eax_1 = *ecx_2
            eax_1[1] = ecx_2[1]
            ecx_2 = &ecx_2[4]
            eax_1 = &eax_1[2]
        
        *(arg2 + 0xb) = 0x10
        goto label_5b0d61
else if (eax.b == 4)
    eax.b = *(arg2 + 9)
    
    if (eax.b == 8)
        void* ecx_3 = arg1 + 4
        eax_1 = arg1 + 3
        
        while (ecx_3 u< esi_1)
            *eax_1 = *ecx_3
            eax_1[1] = *(ecx_3 + 1)
            eax_1[2] = *(ecx_3 + 2)
            ecx_3 += 4
            eax_1 = &eax_1[3]
        
        *(arg2 + 0xb) = 0x18
    label_5b0dfb:
        bool cond:1_1 = *(arg2 + 8) != 6
        *(arg2 + 0xa) = 3
        
        if (not(cond:1_1))
            *(arg2 + 8) = 2
        
        eax = eax_1 - arg1
        *(arg2 + 4) = eax
    else if (eax.b == 0x10)
        void* ecx_4 = arg1 + 8
        eax_1 = arg1 + 6
        
        while (ecx_4 u< esi_1)
            *eax_1 = *ecx_4
            eax_1[1] = *(ecx_4 + 1)
            eax_1[2] = *(ecx_4 + 2)
            eax_1[3] = *(ecx_4 + 3)
            eax_1[4] = *(ecx_4 + 4)
            eax_1[5] = *(ecx_4 + 5)
            ecx_4 += 8
            eax_1 = &eax_1[6]
        
        *(arg2 + 0xb) = 0x30
        goto label_5b0dfb
return eax
