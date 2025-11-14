// 函数: sub_5ae290
// 地址: 0x5ae290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *(arg1 + 0x288)

if (eax != 0)
    if (eax == 1)
        return sub_5ab650(arg1, arg3)
    
    *(arg1 + 0x288) = eax - 1
    
    if (eax == 2)
        sub_5a5de0("No space in chunk cache for tEXt", arg1)
        return sub_5ab650(arg1, arg3)

int32_t eax_3 = *(arg1 + 0x6c)

if ((eax_3.b & 1) == 0)
    sub_5a5c60(arg1, "Missing IHDR before tEXt")
    noreturn

if ((eax_3.b & 4) != 0)
    *(arg1 + 0x6c) = eax_3 | 8

int32_t ecx = *(arg1 + 0x2a8)

if (ecx != 0)
    int32_t eax_6 = *(arg1 + 0x268)
    
    if (eax_6 == 0)
        __free_base(ecx)
    else
        eax_6(arg1, ecx)

int32_t eax_7 = sub_5a6370(arg3 + 1, arg1)
*(arg1 + 0x2a8) = eax_7

if (eax_7 == 0)
    return sub_5a5de0("No memory to process text chunk", arg1)

int32_t eax_9 = *(arg1 + 0x54)

if (eax_9 == 0)
    sub_5a5c60(arg1, "Call to NULL read function")
    noreturn

char* ecx_2
void* edx
edx, ecx_2 = eax_9(arg1, eax_7, arg3)
int32_t var_20 = eax_7
void* var_24 = arg1
sub_5a3fe0(arg3, edx, ecx_2)

if (sub_5ab650(arg1, 0) != 0)
    int32_t eax_12 = sub_5a6340(arg1, *(arg1 + 0x2a8))
    *(arg1 + 0x2a8) = 0
    return eax_12

char* lpString_1 = *(arg1 + 0x2a8)
char* eax_13 = &lpString_1[arg3]
*eax_13 = 0
char* lpString = lpString_1

if (*lpString_1 != 0)
    do
        lpString = &lpString[1]
    while (*lpString != 0)

if (lpString != eax_13)
    lpString = &lpString[1]

int32_t eax_14 = *(arg1 + 0x70)
*(arg1 + 0x70) = eax_14 | 0x100000
int32_t eax_16 = *(arg1 + 0x264)
int32_t* eax_17

if (eax_16 == 0)
    eax_17 = sub_6b5c43(0x1c)
else
    eax_17 = eax_16(arg1, 0x1c)

if (eax_17 == 0 && (*(arg1 + 0x70) & 0x100000) == 0)
    sub_5a5c60(arg1, "Out of Memory")
    noreturn

*(arg1 + 0x70) = eax_14
uint32_t eax_19

if (eax_17 != 0)
    *eax_17 = 0xffffffff
    eax_17[1] = lpString_1
    eax_17[5] = 0
    eax_17[6] = 0
    eax_17[4] = 0
    eax_17[2] = lpString
    eax_17[3] = lstrlenA(lpString)
    int32_t eax_23 = sub_5b0560(arg1, arg2, eax_17)
    int32_t eax_24 = *(arg1 + 0x2a8)
    
    if (eax_24 != 0)
        int32_t ecx_8 = *(arg1 + 0x268)
        
        if (ecx_8 == 0)
            __free_base(eax_24)
        else
            ecx_8(arg1, eax_24)
    
    int32_t eax_25 = *(arg1 + 0x268)
    *(arg1 + 0x2a8) = 0
    
    if (eax_25 == 0)
        eax_19 = __free_base(eax_17)
    else
        eax_19 = eax_25(arg1, eax_17)
    
    if (eax_23 != 0)
        return sub_5a5de0("Insufficient memory to process text chunk", arg1)
else
    eax_19 = sub_5a5de0("Not enough memory to process text chunk", arg1)
    int32_t ecx_5 = *(arg1 + 0x2a8)
    
    if (ecx_5 != 0)
        int32_t eax_20 = *(arg1 + 0x268)
        
        if (eax_20 != 0)
            int32_t eax_21 = eax_20(arg1, ecx_5)
            *(arg1 + 0x2a8) = 0
            return eax_21
        
        eax_19 = __free_base(ecx_5)
    
    *(arg1 + 0x2a8) = 0

return eax_19
