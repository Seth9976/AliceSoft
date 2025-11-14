// 函数: sub_5afaf0
// 地址: 0x5afaf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x7c) = 0
sub_5a77f0(arg1)
uint32_t ecx_2
int32_t ebp

if (*(arg1 + 0x138) == 0)
    ebp = *(arg1 + 0xe4)
    *(arg1 + 0xec) = *(arg1 + 0xe8)
    *(arg1 + 0xf8) = ebp
else
    if ((*(arg1 + 0x74) & 2) != 0)
        *(arg1 + 0xec) = *(arg1 + 0xe8)
    else
        *(arg1 + 0xec) = (*(arg1 + 0xe8) + 7) u>> 3
    
    uint32_t eax_3 = zx.d(*(arg1 + 0x139))
    ecx_2 = zx.d(*(eax_3 + 0x74639c))
    ebp = *(arg1 + 0xe4)
    *(arg1 + 0xf8) = divu.dp.d(0:(ebp - zx.d(*(eax_3 + 0x746394)) + ecx_2 - 1), ecx_2)

int32_t ebx = *(arg1 + 0x74)
uint32_t eax_8 = zx.d(*(arg1 + 0x13e))

if ((ebx.b & 4) != 0 && *(arg1 + 0x13c) u< 8)
    eax_8 = 8

int32_t edi_1 = ebx & 0x1000

if (edi_1 != 0)
    ecx_2.b = *(arg1 + 0x13b)
    
    if (ecx_2.b == 3)
        int32_t eax_9
        eax_9.b = *(arg1 + 0x134) != 0
        eax_8 = (eax_9 << 3) + 0x18
    else if (ecx_2.b == 0)
        if (eax_8 s< 8)
            eax_8 = 8
        
        if (*(arg1 + 0x134) != 0)
            eax_8 *= 2
    else if (ecx_2.b == 2 && *(arg1 + 0x134) != 0)
        eax_8 = (eax_8 << 2) s/ 3

if ((ebx & 0x200) != 0)
    if (edi_1 == 0)
        *(arg1 + 0x74) = ebx & 0xfffffdff
    else if (*(arg1 + 0x13c) u< 0x10)
        eax_8 *= 2

int32_t edi_2 = *(arg1 + 0x74)
int32_t edx_6 = edi_2 & 0x8000

if (edx_6 != 0)
    ecx_2.b = *(arg1 + 0x13b)
    
    if (ecx_2.b == 0)
        int32_t ecx_3
        ecx_3.b = eax_8 s> 8
        eax_8 = ((ecx_3 - 1) & 0xfffffff0) + 0x20
    else if (ecx_2.b == 2 || ecx_2.b == 3)
        int32_t ecx_6
        ecx_6.b = eax_8 s> 0x20
        eax_8 = ((ecx_6 - 1) & 0xffffffe0) + 0x40

if ((edi_2 & 0x4000) != 0)
    int32_t edx_7
    
    if (*(arg1 + 0x134) == 0)
        if (edx_6 == 0)
            goto label_5afc83
        
        edx_7.b = eax_8 s> 0x10
        eax_8 = ((edx_7 - 1) & 0xffffffe0) + 0x40
    else if ((edi_2 & 0x1000) != 0 || edx_6 != 0)
        edx_7.b = eax_8 s> 0x10
        eax_8 = ((edx_7 - 1) & 0xffffffe0) + 0x40
    else
    label_5afc83:
        ecx_2.b = *(arg1 + 0x13b)
        
        if (ecx_2.b == 4)
            edx_7.b = eax_8 s> 0x10
            eax_8 = ((edx_7 - 1) & 0xffffffe0) + 0x40
        else if (eax_8 s> 8)
            int32_t eax_14
            eax_14.b = ecx_2.b != 6
            eax_8 = ((eax_14 - 1) & 0x10) + 0x30
        else
            int32_t eax_13
            eax_13.b = ecx_2.b == 6
            eax_8 = (eax_13 << 3) + 0x18

if ((edi_2 & 0x100000) != 0)
    uint32_t ecx_10 = zx.d(*(arg1 + 0x69)) * zx.d(*(arg1 + 0x68))
    
    if (ecx_10 s> eax_8)
        eax_8 = ecx_10

int32_t ecx_12 = (ebp + 7) & 0xfffffff8
*(arg1 + 0x142) = eax_8.b
*(arg1 + 0x143) = 0
uint32_t edx_11

if (eax_8 s< 8)
    edx_11 = (ecx_12 * eax_8 + 7) u>> 3
else
    edx_11 = (eax_8 u>> 3) * ecx_12

uint32_t edi_3 = ((eax_8 + 7) s>> 3) + edx_11 + 0x31

if (edi_3 u> *(arg1 + 0x2a4))
    int32_t ecx_14 = *(arg1 + 0x26c)
    
    if (ecx_14 != 0)
        int32_t eax_21 = *(arg1 + 0x268)
        
        if (eax_21 == 0)
            edx_11 = __free_base(ecx_14)
        else
            edx_11 = eax_21(arg1, ecx_14)
    
    int32_t ecx_15 = *(arg1 + 0x2b0)
    
    if (ecx_15 != 0)
        int32_t eax_22 = *(arg1 + 0x268)
        
        if (eax_22 == 0)
            edx_11 = __free_base(ecx_15)
        else
            edx_11 = eax_22(arg1, ecx_15)
    
    int128_t* eax_24
    
    if (*(arg1 + 0x138) == 0)
        eax_24 = sub_5a62f0(edi_3, arg1)
    else
        eax_24 = sub_5a6290(edi_3, edx_11, arg1)
    
    *(arg1 + 0x26c) = eax_24
    int32_t eax_26
    
    if (edi_3 == 0)
        eax_26 = 0
    else
        int32_t eax_25 = *(arg1 + 0x264)
        
        if (eax_25 == 0)
            eax_26 = sub_6b5c43(edi_3)
        else
            eax_26 = eax_25(arg1, edi_3)
        
        if (eax_26 == 0 && (*(arg1 + 0x70) & 0x100000) == 0)
            sub_5a5c60(arg1, "Out of Memory")
            noreturn
    
    int32_t ecx_19 = *(arg1 + 0x26c) + 0x1f
    *(arg1 + 0x2b0) = eax_26
    *(arg1 + 0x108) = ecx_19
    *(arg1 + 0x104) = eax_26 + 0x1f
    *(arg1 + 0x2a4) = edi_3

int32_t eax_29 = *(arg1 + 0xf4)

if (eax_29 u> 0xfffffffe)
    sub_5a5c60(arg1, "Row has too many bytes to allocate in memory")
    noreturn

int128_t* result = sub_6bc670(*(arg1 + 0x104), 0, eax_29 + 1)
*(arg1 + 0x70) |= 0x40
return result
