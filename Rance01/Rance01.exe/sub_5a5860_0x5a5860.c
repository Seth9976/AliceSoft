// 函数: sub_5a5860
// 地址: 0x5a5860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_12 = *(arg1 + 0x180)

if (ecx_12 != 0)
    int32_t eax_1 = *(arg1 + 0x268)
    
    if (eax_1 == 0)
        __free_base(ecx_12)
    else
        eax_1(arg1, ecx_12)

*(arg1 + 0x180) = 0
int32_t eax

if (*(arg1 + 0x184) != 0)
    int32_t ebx_1 = 1 << (8 - (*(arg1 + 0x174)).b)
    int32_t edi_1 = 0
    
    if (ebx_1 s> 0)
        do
            eax = *(*(arg1 + 0x184) + (edi_1 << 2))
            
            if (eax != 0)
                int32_t ecx_1 = *(arg1 + 0x268)
                
                if (ecx_1 == 0)
                    __free_base(eax)
                else
                    ecx_1(arg1, eax)
            
            edi_1 += 1
        while (edi_1 s< ebx_1)
    
    int32_t ecx_2 = *(arg1 + 0x184)
    
    if (ecx_2 != 0)
        int32_t eax_3 = *(arg1 + 0x268)
        
        if (eax_3 == 0)
            __free_base(ecx_2)
        else
            eax_3(arg1, ecx_2)
    
    *(arg1 + 0x184) = 0

int32_t ecx_3 = *(arg1 + 0x188)

if (ecx_3 != 0)
    int32_t eax_4 = *(arg1 + 0x268)
    
    if (eax_4 == 0)
        __free_base(ecx_3)
    else
        eax_4(arg1, ecx_3)

int32_t ecx_4 = *(arg1 + 0x18c)
*(arg1 + 0x188) = 0

if (ecx_4 != 0)
    int32_t eax_5 = *(arg1 + 0x268)
    
    if (eax_5 == 0)
        __free_base(ecx_4)
    else
        eax_5(arg1, ecx_4)

*(arg1 + 0x18c) = 0

if (*(arg1 + 0x190) != 0)
    int32_t ebx_2 = 1 << (8 - (*(arg1 + 0x174)).b)
    
    if (ebx_2 s> 0)
        int32_t edi_2 = 0
        
        do
            eax = *(*(arg1 + 0x190) + (edi_2 << 2))
            
            if (eax != 0)
                int32_t ecx_7 = *(arg1 + 0x268)
                
                if (ecx_7 == 0)
                    __free_base(eax)
                else
                    ecx_7(arg1, eax)
            
            edi_2 += 1
        while (edi_2 s< ebx_2)
    
    int32_t ecx_8 = *(arg1 + 0x190)
    
    if (ecx_8 != 0)
        int32_t eax_6 = *(arg1 + 0x268)
        
        if (eax_6 == 0)
            __free_base(ecx_8)
        else
            eax_6(arg1, ecx_8)
    
    *(arg1 + 0x190) = 0

if (*(arg1 + 0x194) == 0)
    return 

int32_t ebx_3 = 1 << (8 - (*(arg1 + 0x174)).b)
int32_t edi_3 = 0

if (ebx_3 s> 0)
    do
        eax = *(*(arg1 + 0x194) + (edi_3 << 2))
        
        if (eax != 0)
            int32_t ecx_10 = *(arg1 + 0x268)
            
            if (ecx_10 == 0)
                __free_base(eax)
            else
                ecx_10(arg1, eax)
        
        edi_3 += 1
    while (edi_3 s< ebx_3)

int32_t ecx_11 = *(arg1 + 0x194)

if (ecx_11 != 0)
    int32_t eax_7 = *(arg1 + 0x268)
    
    if (eax_7 != 0)
        eax_7(arg1, ecx_11)
        *(arg1 + 0x194) = 0
        return 
    
    __free_base(ecx_11)

*(arg1 + 0x194) = 0
