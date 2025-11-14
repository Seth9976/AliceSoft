// 函数: sub_6dbae0
// 地址: 0x6dbae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edx = arg1
int16_t* result = arg2
int16_t* edi = arg4
int32_t esi = arg5
int32_t i_1 = 0

if (edi s> 0)
    int32_t ecx_1 = 0
    
    do
        int32_t i = 0
        
        if (arg3 s> 0)
            int32_t esi_2 = ecx_1
            
            do
                *(arg5 + (esi_2 << 1)) = zx.w(*(edx + (i << 2))) - 0x80
                *(arg5 + (esi_2 << 1) + 0x80) = zx.w(*(edx + (i << 2) + 1)) - 0x80
                *(arg5 + (esi_2 << 1) + 0x100) = zx.w(*(edx + (i << 2) + 2)) - 0x80
                *(arg5 + (esi_2 << 1) + 0x180) = zx.w(*(edx + (i << 2) + 3)) - 0x80
                esi_2 += 1
                i += 1
            while (i s< arg3)
        
        if (i s< 8)
            void* esi_5 = arg5 + ((i + ecx_1) << 1)
            
            do
                i += 1
                *esi_5 = *(esi_5 - 2)
                *(esi_5 + 0x80) = *(esi_5 + 0x7e)
                *(esi_5 + 0x100) = *(esi_5 + 0xfe)
                *(esi_5 + 0x180) = *(esi_5 + 0x17e)
                esi_5 += 2
            while (i s< 8)
        
        edx += arg2
        ecx_1 += 8
        i_1 += 1
        result = arg4
    while (i_1 s< result)
    
    esi = arg5
    edi = arg4

if (i_1 s< 8)
    int32_t edx_1 = edi * 2
    result = esi + i_1 * 0x10
    
    do
        i_1 += 1
        *result = *(esi + (edx_1 << 3) - 0x10)
        result[0x40] = *(esi + (edx_1 << 3) + 0x70)
        result[0x80] = *(esi + (edx_1 << 3) + 0xf0)
        result[0xc0] = *(esi + (edx_1 << 3) + 0x170)
        result[1] = *(esi + (edx_1 << 3) - 0xe)
        result[0x41] = *(esi + (edx_1 << 3) + 0x72)
        result[0x81] = *(esi + (edx_1 << 3) + 0xf2)
        result[0xc1] = *(esi + (edx_1 << 3) + 0x172)
        result[2] = *(esi + (edx_1 << 3) - 0xc)
        result[0x42] = *(esi + (edx_1 << 3) + 0x74)
        result[0x82] = *(esi + (edx_1 << 3) + 0xf4)
        result[0xc2] = *(esi + (edx_1 << 3) + 0x174)
        result[3] = *(esi + (edx_1 << 3) - 0xa)
        result[0x43] = *(esi + (edx_1 << 3) + 0x76)
        result[0x83] = *(esi + (edx_1 << 3) + 0xf6)
        result[0xc3] = *(esi + (edx_1 << 3) + 0x176)
        result[4] = *(esi + (edx_1 << 3) - 8)
        result[0x44] = *(esi + (edx_1 << 3) + 0x78)
        result[0x84] = *(esi + (edx_1 << 3) + 0xf8)
        result[0xc4] = *(esi + (edx_1 << 3) + 0x178)
        result[5] = *(esi + (edx_1 << 3) - 6)
        result[0x45] = *(esi + (edx_1 << 3) + 0x7a)
        result[0x85] = *(esi + (edx_1 << 3) + 0xfa)
        result[0xc5] = *(esi + (edx_1 << 3) + 0x17a)
        result[6] = *(esi + (edx_1 << 3) - 4)
        result[0x46] = *(esi + (edx_1 << 3) + 0x7c)
        result[0x86] = *(esi + (edx_1 << 3) + 0xfc)
        result[0xc6] = *(esi + (edx_1 << 3) + 0x17c)
        result[7] = *(esi + (edx_1 << 3) - 2)
        result[0x47] = *(esi + (edx_1 << 3) + 0x7e)
        result[0x87] = *(esi + (edx_1 << 3) + 0xfe)
        result[0xc7] = *(esi + (edx_1 << 3) + 0x17e)
        result = &result[8]
    while (i_1 s< 8)

return result
