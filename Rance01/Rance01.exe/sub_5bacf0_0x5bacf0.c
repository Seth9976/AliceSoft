// 函数: sub_5bacf0
// 地址: 0x5bacf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t ecx
int32_t edx
int128_t* result = _calloc(eax, edx, ecx, 1, 0xc88)
void* ecx_1 = *(arg1 + 0x1c)
sub_6bc670(result, 0, 0xc88)
int32_t eax_2 = sub_5b4d20(1, arg2)

if (eax_2 s>= 0)
    if (eax_2 == 0)
        *result = 1
    label_5bad76:
        int32_t eax_6 = sub_5b4d20(1, arg2)
        
        if (eax_6 s>= 0)
            if (eax_6 == 0)
            label_5bae3a:
                
                if (sub_5b4d20(2, arg2) == 0)
                    int32_t ebx_2
                    
                    if (*result s> 1)
                        ebx_2 = 0
                    
                    if (*result s<= 1 || *(arg1 + 4) s<= 0)
                    label_5bae8a:
                        int32_t ebx_3 = 0
                        
                        if (*result s<= 0)
                            return result
                        
                        void* esi_3 = result + 0x444
                        
                        while (true)
                            sub_5b4d20(8, arg2)
                            int32_t eax_19 = sub_5b4d20(8, arg2)
                            *(esi_3 - 0x40) = eax_19
                            
                            if (eax_19 s>= *(ecx_1 + 0x10))
                                break
                            
                            if (eax_19 s< 0)
                                break
                            
                            int32_t eax_20 = sub_5b4d20(8, arg2)
                            *esi_3 = eax_20
                            
                            if (eax_20 s>= *(ecx_1 + 0x14))
                                break
                            
                            if (eax_20 s< 0)
                                break
                            
                            ebx_3 += 1
                            esi_3 += 4
                            
                            if (ebx_3 s>= *result)
                                return result
                    else
                        void* esi_2 = result + 4
                        
                        while (true)
                            int32_t eax_17 = sub_5b4d20(4, arg2)
                            *esi_2 = eax_17
                            
                            if (eax_17 s>= *result)
                                break
                            
                            if (eax_17 s< 0)
                                break
                            
                            ebx_2 += 1
                            esi_2 += 4
                            
                            if (ebx_2 s>= *(arg1 + 4))
                                goto label_5bae8a
            else
                int32_t eax_8 = sub_5b4d20(8, arg2) + 1
                *(result + 0x484) = eax_8
                
                if (eax_8 s> 0)
                    int32_t var_8_1 = 0
                    void* ebx_1 = result + 0x888
                    
                    while (true)
                        int32_t ecx_2 = *(arg1 + 4)
                        int32_t eax_9 = 0
                        
                        if (ecx_2 != 0)
                            uint32_t i = ecx_2 - 1
                            
                            if (ecx_2 != 1)
                                do
                                    eax_9 += 1
                                    i u>>= 1
                                while (i != 0)
                        
                        int32_t eax_10 = sub_5b4d20(eax_9, arg2)
                        *(ebx_1 - 0x400) = eax_10
                        int32_t ecx_3 = *(arg1 + 4)
                        int32_t eax_12 = 0
                        
                        if (ecx_3 != 0)
                            uint32_t i_1 = ecx_3 - 1
                            
                            if (ecx_3 != 1)
                                do
                                    eax_12 += 1
                                    i_1 u>>= 1
                                while (i_1 != 0)
                        
                        int32_t eax_13 = sub_5b4d20(eax_12, arg2)
                        *ebx_1 = eax_13
                        
                        if (eax_10 s< 0)
                            break
                        
                        if (eax_13 s< 0)
                            break
                        
                        if (eax_10 == eax_13)
                            break
                        
                        int32_t ecx_5 = *(arg1 + 4)
                        
                        if (eax_10 s>= ecx_5)
                            break
                        
                        if (eax_13 s>= ecx_5)
                            break
                        
                        int32_t eax_15 = var_8_1 + 1
                        ebx_1 += 4
                        var_8_1 = eax_15
                        
                        if (eax_15 s>= *(result + 0x484))
                            goto label_5bae3a
    else
        int32_t eax_4 = sub_5b4d20(4, arg2) + 1
        *result = eax_4
        
        if (eax_4 s> 0)
            goto label_5bad76

if (result != 0)
    sub_6bc670(result, 0, 0xc88)
    __free_base(result)

return 0
