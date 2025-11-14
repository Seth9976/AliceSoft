// 函数: sub_54dc10
// 地址: 0x54dc10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx
int32_t* var_4 = ecx
*(arg1 + 0x2b0) -= 4
int32_t eax_1 = **(arg1 + 0x2b0)
int32_t entry_ebx

if (eax_1 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    int32_t* ecx_4 = *(*(arg1 + 0x1e4) + (eax_1 << 2))
    
    if (ecx_4 != 0)
        int32_t eax_3 = sub_5527e0(arg1 + 0x1dc)
        *(*(arg1 + 0x1e4) + (eax_3 << 2)) = sub_5525f0(arg1 + 0x1fc)
        
        if (eax_3 s< 0)
            sub_53d0e0(arg1, 0x751678, arg4, arg3, arg2, entry_ebx, ecx_4)
            int32_t eax_7
            eax_7.b = 0
            return eax_7
        
        if (eax_3 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
            int32_t* eax_11 = *(*(arg1 + 0x1e4) + (eax_3 << 2))
            
            if (eax_11 != 0)
                if (sub_551ff0(eax_11, ecx_4) == 0)
                    sub_53d0e0(arg1, "copyDelegatePage", arg4, arg3, arg2, entry_ebx, ecx_4)
                    int32_t eax_14
                    eax_14.b = 0
                    return eax_14
                
                **(arg1 + 0x2b0) = eax_3
                *(arg1 + 0x2b0) += 4
                int32_t* eax_15
                eax_15.b = 1
                return eax_15
        
        sub_53d0e0(arg1, 0x7516ac, eax_3, arg4, arg3, arg2, entry_ebx)
        int32_t eax_12
        eax_12.b = 0
        return eax_12

sub_53d0e0(arg1, 0x75164c, eax_1, arg4, arg3, arg2, entry_ebx)
int32_t eax_2
eax_2.b = 0
return eax_2
