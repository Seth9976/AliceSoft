// 函数: sub_6e8410
// 地址: 0x6e8410
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = arg4
int32_t i

for (i = 0; i s< 0x40; i += 8)
    char* j = nullptr
    int32_t i_1 = i
    
    do
        int32_t edx_1 = sx.d(*(arg3 + (i_1 << 1)))
        int32_t eax = sx.d(*(arg2 + (i_1 << 1)))
        int32_t esi_7 = sx.d(*(arg1 + (i_1 << 1)))
        int32_t eax_5 = sx.d(((eax * 0x1c6 - 0xe251) s>> 8).w) + esi_7
        
        if (eax_5 s> 0xff)
            eax_5 = 0xff
        else if (eax_5 s< 0)
            eax_5 = 0
        
        j[ecx] = eax_5.b
        int32_t edx_7 = neg.d(sx.d(((eax * 0x58 + edx_1 * 0xb7 - 0x87f6) s>> 8).w)) + esi_7
        
        if (edx_7 s> 0xff)
            edx_7 = 0xff
        else if (edx_7 s< 0)
            edx_7 = 0
        
        j[ecx + 1] = edx_7.b
        int32_t ecx_3 = sx.d(((edx_1 * 0x167 - 0xb2f5) s>> 8).w) + esi_7
        
        if (ecx_3 s> 0xff)
            ecx_3 = 0xff
        else if (ecx_3 s< 0)
            ecx_3 = 0
        
        i_1 += 1
        j[ecx + 2] = ecx_3.b
        j = &j[3]
    while (j s< 0x18)
    
    ecx += arg5

return i
