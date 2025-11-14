// 函数: sub_5ae7d0
// 地址: 0x5ae7d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *(arg3 + 0x288)

if (eax != 0)
    if (eax == 1)
        return sub_5ab650(arg3, arg1)
    
    *(arg3 + 0x288) = eax - 1
    
    if (eax == 2)
        sub_5a5de0("No space in chunk cache for iTXt", arg3)
        return sub_5ab650(arg3, arg1)

int32_t eax_3 = *(arg3 + 0x6c)

if ((eax_3.b & 1) == 0)
    sub_5a5c60(arg3, "Missing IHDR before iTXt")
    noreturn

if ((eax_3.b & 4) != 0)
    *(arg3 + 0x6c) = eax_3 | 8

int32_t ecx = *(arg3 + 0x2a8)

if (ecx != 0)
    int32_t eax_6 = *(arg3 + 0x268)
    
    if (eax_6 == 0)
        __free_base(ecx)
    else
        eax_6(arg3, ecx)

int32_t eax_7 = sub_5a6370(arg1 + 1, arg3)
*(arg3 + 0x2a8) = eax_7

if (eax_7 == 0)
    return sub_5a5de0("No memory to process iTXt chunk", arg3)

int32_t eax_9 = *(arg3 + 0x54)

if (eax_9 == 0)
    sub_5a5c60(arg3, "Call to NULL read function")
    noreturn

char* ecx_2
void* edx
edx, ecx_2 = eax_9(arg3, eax_7, arg1)
int32_t var_2c = eax_7
void* var_30 = arg3
sub_5a3fe0(arg1, edx, ecx_2)

if (sub_5ab650(arg3, 0) != 0)
    int32_t eax_12 = sub_5a6340(arg3, *(arg3 + 0x2a8))
    *(arg3 + 0x2a8) = 0
    return eax_12

*(arg1 + *(arg3 + 0x2a8)) = 0
char* ebx_1 = *(arg3 + 0x2a8)
char* ebp = ebx_1

while (*ebp != 0)
    ebp = &ebp[1]

void* edx_2 = &ebx_1[arg1]
uint32_t eax_28
char* ecx_5

if (&ebp[1] u>= edx_2 - 3)
    ecx_5 = "Truncated iTXt chunk"
label_5ae9b3:
    eax_28 = sub_5a5de0(ecx_5, arg3)
    int32_t ecx_8 = *(arg3 + 0x2a8)
    
    if (ecx_8 != 0)
        int32_t eax_26 = *(arg3 + 0x268)
        
        if (eax_26 != 0)
            int32_t eax_27 = eax_26(arg3, ecx_8)
            *(arg3 + 0x2a8) = 0
            return eax_27
        
        eax_28 = __free_base(ecx_8)
    
    *(arg3 + 0x2a8) = 0
    return eax_28

char* ecx_7

if (sx.d(ebp[2]) != 0 || sx.d(ebp[1]) != 0)
    ecx_7 = "Unknown iTXt compression type or method"
else
    void* eax_15 = &ebp[3]
    
    if (ebp[3] != 0)
        do
            eax_15 += 1
        while (*eax_15 != 0)
    
    void* eax_16 = eax_15 + 1
    void* var_c_1 = eax_16
    
    if (eax_16 u< edx_2)
        while (*eax_16 != 0)
            eax_16 += 1
        
        if (eax_16 + 1 u< edx_2)
            void* eax_18 = eax_16 + 1 - ebx_1
            int32_t eax_19 = lstrlenA(ebx_1 + eax_18)
            int32_t eax_20 = *(arg3 + 0x70)
            *(arg3 + 0x70) = eax_20 | 0x100000
            int32_t eax_22 = *(arg3 + 0x264)
            int32_t* eax_23
            
            if (eax_22 == 0)
                eax_23 = sub_6b5c43(0x1c)
            else
                eax_23 = eax_22(arg3, 0x1c)
            
            if (eax_23 == 0 && (*(arg3 + 0x70) & 0x100000) == 0)
                sub_5a5c60(arg3, "Out of Memory")
                noreturn
            
            *(arg3 + 0x70) = eax_20
            
            if (eax_23 == 0)
                ecx_5 = "Not enough memory to process iTXt chunk"
                goto label_5ae9b3
            
            *eax_23 = 1
            eax_23[6] = *(arg3 + 0x2a8) - ebx_1 + var_c_1
            eax_23[5] = *(arg3 + 0x2a8) - ebx_1 + &ebp[3]
            eax_23[4] = eax_19
            eax_23[3] = 0
            eax_23[1] = *(arg3 + 0x2a8)
            eax_23[2] = *(arg3 + 0x2a8) + eax_18
            int32_t eax_31 = sub_5b0560(arg3, arg4, eax_23)
            int32_t eax_32 = *(arg3 + 0x268)
            
            if (eax_32 == 0)
                eax_28 = __free_base(eax_23)
            else
                eax_28 = eax_32(arg3, eax_23)
            
            int32_t ecx_13 = *(arg3 + 0x2a8)
            
            if (ecx_13 != 0)
                int32_t eax_33 = *(arg3 + 0x268)
                
                if (eax_33 == 0)
                    eax_28 = __free_base(ecx_13)
                else
                    eax_28 = eax_33(arg3, ecx_13)
            
            *(arg3 + 0x2a8) = 0
            
            if (eax_31 == 0)
                return eax_28
            
            sub_5a5c60(arg3, "Insufficient memory to store iTXt chunk")
            noreturn
        
        ecx_7 = "Malformed iTXt chunk"
    else
        ecx_7 = "Truncated iTXt chunk"

uint32_t eax_37 = sub_5a5de0(ecx_7, arg3)
int32_t ecx_14 = *(arg3 + 0x2a8)

if (ecx_14 != 0)
    int32_t eax_35 = *(arg3 + 0x268)
    
    if (eax_35 != 0)
        int32_t eax_36 = eax_35(arg3, ecx_14)
        *(arg3 + 0x2a8) = 0
        return eax_36
    
    eax_37 = __free_base(ecx_14)

*(arg3 + 0x2a8) = 0
return eax_37
