// 函数: sub_5a7720
// 地址: 0x5a7720
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char edx = *(arg1 + 0x13b)

if ((edx & 4) == 0)
    *(arg1 + 0x74) &= 0xff7fffff
    *(arg1 + 0x70) &= 0xffffdfff
    
    if (*(arg1 + 0x134) u<= 0)
        *(arg1 + 0x74) &= 0xfffffe7f

int32_t edi = *(arg1 + 0x74)

if ((edi & 0x100) == 0 || (edi & 0x1000) == 0 || (edx & 2) != 0)
    return 

uint32_t ecx_3 = zx.d(*(arg1 + 0x15c))
uint32_t edx_1 = zx.d(*(arg1 + 0x1b0))
uint32_t esi_1 = zx.d(*(arg1 + 0x13c))

if (esi_1 == 1)
    ecx_3 *= 0xff
    edx_1 *= 0xff
else if (esi_1 == 2)
    ecx_3 *= 0x55
    edx_1 *= 0x55
else if (esi_1 == 4)
    ecx_3 *= 0x11
    edx_1 *= 0x11

*(arg1 + 0x15a) = ecx_3.w
*(arg1 + 0x158) = ecx_3.w
*(arg1 + 0x156) = ecx_3.w

if ((edi & 0x2000000) != 0)
    return 

*(arg1 + 0x1ae) = edx_1.w
*(arg1 + 0x1ac) = edx_1.w
*(arg1 + 0x1aa) = edx_1.w
