// 函数: sub_5adb20
// 地址: 0x5adb20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char eax = (*(arg1 + 0x6c)).b

if ((eax & 1) == 0)
    sub_5a5c60(arg1, "Missing IHDR before pCAL")
    noreturn

if ((eax & 4) != 0)
    sub_5a5de0("Invalid pCAL after IDAT", arg1)
    return sub_5ab650(arg1, arg3)

if (arg2 != 0 && (*(arg2 + 8) & 0x400) != 0)
    sub_5a5de0("Duplicate pCAL chunk", arg1)
    return sub_5ab650(arg1, arg3)

int32_t ecx = *(arg1 + 0x2a8)

if (ecx != 0)
    int32_t eax_5 = *(arg1 + 0x268)
    
    if (eax_5 == 0)
        __free_base(ecx)
    else
        eax_5(arg1, ecx)

int32_t eax_6 = sub_5a6370(arg3 + 1, arg1)
*(arg1 + 0x2a8) = eax_6

if (eax_6 == 0)
    return sub_5a5de0("No memory for pCAL purpose", arg1)

int32_t eax_8 = *(arg1 + 0x54)

if (eax_8 == 0)
    sub_5a5c60(arg1, "Call to NULL read function")
    noreturn

char* ecx_2
void* edx
edx, ecx_2 = eax_8(arg1, eax_6, arg3)
int32_t var_34 = eax_6
void* var_38 = arg1
sub_5a3fe0(arg3, edx, ecx_2)

if (sub_5ab650(arg1, 0) != 0)
    int32_t eax_11 = sub_5a6340(arg1, *(arg1 + 0x2a8))
    *(arg1 + 0x2a8) = 0
    return eax_11

*(arg3 + *(arg1 + 0x2a8)) = 0
char* ecx_4 = *(arg1 + 0x2a8)
char* eax_13 = ecx_4

while (*eax_13 != 0)
    eax_13 = &eax_13[1]

void* ecx_5 = &ecx_4[arg3]
void* var_4 = ecx_5

if (ecx_5 u<= &eax_13[0xc])
    uint32_t eax_14 = sub_5a5de0("Invalid pCAL data", arg1)
    int32_t ecx_6 = *(arg1 + 0x2a8)
    
    if (ecx_6 != 0)
        int32_t eax_15 = *(arg1 + 0x268)
        
        if (eax_15 != 0)
            int32_t eax_16 = eax_15(arg1, ecx_6)
            *(arg1 + 0x2a8) = 0
            return eax_16
        
        eax_14 = __free_base(ecx_6)
    
    *(arg1 + 0x2a8) = 0
    return eax_14

ecx_5.b = eax_13[1]
uint32_t ebx_2 = zx.d(ecx_5.b) << 8
uint32_t ebx_7

if (ecx_5.b s>= 0)
    ebx_7 = ((((ebx_2 + zx.d(eax_13[2])) << 8) + zx.d(eax_13[3])) << 8) + zx.d(eax_13[4])
else
    ebx_7 = ((((ebx_2 + zx.d(eax_13[2])) << 8) + zx.d(eax_13[3])) << 8) + zx.d(eax_13[4])

uint32_t ecx_8
ecx_8.b = eax_13[5]
uint32_t ebp_1 = zx.d(ecx_8.b) << 8
uint32_t ebp_6

if (ecx_8.b s>= 0)
    ebp_6 = ((((ebp_1 + zx.d(eax_13[6])) << 8) + zx.d(eax_13[7])) << 8) + zx.d(eax_13[8])
else
    ebp_6 = ((((ebp_1 + zx.d(eax_13[6])) << 8) + zx.d(eax_13[7])) << 8) + zx.d(eax_13[8])

uint32_t ecx_10
ecx_10.b = eax_13[9]
uint32_t edx_6
edx_6.b = eax_13[0xa]
void* eax_17 = &eax_13[0xb]
void* var_8 = eax_17

if (ecx_10.b != 0)
    if (ecx_10.b != 1)
        if (ecx_10.b != 2)
            if (ecx_10.b != 3)
                if (ecx_10.b u>= 4)
                    sub_5a5de0("Unrecognized equation type for pCAL chunk", arg1)
                    edx_6.b = edx_6.b
                    eax_17 = var_8
            else if (edx_6.b != 4)
                goto label_5add53
        else if (edx_6.b != 3)
            goto label_5add53
    else if (edx_6.b != 3)
        goto label_5add53
else if (edx_6.b != 2)
label_5add53:
    sub_5a5de0("Invalid pCAL parameters for equation type", arg1)
    int32_t eax_18 = sub_5a6340(arg1, *(arg1 + 0x2a8))
    *(arg1 + 0x2a8) = 0
    return eax_18

void* edi_1 = eax_17

if (*eax_17 != 0)
    do
        edi_1 += 1
    while (*edi_1 != 0)

uint32_t eax_19 = zx.d(edx_6.b)
int32_t eax_20 = sub_5a6370(eax_19 << 2, arg1)

if (eax_20 == 0)
    int32_t ecx_13 = *(arg1 + 0x2a8)
    
    if (ecx_13 != 0)
        int32_t eax_21 = *(arg1 + 0x268)
        
        if (eax_21 == 0)
            __free_base(ecx_13)
        else
            eax_21(arg1, ecx_13)
    
    *(arg1 + 0x2a8) = 0
    return sub_5a5de0("No memory for pCAL params", arg1)

int32_t edx_9 = 0

if (eax_19 s<= 0)
label_5ade4c:
    PSTR ecx_16 = eax_19
    int128_t* edx_10 = zx.d(ecx_10.b)
    int32_t var_28_8 = eax_20
    void* var_2c_7 = var_8
    sub_5b0050(arg2, edx_10, ecx_16, arg1, *(arg1 + 0x2a8), ebx_7, ebp_6, edx_10, ecx_16)
    int32_t eax_27 = *(arg1 + 0x2a8)
    
    if (eax_27 != 0)
        int32_t ecx_17 = *(arg1 + 0x268)
        
        if (ecx_17 == 0)
            __free_base(eax_27)
        else
            ecx_17(arg1, eax_27)
else
    while (true)
        edi_1 += 1
        *(eax_20 + (edx_9 << 2)) = edi_1
        
        if (edi_1 u> var_4)
            break
        
        while (*edi_1 != 0)
            edi_1 += 1
            
            if (edi_1 u> var_4)
                goto label_5ade1f
        
        if (edi_1 u> var_4)
            break
        
        edx_9 += 1
        
        if (edx_9 s>= eax_19)
            goto label_5ade4c
    
label_5ade1f:
    sub_5a5de0("Invalid pCAL data", arg1)
    int32_t ecx_15 = *(arg1 + 0x2a8)
    
    if (ecx_15 != 0)
        int32_t eax_23 = *(arg1 + 0x268)
        
        if (eax_23 == 0)
            __free_base(ecx_15)
        else
            eax_23(arg1, ecx_15)

int32_t eax_28 = *(arg1 + 0x268)
*(arg1 + 0x2a8) = 0

if (eax_28 == 0)
    return __free_base(eax_20)

return eax_28(arg1, eax_20)
