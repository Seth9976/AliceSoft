// 函数: sub_5a5a70
// 地址: 0x5a5a70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = arg1
int32_t ecx
int32_t* edx

if (*(esi + 0x180) != 0 || *(esi + 0x184) != 0)
    sub_5a5de0("gamma table being rebuilt", esi)
    arg1, ecx, edx = sub_5a5860(esi)

int128_t* result

if (arg2 s> 8)
    if ((*(esi + 0x13b) & 2) == 0)
        ecx.b = *(esi + 0x19b)
    else
        ecx.b = *(esi + 0x198)
        arg1.b = *(esi + 0x199)
        
        if (arg1.b u> ecx.b)
            ecx.b = arg1.b
        
        arg1.b = *(esi + 0x19a)
        
        if (arg1.b u> ecx.b)
            ecx.b = arg1.b
    
    if (ecx.b - 1 u> 0xe)
        arg1.b = 0
    else
        arg1.b = 0x10
        arg1.b = 0x10 - ecx.b
    
    int32_t ecx_5 = *(esi + 0x74) & 0x4000400
    
    if (ecx_5 != 0 && arg1.b u< 5)
        arg1.b = 5
    else if (arg1.b u> 8)
        arg1.b = 8
    
    uint32_t edi_1 = zx.d(arg1.b)
    int32_t eax_11 = *(esi + 0x17c)
    *(esi + 0x174) = edi_1
    
    if (ecx_5 == 0)
        int32_t eax_14
        
        if (eax_11 s<= 0)
            eax_14 = 0x186a0
        else
            eax_14 = sub_5a52f0(*(esi + 0x178), eax_11)
        
        result = sub_5a54b0(esi, esi + 0x184, edi_1, eax_14)
    else if (eax_11 s<= 0)
        result = sub_5a5660(esi, esi + 0x184, edi_1.b, 0x186a0)
    else
        result = sub_5a5660(esi, esi + 0x184, edi_1.b, sub_5a52a0(*(esi + 0x178), eax_11))
    
    if ((*(esi + 0x74) & 0x600080) != 0)
        sub_5a54b0(esi, esi + 0x194, edi_1, sub_5a5250(*(esi + 0x178)))
        int32_t eax_17 = *(esi + 0x17c)
        int32_t eax_18
        
        if (eax_17 s<= 0)
            eax_18 = *(esi + 0x178)
        else
            eax_18 = sub_5a5250(eax_17)
        
        return sub_5a54b0(esi, esi + 0x190, edi_1, eax_18)
else
    int32_t eax = *(esi + 0x17c)
    int32_t eax_2
    
    if (eax s<= 0)
        eax_2 = 0x186a0
    else
        eax_2, ecx, edx = sub_5a52f0(*(esi + 0x178), eax)
    
    int32_t var_c_2 = eax_2
    void* var_10_2 = esi + 0x180
    result = sub_5a57d0(esi, edx, ecx)
    
    if ((*(esi + 0x74) & 0x600080) != 0)
        int32_t eax_4
        int32_t ecx_2
        eax_4, ecx_2 = sub_5a5250(*(esi + 0x178))
        int32_t var_c_4 = eax_4
        void* var_10_3 = esi + 0x18c
        int32_t ecx_3
        int32_t* edx_2
        ecx_3, edx_2 = sub_5a57d0(esi, esi + 0x18c, ecx_2)
        int32_t eax_6 = *(esi + 0x17c)
        int32_t eax_7
        
        if (eax_6 s<= 0)
            eax_7 = *(esi + 0x178)
        else
            eax_7, ecx_3, edx_2 = sub_5a5250(eax_6)
        
        int32_t var_c_6 = eax_7
        void* var_10_4 = esi + 0x188
        return sub_5a57d0(esi, edx_2, ecx_3)

return result
