// 函数: sub_54d340
// 地址: 0x54d340
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t ebx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t edx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t ecx_2 = **(arg1 + 0x2b0)
int32_t entry_ebx

if (ecx_2 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    int32_t esi = *(arg1 + 0x1e4)
    int32_t* eax_4 = *(esi + (ecx_2 << 2))
    
    if (eax_4 != 0)
        if (edx u< (*(arg1 + 0x1e8) - esi) s>> 2)
            void* ecx_7 = *(esi + (edx << 2))
            
            if (ecx_7 != 0)
                if (sub_551d00(eax_4, edx, ebx, *(ecx_7 + 0x18)) != 0)
                    return 1
                
                sub_53d0e0(arg1, "addDelegateMethod", arg3, arg2, entry_ebx)
                int32_t eax_8
                eax_8.b = 0
                return eax_8
        
        sub_53d0e0(arg1, 0x7512b0, edx, arg3, arg2, entry_ebx, __return_addr)
        int32_t eax_6
        eax_6.b = 0
        return eax_6

sub_53d0e0(arg1, 0x751284, ecx_2, arg3, arg2, entry_ebx, __return_addr)
int32_t eax_5
eax_5.b = 0
return eax_5
