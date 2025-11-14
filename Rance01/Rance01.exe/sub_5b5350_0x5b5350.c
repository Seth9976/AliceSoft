// 函数: sub_5b5350
// 地址: 0x5b5350
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* edi = arg1

if (edi == 0)
    return 

void* eax_1 = *(edi + 4)
void* var_4_1 = eax_1
void* const ebp_1

if (eax_1 == 0)
    ebp_1 = nullptr
else
    ebp_1 = *(eax_1 + 0x1c)

int32_t* ebx_1 = *(edi + 0x68)

if (ebx_1 != 0)
    int128_t* eax_2 = *ebx_1
    
    if (eax_2 != 0)
        sub_5b6e00(eax_2)
        __free_base(*ebx_1)
    
    int32_t* eax_4 = ebx_1[3]
    
    if (eax_4 != 0)
        sub_5bc8c0(*eax_4)
        __free_base(*ebx_1[3])
        __free_base(ebx_1[3])
    
    int32_t* eax_6 = ebx_1[4]
    
    if (eax_6 != 0)
        sub_5bc8c0(*eax_6)
        __free_base(*ebx_1[4])
        __free_base(ebx_1[4])
    
    if (ebx_1[0xc] != 0)
        if (ebp_1 != 0)
            int32_t i = 0
            
            if (*(ebp_1 + 0x10) s> 0)
                do
                    (*(*((*(ebp_1 + (i << 2) + 0x320) << 2) + &data_73fa78) + 0x10))(
                        *(ebx_1[0xc] + (i << 2)))
                    i += 1
                while (i s< *(ebp_1 + 0x10))
        
        __free_base(ebx_1[0xc])
    
    if (ebx_1[0xd] != 0)
        if (ebp_1 != 0)
            int32_t i_1 = 0
            
            if (*(ebp_1 + 0x14) s> 0)
                do
                    (*(*((*(ebp_1 + (i_1 << 2) + 0x520) << 2) + &data_737a6c) + 0x10))(
                        *(ebx_1[0xd] + (i_1 << 2)))
                    i_1 += 1
                while (i_1 s< *(ebp_1 + 0x14))
        
        __free_base(ebx_1[0xd])
    
    if (ebx_1[0xe] != 0)
        if (ebp_1 != 0)
            int32_t i_2 = 0
            
            if (*(ebp_1 + 0x1c) s> 0)
                int32_t var_8_1 = 0
                
                do
                    sub_5bd010(ebx_1[0xe] + var_8_1)
                    var_8_1 += 0x34
                    i_2 += 1
                while (i_2 s< *(ebp_1 + 0x1c))
                
                edi = arg1
        
        __free_base(ebx_1[0xe])
    
    int32_t eax_12 = ebx_1[0xf]
    
    if (eax_12 != 0)
        __builtin_memset(eax_12, 0, 0x24)
        __free_base(eax_12)
    
    sub_6bc670(&ebx_1[0x14], 0, 0x30)
    
    if (ebx_1 != 0xffffffec)
        int32_t eax_13 = ebx_1[6]
        
        if (eax_13 != 0)
            __free_base(eax_13)
        
        int32_t eax_14 = ebx_1[7]
        
        if (eax_14 != 0)
            __free_base(eax_14)
        
        ebx_1[5] = 0
        ebx_1[6] = 0
        ebx_1[7] = 0
    
    if (ebx_1 != 0xffffffe0)
        int32_t eax_15 = ebx_1[9]
        
        if (eax_15 != 0)
            __free_base(eax_15)
        
        int32_t eax_16 = ebx_1[0xa]
        
        if (eax_16 != 0)
            __free_base(eax_16)
        
        ebx_1[8] = 0
        ebx_1[9] = 0
        ebx_1[0xa] = 0
    
    eax_1 = var_4_1

if (*(edi + 8) != 0)
    if (eax_1 != 0)
        int32_t i_3 = 0
        
        if (*(var_4_1 + 4) s> 0)
            do
                int32_t eax_17 = *(edi + 8)
                
                if (*(eax_17 + (i_3 << 2)) != 0)
                    __free_base(*(eax_17 + (i_3 << 2)))
                
                i_3 += 1
            while (i_3 s< *(var_4_1 + 4))
    
    __free_base(*(edi + 8))
    int32_t eax_19 = *(edi + 0xc)
    
    if (eax_19 != 0)
        __free_base(eax_19)

if (ebx_1 != 0)
    int32_t eax_20 = ebx_1[0x10]
    
    if (eax_20 != 0)
        __free_base(eax_20)
    
    int32_t eax_21 = ebx_1[0x11]
    
    if (eax_21 != 0)
        __free_base(eax_21)
    
    int32_t eax_22 = ebx_1[0x12]
    
    if (eax_22 != 0)
        __free_base(eax_22)
    
    __free_base(ebx_1)

sub_6bc670(edi, 0, 0x70)
