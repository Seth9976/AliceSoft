// 函数: sub_5a4a60
// 地址: 0x5a4a60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 u<= 0x186a0 && arg3 s>= 0 && arg3 s<= 0x186a0 - arg2 && arg4 u<= 0x186a0 && arg5 s>= 0
        && arg5 s<= 0x186a0 - arg4 && arg6 u<= 0x186a0 && arg7 s>= 0 && arg7 s<= 0x186a0 - arg6
        && arg8 u<= 0x186a0 && arg9 s>= 0 && arg9 s<= 0x186a0 - arg8)
    int32_t eax_2 = arg3 - arg7
    int32_t edi_2 = arg4 - arg6
    int32_t var_1c
    
    if (sub_5a51e0(&var_1c, edi_2, eax_2, 7) == 0)
        return 2
    
    int32_t eax_6 = arg2 - arg6
    int32_t ebx_3 = arg5 - arg7
    int32_t var_4 = eax_6
    int32_t var_18
    
    if (sub_5a51e0(&var_18, ebx_3, eax_6, 7) == 0)
        return 2
    
    int32_t eax_9 = arg9 - arg7
    int32_t ebp_3 = var_1c - var_18
    
    if (sub_5a51e0(&var_1c, edi_2, eax_9, 7) == 0)
        return 2
    
    int32_t eax_12 = arg8 - arg6
    
    if (sub_5a51e0(&var_18, ebx_3, eax_12, 7) == 0)
        return 2
    
    int32_t eax_14 = var_1c
    int32_t var_14
    
    if (eax_14 != var_18 && sub_5a51e0(&var_14, arg9, ebp_3, eax_14 - var_18) != 0)
        int32_t edi_3 = var_14
        
        if (edi_3 s> arg9)
            if (sub_5a51e0(&var_1c, eax_2, eax_12, 7) == 0)
                return 2
            
            if (sub_5a51e0(&var_18, var_4, eax_9, 7) == 0)
                return 2
            
            int32_t eax_20 = var_1c
            
            if (eax_20 != var_18 && sub_5a51e0(&var_4, arg9, ebp_3, eax_20 - var_18) != 0)
                int32_t ebp_4 = var_4
                
                if (ebp_4 s> arg9)
                    var_4 = sub_5a5250(edi_3)
                    int32_t esi_12 = sub_5a5250(arg9) - var_4 - sub_5a5250(ebp_4)
                    var_4 = esi_12
                    
                    if (esi_12 s> 0 && edi_3 != 0 && sub_5a51e0(arg1, arg2, 0x186a0, edi_3) != 0
                            && sub_5a51e0(&arg1[1], arg3, 0x186a0, edi_3) != 0
                            && sub_5a51e0(&arg1[2], 0x186a0 - arg3 - arg2, 0x186a0, edi_3) != 0
                            && ebp_4 != 0 && sub_5a51e0(&arg1[3], arg4, 0x186a0, ebp_4) != 0
                            && sub_5a51e0(&arg1[4], arg5, 0x186a0, ebp_4) != 0
                            && sub_5a51e0(&arg1[5], 0x186a0 - arg5 - arg4, 0x186a0, ebp_4) != 0)
                        int32_t edi_5 = var_4
                        
                        if (sub_5a51e0(&arg1[6], arg6, edi_5, 0x186a0) != 0
                                && sub_5a51e0(&arg1[7], arg7, edi_5, 0x186a0) != 0)
                            int32_t eax_38 =
                                sub_5a51e0(&arg1[8], 0x186a0 - arg7 - arg6, edi_5, 0x186a0)
                            int32_t eax_39 = neg.d(eax_38)
                            return sbb.d(eax_39, eax_39, eax_38 != 0) + 1

return 1
