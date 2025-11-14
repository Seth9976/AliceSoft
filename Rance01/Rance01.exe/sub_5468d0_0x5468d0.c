// 函数: sub_5468d0
// 地址: 0x5468d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg4 + 0x2b0) -= 4
int32_t eax_1 = **(arg4 + 0x2b0)
*(arg4 + 0x2b0) -= 4
int32_t ebp = **(arg4 + 0x2b0)
*(arg4 + 0x2b0) -= 4
int32_t edx = **(arg4 + 0x2b0)
*(arg4 + 0x2b0) -= 4
int32_t edi = **(arg4 + 0x2b0)
int32_t var_8 = edx
int32_t eax_6 = sub_5466f0("A_INSERT", edi, ebp, arg2, edi, arg4, edx)
int32_t esi = eax_6

if (esi != 0)
    if (sub_550b80(eax_6) != 0xc)
        goto label_546976
    
    if (eax_1 u< (*(arg4 + 0x1e8) - *(arg4 + 0x1e4)) s>> 2)
        eax_6 = *(*(arg4 + 0x1e4) + (eax_1 << 2))
        
        if (eax_6 != 0)
            *(eax_6 + 0x2d) = 0
        label_546976:
            int32_t entry_ebx
            
            if (*(esi + 0x40) != 0)
                uint32_t eax_9 = *(esi + 4) u>> 2
                
                if (eax_9 != 0)
                    if (ebp s< 0)
                        ebp = 0
                    else if (ebp s> eax_9 - 1)
                        ebp = eax_9 - 1
                    
                    if (eax_9 + 1 s> 0 && sub_427ad0(esi, (eax_9 + 1) << 2) != 0)
                        int32_t eax_29 = *(esi + 4)
                        int32_t ecx_18
                        
                        if (eax_29 != 0)
                            ecx_18 = *esi
                        else
                            ecx_18 = 0
                        
                        uint32_t eax_30
                        
                        if (*(esi + 0x40) != 0)
                            eax_30 = eax_29 u>> 2
                        else
                            eax_30 = 0
                        
                        for (int32_t i = eax_30 - 1; i s> ebp; i -= 1)
                            *(ecx_18 + (i << 2)) = *(ecx_18 + (i << 2) - 4)
                        
                        *(ecx_18 + (ebp << 2)) = eax_1
                        int32_t eax_31
                        eax_31.b = 1
                        return eax_31
                    
                    return sub_53d0e0(arg4, 0x74ff2c, arg3, arg2, arg1, entry_ebx, var_8)
            
            int32_t* edi_1
            
            if (edi u< (*(arg4 + 0x1e8) - *(arg4 + 0x1e4)) s>> 2)
                edi_1 = *(*(arg4 + 0x1e4) + (edi << 2))
            
            if (edi u>= (*(arg4 + 0x1e8) - *(arg4 + 0x1e4)) s>> 2 || edi_1 == 0)
                return sub_53d0e0(arg4, 0x74fe10, arg3, arg2, arg1, entry_ebx, var_8)
            
            int32_t edx_2 = var_8
            int32_t var_4
            
            if (sub_54f990(edi_1, edx_2, &var_4) == 0)
                return sub_53d0e0(arg4, 0x74fe3c, arg3, arg2, arg1, entry_ebx, var_8)
            
            int32_t eax_16 = edi_1[7]
            
            if (eax_16 s< 0)
                return sub_53d0e0(arg4, 0x74fe88, arg3, arg2, arg1, entry_ebx, var_8)
            
            if (sub_537fa0(eax_16, edx_2, arg4 + 0x4c) == 0)
                return sub_53d0e0(arg4, 0x74feb0, arg3, arg2, arg1, entry_ebx, var_8)
            
            int32_t ecx_11 = var_4
            var_8 = 1
            
            if (sub_553df0(ecx_11, arg4 + 0x1dc, &var_8, 1, 0) == 0)
                return sub_53d0e0(arg4, 0x74fed8, arg3, arg2, arg1, entry_ebx, var_8)
            
            int32_t* edi_7
            
            if (*(esi + 4) != 0)
                edi_7 = *esi
            else
                edi_7 = nullptr
            
            if (sub_550b80(esi) - 0xc u> 1)
            label_546ad8:
                *edi_7 = eax_1
                void* eax_25
                eax_25.b = 1
                return eax_25
            
            if (sub_552880(arg4 + 0x1dc, *edi_7).b != 0)
                goto label_546ad8
            
            sub_53d0e0(arg4, 0x74fefc, arg3, arg2, arg1, entry_ebx, var_8)

eax_6.b = 0
return eax_6
