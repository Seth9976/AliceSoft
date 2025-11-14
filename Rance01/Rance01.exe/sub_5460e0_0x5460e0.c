// 函数: sub_5460e0
// 地址: 0x5460e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg4
void* eax = *(ebp + 0x2b0)
int32_t ecx = *(eax - 4)
int32_t edx = *(eax - 8)
int32_t* ecx_1 = *(eax - 0xc)
*(ebp + 0x2b0) = eax - 0xc
int32_t eax_4 = (*(ebp + 0x1e8) - *(ebp + 0x1e4)) s>> 2

if (ecx_1 u< eax_4)
    int32_t edi = *(ebp + 0x1e4)
    eax_4 = *(edi + (ecx_1 << 2))
    
    if (eax_4 != 0)
        int32_t edx_1 = *(eax_4 + 4)
        
        if (edx u>= edx_1 u>> 2)
            char const* const var_24_3 = "A_PUSHBACK"
            return sub_53d1c0(eax_4, edx_1, ebp, 0x74f9c8)
        
        int32_t eax_6
        
        if (edx_1 != 0)
            eax_6 = *eax_4
        else
            eax_6 = 0
        
        int32_t ebx_2 = *(eax_6 + (edx << 2))
        int32_t eax_9 = (*(ebp + 0x1e8) - edi) s>> 2
        
        if (ebx_2 u< eax_9)
            eax_9 = *(edi + (ebx_2 << 2))
            int32_t var_4 = eax_9
            
            if (eax_9 != 0)
                uint32_t eax_12
                
                if (*(eax_9 + 0x40) != 0)
                    eax_12 = *(eax_9 + 4) u>> 2
                else
                    eax_12 = 0
                
                arg4 = eax_12 + 1
                char eax_16
                int32_t edx_3
                eax_16, edx_3 = sub_545630(ecx_1, edx, ebp, &arg4, "A_PUSHBACK")
                
                if (eax_16 == 0)
                    return eax_16
                
                if (ebx_2 u< (*(ebp + 0x1e8) - *(ebp + 0x1e4)) s>> 2)
                    edx_3 = *(ebp + 0x1e4)
                    int32_t* ebx_3 = *(edx_3 + (ebx_2 << 2))
                    
                    if (ebx_3 != 0)
                        int32_t eax_19 = *(var_4 + 0x34)
                        int32_t eax_22
                        
                        if (eax_19 == 0x10)
                            int32_t eax_29 = sub_54f990(ebx_3, arg4 - 1, &var_4)
                            
                            if (eax_29.b == 0)
                                int32_t* var_24_10 = ecx_1
                                return sub_53d1c0(eax_29, ecx_1, ebp, 0x74fa80)
                            
                            int32_t eax_32
                            int32_t edx_13
                            eax_32, edx_13 = sub_552880(ebp + 0x1dc, var_4)
                            
                            if (eax_32.b == 0)
                                int32_t* var_24_12 = ecx_1
                                return sub_53d1c0(eax_32, edx_13, ebp, 0x74fab4)
                            
                            void* eax_35 = sub_5529f0(ebp + 0x1dc, edx_13, ecx)
                            int32_t entry_ebx
                            
                            if (eax_35 == 0)
                                return sub_53d0e0(ebp, "string", arg3, arg2, arg1, entry_ebx, ecx_1)
                            *(eax_35 + 0x2d) = 0
                            eax_22 = sub_54f950(ebx_3, arg4 - 1, ecx)
                            
                            if (eax_22.b == 0)
                                int32_t var_24_14 = edx
                                uint32_t var_28_3 = ebx_3[1] u>> 2
                                return sub_53d1c0(eax_22, edx, ebp, 0x74fb00)
                        else if (eax_19 == 0x11)
                            int32_t eax_23 = sub_54f990(ebx_3, arg4 - 1, &var_4)
                            
                            if (eax_23.b == 0)
                                int32_t* var_24_6 = ecx_1
                                return sub_53d1c0(eax_23, ecx_1, ebp, 0x74fb4c)
                            
                            uint32_t eax_26
                            int32_t edx_8
                            eax_26, edx_8 = sub_553d70(ebp + 0x1dc, var_4, ecx)
                            
                            if (eax_26.b == 0)
                                return sub_53d1c0(eax_26, edx_8, ebp, 0x74fb80)
                            
                            int32_t edx_9
                            eax_22, edx_9 = sub_552880(ebp + 0x1dc, ecx)
                            
                            if (eax_22.b == 0)
                                return sub_53d1c0(eax_22, edx_9, ebp, 0x74fbc8)
                        else
                            int32_t ebx_4
                            
                            if (ebx_3[1] != 0)
                                ebx_4 = *ebx_3
                            else
                                ebx_4 = 0
                            
                            *(ebx_4 + (arg4 << 2) - 4) = ecx
                        
                        eax_22.b = 1
                        return eax_22
                
                int32_t* var_24_4 = ecx_1
                return sub_53d1c0(ecx_1, edx_3, ebp, 0x74fa4c)
        
        char const* const var_24_2 = "A_PUSHBACK"
        int32_t var_28 = ebx_2
        return sub_53d1c0(eax_9, edx, ebp, 0x74fa04)

char const* const var_24_1 = "A_PUSHBACK"
return sub_53d1c0(eax_4, edx, ebp, 0x74f98c)
