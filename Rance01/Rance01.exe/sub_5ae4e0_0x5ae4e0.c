// 函数: sub_5ae4e0
// 地址: 0x5ae4e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *(arg1 + 0x288)

if (eax != 0)
    if (eax == 1)
        return sub_5ab650(arg1, arg3)
    
    *(arg1 + 0x288) = eax - 1
    
    if (eax == 2)
        sub_5a5de0("No space in chunk cache for zTXt", arg1)
        return sub_5ab650(arg1, arg3)

int32_t eax_5 = *(arg1 + 0x6c)

if ((eax_5.b & 1) == 0)
    sub_5a5c60(arg1, "Missing IHDR before zTXt")
    noreturn

if ((eax_5.b & 4) != 0)
    *(arg1 + 0x6c) = eax_5 | 8

int32_t ecx_1 = *(arg1 + 0x2a8)

if (ecx_1 != 0)
    int32_t eax_8 = *(arg1 + 0x268)
    
    if (eax_8 == 0)
        __free_base(ecx_1)
    else
        eax_8(arg1, ecx_1)

int32_t eax_9 = sub_5a6370(arg3 + 1, arg1)
*(arg1 + 0x2a8) = eax_9

if (eax_9 == 0)
    return sub_5a5de0("Out of memory processing zTXt chunk", arg1)

int32_t eax_11 = *(arg1 + 0x54)

if (eax_11 == 0)
    sub_5a5c60(arg1, "Call to NULL read function")
    noreturn

char* ecx_3
void* edx
edx, ecx_3 = eax_11(arg1, eax_9, arg3)
int32_t var_28 = eax_9
void* var_2c = arg1
sub_5a3fe0(arg3, edx, ecx_3)
int32_t eax_13 = sub_5ab650(arg1, 0)
char* edx_1 = *(arg1 + 0x2a8)
uint32_t eax_14

if (eax_13 == 0)
    edx_1[arg3] = 0
    char* eax_15 = *(arg1 + 0x2a8)
    char* edi_1 = eax_15
    
    while (*edi_1 != 0)
        edi_1 = &edi_1[1]
    
    uint32_t eax_16 = &eax_15[arg3 - 2]
    
    if (edi_1 u< eax_16)
        int32_t ebp_1 = sx.d(edi_1[1])
        
        if (ebp_1 != 0)
            eax_16 = sub_5a5de0("Unknown compression type in zTXt chunk", arg1)
            ebp_1 = 0
        
        int128_t* ebx_1 = &edi_1[1] - *(arg1 + 0x2a8) + 1
        int128_t* var_4
        sub_5ab990(eax_16, ebp_1, &var_4, arg1, arg3, ebx_1)
        int32_t eax_20 = *(arg1 + 0x70)
        *(arg1 + 0x70) = eax_20 | 0x100000
        int32_t eax_22 = *(arg1 + 0x264)
        int32_t* eax_23
        
        if (eax_22 == 0)
            eax_23 = sub_6b5c43(0x1c)
        else
            eax_23 = eax_22(arg1, 0x1c)
        
        if (eax_23 == 0 && (*(arg1 + 0x70) & 0x100000) == 0)
            sub_5a5c60(arg1, "Out of Memory")
            noreturn
        
        *(arg1 + 0x70) = eax_20
        
        if (eax_23 == 0)
            uint32_t eax_25 = sub_5a5de0("Not enough memory to process zTXt chunk", arg1)
            int32_t ecx_8 = *(arg1 + 0x2a8)
            
            if (ecx_8 != 0)
                int32_t eax_26 = *(arg1 + 0x268)
                
                if (eax_26 != 0)
                    int32_t eax_27 = eax_26(arg1, ecx_8)
                    *(arg1 + 0x2a8) = 0
                    return eax_27
                
                eax_25 = __free_base(ecx_8)
            
            *(arg1 + 0x2a8) = 0
            return eax_25
        
        *eax_23 = ebp_1
        eax_23[1] = *(arg1 + 0x2a8)
        eax_23[5] = 0
        eax_23[6] = 0
        eax_23[4] = 0
        int128_t* eax_28 = var_4
        eax_23[2] = *(arg1 + 0x2a8) + ebx_1
        eax_23[3] = eax_28
        int32_t eax_29 = sub_5b0560(arg1, arg2, eax_23)
        int32_t eax_30 = *(arg1 + 0x268)
        
        if (eax_30 == 0)
            eax_14 = __free_base(eax_23)
        else
            eax_14 = eax_30(arg1, eax_23)
        
        int32_t ecx_11 = *(arg1 + 0x2a8)
        
        if (ecx_11 != 0)
            int32_t eax_31 = *(arg1 + 0x268)
            
            if (eax_31 == 0)
                eax_14 = __free_base(ecx_11)
            else
                eax_14 = eax_31(arg1, ecx_11)
        
        *(arg1 + 0x2a8) = 0
        
        if (eax_29 != 0)
            sub_5a5c60(arg1, "Insufficient memory to store zTXt chunk")
            noreturn
    else
        eax_14 = sub_5a5de0("Truncated zTXt chunk", arg1)
        int32_t ecx_5 = *(arg1 + 0x2a8)
        
        if (ecx_5 != 0)
            int32_t eax_17 = *(arg1 + 0x268)
            
            if (eax_17 == 0)
                int32_t eax_19 = __free_base(ecx_5)
                *(arg1 + 0x2a8) = 0
                return eax_19
            
            int32_t eax_18 = eax_17(arg1, ecx_5)
            *(arg1 + 0x2a8) = 0
            return eax_18
        
        *(arg1 + 0x2a8) = 0
else
    eax_14 = sub_5a6340(arg1, edx_1)
    *(arg1 + 0x2a8) = 0

return eax_14
