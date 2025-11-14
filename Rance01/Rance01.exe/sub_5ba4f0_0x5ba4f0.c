// 函数: sub_5ba4f0
// 地址: 0x5ba4f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = *(arg2 + 0x1c)

if (ebx == 0)
    return 0xffffff7f

int32_t eax_2
int32_t ecx
eax_2, ecx = sub_5b4d20(8, arg1)
*(ebx + 0x18) = eax_2 + 1

if (eax_2 + 1 s> 0)
    int32_t i = 0
    
    if (eax_2 + 1 s> 0)
        void* ebp_1 = ebx + 0x720
        
        do
            int32_t* eax_5 = sub_5b60b0(arg1)
            *ebp_1 = eax_5
            
            if (eax_5 == 0)
                goto label_5ba778
            
            i += 1
            ebp_1 += 4
        while (i s< *(ebx + 0x18))
    
    int32_t esi_1 = sub_5b4d20(6, arg1) + 1
    
    if (esi_1 s> 0)
        int32_t ebp_2 = 0
        
        if (esi_1 s> 0)
            do
                if (sub_5b4d20(0x10, arg1) != 0)
                    goto label_5ba778
                
                ebp_2 += 1
            while (ebp_2 s< esi_1)
        
        int32_t eax_9 = sub_5b4d20(6, arg1) + 1
        *(ebx + 0x10) = eax_9
        
        if (eax_9 s> 0)
            int32_t i_1 = 0
            
            if (eax_9 s> 0)
                void* esi_2 = ebx + 0x420
                
                do
                    int32_t eax_10 = sub_5b4d20(0x10, arg1)
                    *(esi_2 - 0x100) = eax_10
                    
                    if (eax_10 s< 0)
                        goto label_5ba778
                    
                    if (eax_10 s>= 2)
                        goto label_5ba778
                    
                    int32_t eax_12 = (*(*((eax_10 << 2) + &data_73fa78) + 4))(arg2, arg1)
                    *esi_2 = eax_12
                    
                    if (eax_12 == 0)
                        goto label_5ba778
                    
                    i_1 += 1
                    esi_2 += 4
                while (i_1 s< *(ebx + 0x10))
            
            int32_t eax_14 = sub_5b4d20(6, arg1) + 1
            *(ebx + 0x14) = eax_14
            
            if (eax_14 s> 0)
                int32_t i_2 = 0
                
                if (eax_14 s> 0)
                    void* esi_3 = ebx + 0x620
                    
                    do
                        int32_t eax_15 = sub_5b4d20(0x10, arg1)
                        *(esi_3 - 0x100) = eax_15
                        
                        if (eax_15 s< 0)
                            goto label_5ba778
                        
                        if (eax_15 s>= 3)
                            goto label_5ba778
                        
                        int32_t eax_17 = (*(*((eax_15 << 2) + &data_737a6c) + 4))(arg2, arg1)
                        *esi_3 = eax_17
                        
                        if (eax_17 == 0)
                            goto label_5ba778
                        
                        i_2 += 1
                        esi_3 += 4
                    while (i_2 s< *(ebx + 0x14))
                
                int32_t eax_19 = sub_5b4d20(6, arg1) + 1
                *(ebx + 0xc) = eax_19
                
                if (eax_19 s> 0)
                    int32_t i_3 = 0
                    
                    if (eax_19 s> 0)
                        void* esi_4 = ebx + 0x220
                        
                        do
                            int32_t eax_20 = sub_5b4d20(0x10, arg1)
                            *(esi_4 - 0x100) = eax_20
                            
                            if (eax_20 s< 0)
                                goto label_5ba778
                            
                            if (eax_20 s>= 1)
                                goto label_5ba778
                            
                            int32_t eax_22 = (*((&data_73fa80)[eax_20] + 4))(arg2, arg1)
                            *esi_4 = eax_22
                            
                            if (eax_22 == 0)
                                goto label_5ba778
                            
                            i_3 += 1
                            esi_4 += 4
                        while (i_3 s< *(ebx + 0xc))
                    
                    int32_t eax_23
                    int32_t ecx_5
                    void* edx_4
                    eax_23, ecx_5, edx_4 = sub_5b4d20(6, arg1)
                    int32_t eax_24 = eax_23 + 1
                    *(ebx + 8) = eax_24
                    
                    if (eax_24 s> 0)
                        int32_t i_4 = 0
                        
                        if (eax_24 s> 0)
                            void* esi_5 = ebx + 0x20
                            
                            do
                                *esi_5 = _calloc(eax_24, edx_4, ecx_5, 1, 0x10)
                                **esi_5 = sub_5b4d20(1, arg1)
                                *(*esi_5 + 4) = sub_5b4d20(0x10, arg1)
                                *(*esi_5 + 8) = sub_5b4d20(0x10, arg1)
                                int32_t eax_29 = sub_5b4d20(8, arg1)
                                edx_4 = *esi_5
                                *(edx_4 + 0xc) = eax_29
                                void* eax_30 = *esi_5
                                ecx_5 = 1
                                
                                if (*(eax_30 + 4) s>= 1)
                                    goto label_5ba778
                                
                                if (*(eax_30 + 8) s>= 1)
                                    goto label_5ba778
                                
                                eax_24 = *(eax_30 + 0xc)
                                
                                if (eax_24 s>= *(ebx + 0xc))
                                    goto label_5ba778
                                
                                if (eax_24 s< 0)
                                    goto label_5ba778
                                
                                i_4 += 1
                                esi_5 += 4
                            while (i_4 s< *(ebx + 8))
                        
                        if (sub_5b4d20(1, arg1) == 1)
                            return 0

label_5ba778:
sub_5ba0b0(arg2)
return 0xffffff7b
