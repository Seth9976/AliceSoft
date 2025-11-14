// 函数: sub_59f5a0
// 地址: 0x59f5a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* i_5 = arg1[0xb]

do
    void* eax_1 = arg1[0x1b]
    void* ebp_3 = arg1[0xf] - arg1[0x1d] - eax_1
    
    if (eax_1 u>= i_5 + arg1[0xb] - 0x106)
        int128_t* eax_2 = arg1[0xe]
        sub_6c02a0(eax_2, eax_2 + i_5, i_5)
        int32_t i_3 = arg1[0x13]
        int32_t eax_3 = arg1[0x11]
        arg1[0x1c] -= i_5
        arg1[0x1b] -= i_5
        arg1[0x17] -= i_5
        int16_t* ecx_3 = eax_3 + (i_3 << 1)
        int32_t i
        
        do
            uint32_t eax_4 = zx.d(ecx_3[-1])
            ecx_3 -= 2
            int16_t eax_5
            
            if (eax_4 u< i_5)
                eax_5 = 0
            else
                eax_5 = eax_4.w - i_5.w
            
            i = i_3
            i_3 -= 1
            *ecx_3 = eax_5
        while (i != 1)
        void* i_4 = i_5
        int16_t* ecx_5 = arg1[0x10] + (i_5 << 1)
        void* i_1
        
        do
            uint32_t eax_6 = zx.d(ecx_5[-1])
            ecx_5 -= 2
            
            if (eax_6 u< i_5)
                eax_1 = nullptr
            else
                eax_1 = eax_6 - i_5
            
            i_1 = i_4
            i_4 -= 1
            *ecx_5 = eax_1.w
        while (i_1 != 1)
        ebp_3 += i_5
    
    int32_t* esi_1 = *arg1
    
    if (esi_1[1] == 0)
        break
    
    char* edx_4 = arg1[0x1d] + arg1[0x1b] + arg1[0xe]
    void* eax_7 = sub_59f320(eax_1, edx_4, ebp_3, esi_1, edx_4)
    arg1[0x1d] += eax_7
    int32_t esi_2 = arg1[0x5ad]
    
    if (arg1[0x1d] + esi_2 u>= 3)
        void* ebp_4 = arg1[0xe]
        char ecx_7 = (arg1[0x16]).b
        int32_t edx_6 = arg1[0x1b] - esi_2
        uint32_t eax_10 = zx.d(*(ebp_4 + edx_6))
        arg1[0x12] = eax_10
        arg1[0x12] = (eax_10 << ecx_7 ^ zx.d(*(ebp_4 + edx_6 + 1))) & arg1[0x15]
        
        if (esi_2 != 0)
            int32_t i_2
            
            do
                int32_t ebp_5 = arg1[0x10]
                int32_t ecx_10 = arg1[0x11]
                int32_t eax_17 =
                    (zx.d(*(arg1[0xe] + edx_6 + 2)) ^ arg1[0x12] << (arg1[0x16]).b) & arg1[0x15]
                int32_t esi_5 = arg1[0xd]
                arg1[0x12] = eax_17
                eax_17.w = *(ecx_10 + (eax_17 << 1))
                *(ebp_5 + ((esi_5 & edx_6) << 1)) = eax_17.w
                *(arg1[0x11] + (arg1[0x12] << 1)) = edx_6.w
                arg1[0x5ad] -= 1
                i_2 = arg1[0x5ad]
                edx_6 += 1
                
                if (arg1[0x1d] + i_2 u< 3)
                    break
            while (i_2 != 0)
    
    if (arg1[0x1d] u>= 0x106)
        break
while (*(*arg1 + 4) != 0)

int128_t* eax_22 = arg1[0x5b0]
int32_t ecx_14 = arg1[0xf]

if (eax_22 u< ecx_14)
    int32_t esi_8 = arg1[0x1d] + arg1[0x1b]
    
    if (eax_22 u< esi_8)
        int32_t ebx = ecx_14 - esi_8
        
        if (ebx u> 0x102)
            ebx = 0x102
        
        int128_t* eax_21 = sub_6bc670(arg1[0xe] + esi_8, 0, ebx)
        arg1[0x5b0] = ebx + esi_8
        return eax_21
    
    if (eax_22 u< esi_8 + 0x102)
        void* esi_10 = esi_8 - eax_22 + 0x102
        void* ecx_16 = ecx_14 - eax_22
        
        if (esi_10 u> ecx_16)
            esi_10 = ecx_16
        
        eax_22 = sub_6bc670(arg1[0xe] + eax_22, 0, esi_10)
        arg1[0x5b0] += esi_10

return eax_22
