// 函数: sub_5ba0b0
// 地址: 0x5ba0b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx
void* var_4 = ecx
void* ecx_1 = arg1
void* edi = *(ecx_1 + 0x1c)

if (edi != 0)
    int32_t i = 0
    
    if (*(edi + 8) s> 0)
        void* ebx_1 = edi + 0x20
        
        do
            int32_t eax_1 = *ebx_1
            
            if (eax_1 != 0)
                __free_base(eax_1)
            
            i += 1
            ebx_1 += 4
        while (i s< *(edi + 8))
    
    int32_t i_1 = 0
    
    if (*(edi + 0xc) s> 0)
        void* esi_1 = edi + 0x220
        
        do
            int32_t eax_2 = *esi_1
            
            if (eax_2 != 0)
                (*((&data_73fa80)[*(esi_1 - 0x100)] + 8))(eax_2)
            
            i_1 += 1
            esi_1 += 4
        while (i_1 s< *(edi + 0xc))
    
    int32_t i_2 = 0
    
    if (*(edi + 0x10) s> 0)
        void* esi_2 = edi + 0x420
        
        do
            int32_t eax_4 = *esi_2
            
            if (eax_4 != 0)
                (*(*((*(esi_2 - 0x100) << 2) + &data_73fa78) + 0xc))(eax_4)
            
            i_2 += 1
            esi_2 += 4
        while (i_2 s< *(edi + 0x10))
    
    int32_t i_3 = 0
    
    if (*(edi + 0x14) s> 0)
        void* esi_3 = edi + 0x620
        
        do
            int32_t eax_6 = *esi_3
            
            if (eax_6 != 0)
                (*(*((*(esi_3 - 0x100) << 2) + &data_737a6c) + 0xc))(eax_6)
            
            i_3 += 1
            esi_3 += 4
        while (i_3 s< *(edi + 0x14))
    
    int32_t i_4 = 0
    
    if (*(edi + 0x18) s> 0)
        void* ebx_2 = nullptr
        var_4 = edi + 0x720
        
        do
            void* esi_4 = *var_4
            
            if (esi_4 != 0 && *(esi_4 + 0x24) != 0)
                int32_t eax_8 = *(esi_4 + 0x20)
                
                if (eax_8 != 0)
                    __free_base(eax_8)
                
                int32_t eax_9 = *(esi_4 + 8)
                
                if (eax_9 != 0)
                    __free_base(eax_9)
                
                __builtin_memset(esi_4, 0, 0x28)
                __free_base(esi_4)
            
            int32_t eax_10 = *(edi + 0xb20)
            
            if (eax_10 != 0)
                int128_t* esi_5 = ebx_2 + eax_10
                int32_t eax_11 = esi_5[1].d
                
                if (eax_11 != 0)
                    __free_base(eax_11)
                
                int32_t eax_12 = *(esi_5 + 0x14)
                
                if (eax_12 != 0)
                    __free_base(eax_12)
                
                int32_t eax_13 = *(esi_5 + 0x18)
                
                if (eax_13 != 0)
                    __free_base(eax_13)
                
                int32_t eax_14 = *(esi_5 + 0x1c)
                
                if (eax_14 != 0)
                    __free_base(eax_14)
                
                int32_t eax_15 = esi_5[2].d
                
                if (eax_15 != 0)
                    __free_base(eax_15)
                
                sub_6bc670(esi_5, 0, 0x38)
            
            var_4 += 4
            i_4 += 1
            ebx_2 += 0x38
        while (i_4 s< *(edi + 0x18))
    
    int32_t eax_16 = *(edi + 0xb20)
    
    if (eax_16 != 0)
        __free_base(eax_16)
    
    int32_t i_5 = 0
    
    if (*(edi + 0x1c) s> 0)
        void* ebp_1 = edi + 0xb24
        
        do
            int128_t* esi_6 = *ebp_1
            
            if (esi_6 != 0)
                sub_6bc670(esi_6, 0, 0x208)
                __free_base(esi_6)
            
            i_5 += 1
            ebp_1 += 4
        while (i_5 s< *(edi + 0x1c))
    
    __free_base(edi)
    ecx_1 = arg1

__builtin_memset(ecx_1, 0, 0x20)
return 0
