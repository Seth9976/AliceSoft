// 函数: sub_54e060
// 地址: 0x54e060
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t esi = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t edx = **(arg1 + 0x2b0)
int32_t entry_ebx

if (esi u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    int32_t eax_5 = *(arg1 + 0x1e4)
    int32_t* ecx_1 = *(eax_5 + (esi << 2))
    
    if (ecx_1 != 0)
        if (edx u< (*(arg1 + 0x1e8) - eax_5) s>> 2)
            int32_t* eax_7 = *(eax_5 + (edx << 2))
            
            if (eax_7 != 0)
                if (sub_552130(eax_7, edx, ecx_1) != 0)
                    **(arg1 + 0x2b0) = esi
                    *(arg1 + 0x2b0) += 4
                    return 1
                
                sub_53d0e0(arg1, "subDelegatePage", arg3, arg2, entry_ebx)
                int32_t eax_10
                eax_10.b = 0
                return eax_10
        
        sub_53d0e0(arg1, 0x751948, edx, arg3, arg2, entry_ebx, __return_addr)
        int32_t eax_8
        eax_8.b = 0
        return eax_8

sub_53d0e0(arg1, 0x751918, esi, arg3, arg2, entry_ebx, __return_addr)
int32_t eax_6
eax_6.b = 0
return eax_6
