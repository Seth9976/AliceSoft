// 函数: sub_6cb740
// 地址: 0x6cb740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = 0
int32_t var_82c
void var_828
void var_41c
void var_418

for (int32_t i = 0; i s< 0x100; i += 2)
    (&var_82c)[i] = 0
    *(&var_41c + (i << 2)) = 0
    *(arg3 + (i << 1) + 0x408) = 0
    *(arg3 + (i << 2) + 8) = 0
    *(&var_828 + (i << 2)) = 0
    *(&var_418 + (i << 2)) = 0
    *(arg3 + (i << 1) + 0x40a) = 0
    *(arg3 + (i << 2) + 0xc) = 0

int32_t ebp = 0

for (int32_t i_1 = 1; i_1 s< 0x11; i_1 += 1)
    int32_t ebx_1 = 1
    uint32_t edi_1 = zx.d(*(arg1 + i_1 - 1))
    
    if (edi_1 s> 0)
        do
            if (ebp s> 0x101)
                return 0xfffffffa
            
            (&var_82c)[ebp] = i_1
            ebp += 1
            ebx_1 += 1
        while (ebx_1 s<= edi_1)

int32_t i_2 = 0
int32_t edx = 0
(&var_82c)[ebp] = 0
int32_t edi_2 = var_82c

while (true)
    *(&var_41c + (i_2 << 2)) = edx
    i_2 += 1
    int32_t ebx_3 = (&var_82c)[i_2]
    edx += 1
    
    if (ebx_3 == edi_2)
        while (i_2 s< 0x101)
            *(&var_41c + (i_2 << 2)) = edx
            i_2 += 1
            ebx_3 = (&var_82c)[i_2]
            edx += 1
            
            if (ebx_3 != edi_2)
                break
    
    if (ebx_3 == 0)
        break
    
    do
        edx *= 2
        edi_2 += 1
    while (ebx_3 != edi_2)

int32_t i_3 = 0

if (ebp s<= 0)
    return result

if (ebp s>= 4)
    int32_t result_1 = 0
    
    do
        uint32_t esi_1 = zx.d(*(arg2 + i_3))
        
        if (esi_1 s> 0x101)
            return 0xfffffffa
        
        int32_t eax = i_3 * 2
        *(arg3 + (esi_1 << 1) + 0x408) = (*(&var_41c + (i_3 << 2))).w
        *(arg3 + (esi_1 << 2) + 8) = (&var_82c)[i_3]
        uint32_t esi_2 = zx.d(*(arg2 + i_3 + 1))
        
        if (esi_2 s> 0x101)
            return 0xfffffffa
        
        *(arg3 + (esi_2 << 1) + 0x408) = (*(&var_418 + (eax << 1))).w
        *(arg3 + (esi_2 << 2) + 8) = *(&var_828 + (eax << 1))
        uint32_t esi_3 = zx.d(*(arg2 + i_3 + 2))
        
        if (esi_3 s> 0x101)
            return 0xfffffffa
        
        int32_t var_824[0x102]
        int32_t eax_1 = *(&var_824 + (eax << 1))
        i_3 += 3
        int32_t var_414[0xff]
        *(arg3 + (esi_3 << 1) + 0x408) = (*(&var_414 + (eax << 1))).w
        *(arg3 + (esi_3 << 2) + 8) = eax_1
    while (i_3 s<= ebp - 4)
    
    result = result_1

while (true)
    uint32_t esi_6 = zx.d(*(arg2 + i_3))
    
    if (esi_6 s> 0x101)
        return 0xfffffffa
    
    *(arg3 + (esi_6 << 1) + 0x408) = (*(&var_41c + (i_3 << 2))).w
    int32_t edi_10 = (&var_82c)[i_3]
    i_3 += 1
    *(arg3 + (esi_6 << 2) + 8) = edi_10
    
    if (i_3 s>= ebp)
        return result
