// 函数: sub_54da40
// 地址: 0x54da40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg4 + 0x2b0) -= 4
int32_t esi = **(arg4 + 0x2b0)
*(arg4 + 0x2b0) -= 4
int32_t edi = **(arg4 + 0x2b0)
*(arg4 + 0x2b0) -= 4
int32_t eax_3 = **(arg4 + 0x2b0)
int32_t entry_ebx

if (eax_3 u< (*(arg4 + 0x1e8) - *(arg4 + 0x1e4)) s>> 2)
    int32_t* ebp = *(*(arg4 + 0x1e4) + (eax_3 << 2))
    
    if (ebp != 0)
        int32_t* var_14_1 = ebp
        char eax_5
        int32_t ecx_4
        eax_5, ecx_4 = sub_551e70()
        
        if (eax_5 == 0)
            sub_53d0e0(arg4, "gcDelegate", arg3, arg2, arg1, entry_ebx, __return_addr)
            int32_t eax_6
            eax_6.b = 0
            return eax_6
        
        int32_t ecx_6
        ecx_6.b = sub_551e30(ecx_4, ebp, esi, edi) != 0
        **(arg4 + 0x2b0) = ecx_6
        *(arg4 + 0x2b0) += 4
        return 1

sub_53d0e0(arg4, 0x751574, eax_3, arg3, arg2, arg1, entry_ebx)
int32_t eax_4
eax_4.b = 0
return eax_4
