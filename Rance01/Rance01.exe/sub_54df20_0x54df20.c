// 函数: sub_54df20
// 地址: 0x54df20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t eax_1 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t ecx = **(arg1 + 0x2b0)
int32_t eax_3 = sub_5527e0(arg1 + 0x1dc)
*(*(arg1 + 0x1e4) + (eax_3 << 2)) = sub_5525f0(arg1 + 0x1fc)
void var_c
int32_t entry_ebx

if (eax_3 s< 0)
    sub_53d0e0(arg1, 0x751838, arg4, arg3, arg2, entry_ebx, var_c)
    int32_t eax_7
    eax_7.b = 0
    return eax_7

if (eax_3 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    int32_t ecx_3 = *(arg1 + 0x1e4)
    int32_t* eax_8 = *(ecx_3 + (eax_3 << 2))
    
    if (eax_8 != 0)
        if (ecx u< (*(arg1 + 0x1e8) - ecx_3) s>> 2)
            void* ecx_5 = *(ecx_3 + (ecx << 2))
            
            if (ecx_5 != 0)
                if (sub_551c90(eax_8, ecx, eax_1, *(ecx_5 + 0x18)) != 0)
                    **(arg1 + 0x2b0) = eax_3
                    *(arg1 + 0x2b0) += 4
                    return 1
                
                sub_53d0e0(arg1, "setDelegateMethod", arg4, arg3, arg2, entry_ebx, var_c)
                int32_t eax_12
                eax_12.b = 0
                return eax_12
        
        sub_53d0e0(arg1, 0x7518b0, ecx, arg4, arg3, arg2, entry_ebx)
        int32_t eax_10
        eax_10.b = 0
        return eax_10

sub_53d0e0(arg1, 0x751878, eax_3, arg4, arg3, arg2, entry_ebx)
int32_t eax_9
eax_9.b = 0
return eax_9
