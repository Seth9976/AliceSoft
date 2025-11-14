// 函数: sub_6d4d60
// 地址: 0x6d4d60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t var_1c0[0x9]
int16_t (* result)[0x9] = &var_1c0
int32_t i_1 = 0
void* esi

if (arg4 s> 0)
    int32_t ecx_1 = 0
    int32_t ebx_1 = 0
    int32_t ebp_1 = 0
    int16_t (* result_1)[0x9] = &var_1c0
    
    do
        int32_t i = 0
        
        if (arg3 s> 0)
            void* edi_1 = ecx_1
            int32_t i_3 = 0
            esi = ebx_1
            
            do
                uint32_t ebx_2 = zx.d(*(edi_1 + arg1))
                uint32_t ebp_2 = zx.d(*(edi_1 + arg1 + 1))
                uint32_t ecx_2 = zx.d(*(edi_1 + arg1 + 2))
                edi_1 += 3
                (*result_1)[esi] = ((ebx_2 * 0x1d + ebp_2 * 0x96 + ecx_2 * 0x4d - 0x7f80) s>> 8).w
                (*result_1)[esi + 0x40] =
                    (((ebx_2 << 7) + ebp_2 * 0xffffffab + ecx_2 * 0xffffffd5 + 0x80) s>> 8).w
                (*result_1)[esi + 0x80] =
                    ((ebx_2 * 0xffffffeb + ebp_2 * 0xffffff95 + (ecx_2 << 7) + 0x80) s>> 8).w
                esi += 1
                i = i_3 + 1
                i_3 = i
            while (i s< arg3)
        
        if (i s< 8)
            void* edi_2 = result_1 + ebp_1
            esi = &(*result_1)[i + ebx_1]
            
            do
                i += 1
                *esi = *(edi_2 + (arg3 << 1) - 2)
                *(esi + 0x80) = *(edi_2 + (arg3 << 1) + 0x7e)
                *(esi + 0x100) = *(edi_2 + (arg3 << 1) + 0xfe)
                esi += 2
            while (i s< 8)
        
        ecx_1 += arg2
        ebx_1 += 8
        ebp_1 += 0x10
        i_1 += 1
    while (i_1 s< arg4)
    
    result = result_1

if (i_1 s< 8)
    void* ecx_5 = &(*result)[i_1 * 8]
    
    do
        int16_t edi_7 = *(ecx_5 + 0xfc)
        esi = zx.d(*(ecx_5 - 2))
        *ecx_5 = *(ecx_5 - 0x10)
        int16_t ebp_4 = *(ecx_5 + 0x7e)
        *(ecx_5 + 0x80) = *(ecx_5 + 0x70)
        i_1 += 1
        *(ecx_5 + 0x100) = *(ecx_5 + 0xf0)
        *(ecx_5 + 2) = *(ecx_5 - 0xe)
        *(ecx_5 + 0x82) = *(ecx_5 + 0x72)
        *(ecx_5 + 0x102) = *(ecx_5 + 0xf2)
        *(ecx_5 + 4) = *(ecx_5 - 0xc)
        *(ecx_5 + 0x84) = *(ecx_5 + 0x74)
        *(ecx_5 + 0x104) = *(ecx_5 + 0xf4)
        *(ecx_5 + 6) = *(ecx_5 - 0xa)
        *(ecx_5 + 0x86) = *(ecx_5 + 0x76)
        *(ecx_5 + 0x106) = *(ecx_5 + 0xf6)
        *(ecx_5 + 8) = *(ecx_5 - 8)
        *(ecx_5 + 0x88) = *(ecx_5 + 0x78)
        *(ecx_5 + 0x108) = *(ecx_5 + 0xf8)
        *(ecx_5 + 0xa) = *(ecx_5 - 6)
        *(ecx_5 + 0x8a) = *(ecx_5 + 0x7a)
        *(ecx_5 + 0x10a) = *(ecx_5 + 0xfa)
        *(ecx_5 + 0xc) = *(ecx_5 - 4)
        *(ecx_5 + 0x8c) = *(ecx_5 + 0x7c)
        int16_t ebx_23 = *(ecx_5 + 0xfe)
        *(ecx_5 + 0x10c) = edi_7
        *(ecx_5 + 0xe) = esi.w
        *(ecx_5 + 0x8e) = ebp_4
        *(ecx_5 + 0x10e) = ebx_23
        ecx_5 += 0x10
    while (i_1 s< 8)

for (int32_t i_2 = 0; i_2 s< 0x40; i_2 += 8)
    *(arg5 + (i_2 << 1)) = (*result)[i_2]
    *(arg5 + (i_2 << 1) + 0x80) = (*result)[i_2 + 0x40]
    *(arg5 + (i_2 << 1) + 0x100) = (*result)[i_2 + 0x80]
    *(arg5 + (i_2 << 1) + 2) = (*result)[i_2 + 1]
    *(arg5 + (i_2 << 1) + 0x82) = (*result)[i_2 + 0x41]
    *(arg5 + (i_2 << 1) + 0x102) = (*result)[i_2 + 0x81]
    *(arg5 + (i_2 << 1) + 4) = (*result)[i_2 + 2]
    *(arg5 + (i_2 << 1) + 0x84) = (*result)[i_2 + 0x42]
    *(arg5 + (i_2 << 1) + 0x104) = (*result)[i_2 + 0x82]
    *(arg5 + (i_2 << 1) + 6) = (*result)[i_2 + 3]
    *(arg5 + (i_2 << 1) + 0x86) = (*result)[i_2 + 0x43]
    *(arg5 + (i_2 << 1) + 0x106) = (*result)[i_2 + 0x83]
    *(arg5 + (i_2 << 1) + 8) = (*result)[i_2 + 4]
    *(arg5 + (i_2 << 1) + 0x88) = (*result)[i_2 + 0x44]
    *(arg5 + (i_2 << 1) + 0x108) = (*result)[i_2 + 0x84]
    *(arg5 + (i_2 << 1) + 0xa) = (*result)[i_2 + 5]
    *(arg5 + (i_2 << 1) + 0x8a) = (*result)[i_2 + 0x45]
    *(arg5 + (i_2 << 1) + 0x10a) = (*result)[i_2 + 0x85]
    *(arg5 + (i_2 << 1) + 0xc) = (*result)[i_2 + 6]
    *(arg5 + (i_2 << 1) + 0x8c) = (*result)[i_2 + 0x46]
    *(arg5 + (i_2 << 1) + 0x10c) = (*result)[i_2 + 0x86]
    *(arg5 + (i_2 << 1) + 0xe) = (*result)[i_2 + 7]
    *(arg5 + (i_2 << 1) + 0x8e) = (*result)[i_2 + 0x47]
    *(arg5 + (i_2 << 1) + 0x10e) = (*result)[i_2 + 0x87]

return result
