// 函数: sub_5b9e20
// 地址: 0x5b9e20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *(arg1 + 0x24)

if (*(arg1 + 0x20) s<= ebx)
    return 0

int32_t ecx = *(arg1 + 0x10)
int32_t* ebp = ecx + (ebx << 2)

if ((*(ecx + (ebx << 2)) & 0x400) != 0)
    int32_t temp0 = *(arg1 + 0x158)
    *(arg1 + 0x158) += 1
    *(arg1 + 0x24) = ebx + 1
    *(arg1 + 0x15c) = adc.d(*(arg1 + 0x15c), 0, temp0 u>= 0xffffffff)
    return 0xffffffff

if (arg2 != 0 || arg3 != arg2)
    int32_t ecx_1 = *ebp
    uint32_t edi_2 = zx.d(ecx_1.b)
    int32_t edx_2 = ecx_1 & 0x200
    int32_t var_8_1 = edx_2
    
    if (edi_2 == 0xff)
        uint32_t i
        
        do
            int32_t edx_3 = ebp[1]
            ebp = &ebp[1]
            ebx += 1
            i = zx.d(edx_3.b)
            
            if ((edx_3 & 0x200) != 0)
                var_8_1 = 0x200
            
            edi_2 += i
        while (i == 0xff)
        edx_2 = var_8_1
    
    if (arg2 != 0)
        arg2[3] = edx_2
        arg2[2] = ecx_1 & 0x100
        *arg2 = *(arg1 + 0xc) + *arg1
        arg2[6] = *(arg1 + 0x158)
        arg2[7] = *(arg1 + 0x15c)
        int32_t ecx_7 = *(arg1 + 0x14)
        arg2[4] = *(ecx_7 + (ebx << 3))
        arg2[5] = *(ecx_7 + (ebx << 3) + 4)
        arg2[1] = edi_2
    
    if (arg3 != 0)
        *(arg1 + 0xc) += edi_2
        int32_t temp1_1 = *(arg1 + 0x158)
        *(arg1 + 0x158) += 1
        *(arg1 + 0x24) = ebx + 1
        *(arg1 + 0x15c) = adc.d(*(arg1 + 0x15c), 0, temp1_1 u>= 0xffffffff)

return 1
