// 函数: sub_5a7630
// 地址: 0x5a7630
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t ecx = *(arg1 + 0x134)
int32_t edi = 0

if (ecx == 0)
label_5a7682:
    *(arg1 + 0x74) &= 0xff7fffff
    *(arg1 + 0x70) &= 0xffffdfff
    
    if (edi == 0)
        *(arg1 + 0x74) &= 0xfffffe7f
else
    int32_t i = 0
    
    if (0 u>= ecx)
        goto label_5a7682
    
    int32_t ebx_1 = 0
    
    do
        ecx.b = (*(arg1 + 0x1a4))[i]
        
        if (ecx.b != 0xff)
            if (ecx.b != 0)
                ebx_1 = 1
            else
                edi = 1
        
        i += 1
    while (i s< zx.d(*(arg1 + 0x134)))
    
    if (ebx_1 == 0)
        goto label_5a7682

int32_t edx_1 = *(arg1 + 0x74)

if ((edx_1 & 0x100) == 0 || (edx_1 & 0x1000) == 0)
    return 

char* ecx_5 = zx.d(*(arg1 + 0x154)) * 3 + *(arg1 + 0x128)
*(arg1 + 0x156) = zx.w(*ecx_5)
*(arg1 + 0x158) = zx.w(ecx_5[1])
*(arg1 + 0x15a) = zx.w(ecx_5[2])

if ((edx_1 & 0x80000) == 0 || (edx_1 & 0x2000000) != 0)
    return 

uint32_t edi_1 = zx.d(*(arg1 + 0x134))
int32_t ecx_7 = 0

if (edi_1 s<= 0)
    return 

do
    char* esi_4 = *(arg1 + 0x1a4) + ecx_7
    void* edx_2
    edx_2.b = 0xff
    edx_2.b = 0xff - *esi_4
    ecx_7 += 1
    *esi_4 = edx_2.b
while (ecx_7 s< edi_1)
