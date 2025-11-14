// 函数: sub_546b70
// 地址: 0x546b70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t edx_1 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t esi_1 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
uint32_t edi_1 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t i_1 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t ebp_1 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t eax_1 = **(arg1 + 0x2b0)
int32_t* eax_2

if (eax_1 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    eax_2 = *(*(arg1 + 0x1e4) + (eax_1 << 2))
else
    eax_2 = nullptr

int32_t eax_3

if (eax_2[1] != 0)
    eax_3 = *eax_2
else
    eax_3 = 0

int32_t ebp_2 = *(eax_3 + (ebp_1 << 2))

if (ebp_2 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    int32_t* ebp_3 = *(*(arg1 + 0x1e4) + (ebp_2 << 2))
    
    if (ebp_3 != 0)
        int32_t edi_6 = ebp_3[1]
        
        if (edi_6 != 0)
            int32_t eax_8 = *ebp_3
            int32_t* esi_2
            
            if (esi_1 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                esi_2 = *(*(arg1 + 0x1e4) + (esi_1 << 2))
            else
                esi_2 = nullptr
            
            int32_t esi_3
            
            if (esi_2[1] != 0)
                esi_3 = *esi_2
            else
                esi_3 = 0
            
            int32_t eax_13 = *(esi_3 + (edx_1 << 2))
            
            if (eax_13 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                int32_t* eax_14 = *(*(arg1 + 0x1e4) + (eax_13 << 2))
                
                if (eax_14 != 0)
                    int32_t i = 0xffffffff
                    
                    if (i_1 s< 0)
                        i_1 = 0
                    
                    int32_t edx_5
                    edx_5.b = ebp_3[0x10].b
                    uint32_t eax_15
                    
                    if (edx_5.b != 0)
                        eax_15 = edi_6 u>> 2
                    else
                        eax_15 = 0
                    
                    uint32_t ebp_4 = edi_1
                    
                    if (ebp_4 s> eax_15)
                        if (edx_5.b != 0)
                            ebp_4 = edi_6 u>> 2
                        else
                            ebp_4 = 0
                    
                    if (i_1 s< ebp_4)
                        while (i == 0xffffffff)
                            int32_t eax_17 = *(eax_8 + (i_1 << 2))
                            int32_t* eax_18
                            
                            if (eax_17 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
                                eax_18 = *(*(arg1 + 0x1e4) + (eax_17 << 2))
                            else
                                eax_18 = nullptr
                            
                            char* eax_19
                            
                            if (eax_18[1] != 0)
                                eax_19 = *eax_18
                            else
                                eax_19 = nullptr
                            
                            char* esi_4 = eax_19
                            void* eax_21 = sub_54f940(eax_14)
                            int32_t eax_23
                            
                            while (true)
                                int32_t edx_9
                                edx_9.b = *eax_21
                                char temp0_1 = *esi_4
                                bool c_1 = edx_9.b u< temp0_1
                                
                                if (edx_9.b == temp0_1)
                                    if (edx_9.b == 0)
                                        eax_23 = 0
                                        break
                                    
                                    edx_9.b = *(eax_21 + 1)
                                    char temp3_1 = esi_4[1]
                                    c_1 = edx_9.b u< temp3_1
                                    
                                    if (edx_9.b == temp3_1)
                                        eax_21 += 2
                                        esi_4 = &esi_4[2]
                                        
                                        if (edx_9.b != 0)
                                            continue
                                        
                                        eax_23 = 0
                                        break
                                
                                bool c_2 = unimplemented  {sbb eax, eax}
                                eax_23 = sbb.d(sbb.d(eax_21, eax_21, c_1), 0xffffffff, c_2)
                                break
                            
                            if (eax_23 == 0)
                                i = i_1
                            
                            i_1 += 1
                            
                            if (i_1 s>= ebp_4)
                                break
                    
                    int32_t* eax_24 = *(arg1 + 0x2b0)
                    *eax_24 = i
                    *(arg1 + 0x2b0) += 4
                    return eax_24

int32_t* eax_25 = *(arg1 + 0x2b0)
*eax_25 = 0xffffffff
*(arg1 + 0x2b0) += 4
return eax_25
