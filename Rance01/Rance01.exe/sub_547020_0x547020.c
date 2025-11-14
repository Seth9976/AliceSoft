// 函数: sub_547020
// 地址: 0x547020
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = arg3
int32_t* eax = arg2[1]

if (eax u>= 1)
    int32_t* var_8_1
    
    if (eax != 0)
        var_8_1 = *arg2
    else
        var_8_1 = eax
    
    if (esi s< 0)
        esi = 0
    
    if (arg6 u< (*(arg4 + 0x1e8) - *(arg4 + 0x1e4)) s>> 2)
        int32_t edi_4 = *(arg4 + 0x1e4)
        int32_t* ebp_1 = *(edi_4 + (arg6 << 2))
        
        if (ebp_1 != 0)
            int32_t var_4_1 = 0xffffffff
            
            if (arg7 == 0)
                if (arg2[0x10].b != 0)
                    arg7 = eax u>> 2
                else
                    arg7 = 0
                
                if (esi s< arg5)
                    while (esi s< arg7)
                        eax = var_8_1[esi]
                        
                        if (eax u>= (*(arg4 + 0x1e8) - edi_4) s>> 2)
                            goto label_547058
                        
                        eax = *(edi_4 + (eax << 2))
                        
                        if (eax == 0)
                            goto label_547058
                        
                        char* eax_4
                        
                        if (eax[1] != 0)
                            eax_4 = *eax
                        else
                            eax_4 = nullptr
                        
                        char* edx_5 = eax_4
                        void* eax_6 = sub_54f940(ebp_1)
                        int32_t eax_8
                        
                        while (true)
                            int32_t ebx_1
                            ebx_1.b = *eax_6
                            char temp1_1 = *edx_5
                            bool c_1 = ebx_1.b u< temp1_1
                            
                            if (ebx_1.b == temp1_1)
                                if (ebx_1.b == 0)
                                    eax_8 = 0
                                    break
                                
                                ebx_1.b = *(eax_6 + 1)
                                char temp4_1 = edx_5[1]
                                c_1 = ebx_1.b u< temp4_1
                                
                                if (ebx_1.b == temp4_1)
                                    eax_6 += 2
                                    edx_5 = &edx_5[2]
                                    
                                    if (ebx_1.b != 0)
                                        continue
                                    
                                    eax_8 = 0
                                    break
                            
                            bool c_2 = unimplemented  {sbb eax, eax}
                            eax_8 = sbb.d(sbb.d(eax_6, eax_6, c_1), 0xffffffff, c_2)
                            break
                        
                        if (eax_8 == 0)
                            var_4_1 = esi
                            break
                        
                        esi += 1
                        
                        if (esi s>= arg5)
                            break
            
            int32_t eax_10
            int32_t edx_6
            eax_10, edx_6 = sub_552880(arg4 + 0x1dc, arg6)
            
            if (eax_10.b == 0)
                return sub_53d1c0(eax_10, edx_6, arg4, 0x74fff0)
            
            **(arg4 + 0x2b0) = var_4_1
            *(arg4 + 0x2b0) += 4
            void* eax_12
            eax_12.b = 1
            return eax_12
else
    int32_t eax_2
    int32_t edx
    eax_2, edx = sub_552880(arg4 + 0x1dc, arg6)
    
    if (eax_2.b != 0)
        **(arg4 + 0x2b0) = 0xffffffff
        *(arg4 + 0x2b0) += 4
        eax_2.b = 1
        return eax_2
    
    sub_53d1c0(eax_2, edx, arg4, 0x74ff80)

label_547058:
eax.b = 0
return eax
