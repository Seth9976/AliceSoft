// 函数: sub_40ddf0
// 地址: 0x40ddf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
int32_t* esi = arg2

if (*arg6 s> 0 && *esi s> 0 && *arg10 s> 0 && arg3 != 0 && arg7 != 0)
    int32_t* eax_1 = (*(*arg3 + 0x10))()
    int32_t* eax_3 = (*(*arg3 + 0x14))()
    int32_t* eax_5 = (*(*arg7 + 0x10))()
    arg2 = (*(*arg7 + 0x14))()
    var_4 = arg2
    
    if (eax_1 s> 0 && eax_3 s> 0 && eax_5 s> 0 && arg2 s> 0)
        if (*arg8 s>= 0)
            goto label_40decd
        
        int32_t* edx_5 = *arg4
        *esi
        *arg4 -= divs.dp.d(sx.q(*arg8 * *arg1), *esi)
        *arg1 += *arg4 - edx_5
        
        if (*arg1 s> 0)
            *esi += *arg8
            *arg8 = 0
        label_40decd:
            
            if (*arg4 s>= 0)
                goto label_40defd
            
            int32_t* edx_8 = *arg8
            *arg1
            *arg8 -= divs.dp.d(sx.q(*esi * *arg4), *arg1)
            *esi += edx_8 - *arg8
            
            if (*esi s> 0)
                *arg1 += *arg4
                *arg4 = 0
            label_40defd:
                int32_t* eax_19 = *esi
                
                if (*arg8 + eax_19 s<= eax_5)
                label_40df36:
                    int32_t ebx_1 = *arg1
                    
                    if (*arg4 + ebx_1 s<= eax_1)
                    label_40df67:
                        
                        if (*arg9 s>= 0)
                            goto label_40df9c
                        
                        *arg10
                        int32_t ecx_5 = *arg5
                        *arg5 -= divs.dp.d(sx.q(*arg6 * *arg9), *arg10)
                        *arg6 += *arg5 - ecx_5
                        
                        if (*arg6 s> 0)
                            *arg10 += *arg9
                            *arg9 = 0
                        label_40df9c:
                            
                            if (*arg5 s>= 0)
                                goto label_40dfc2
                            
                            *arg6
                            int32_t ecx_7 = *arg9
                            *arg9 -= divs.dp.d(sx.q(*arg10 * *arg5), *arg6)
                            *arg10 += ecx_7 - *arg9
                            
                            if (*arg10 s> 0)
                                *arg6 += *arg5
                                *arg5 = 0
                            label_40dfc2:
                                int32_t* ecx_9 = *arg10
                                
                                if (*arg9 + ecx_9 s<= var_4)
                                label_40dfe9:
                                    int32_t edi_2 = *arg6
                                    
                                    if (*arg5 + edi_2 s<= eax_3)
                                        arg2.b = 1
                                        return arg2
                                    
                                    void* ecx_11 = eax_3 - *arg5
                                    *arg6 = ecx_11
                                    arg2 = divs.dp.d(sx.q(*arg10 * ecx_11), edi_2)
                                    *arg10 = arg2
                                    
                                    if (arg2 s> 0 && *arg6 s> 0)
                                        arg2.b = 1
                                        return arg2
                                else
                                    void* edx_27 = var_4 - *arg9
                                    *arg10 = edx_27
                                    arg2 = divs.dp.d(sx.q(*arg6 * edx_27), ecx_9)
                                    *arg6 = arg2
                                    
                                    if (*arg10 s> 0 && arg2 s> 0)
                                        goto label_40dfe9
                    else
                        void* edx_18 = eax_1 - *arg4
                        *arg1 = edx_18
                        arg2 = divs.dp.d(sx.q(*esi * edx_18), ebx_1)
                        *esi = arg2
                        
                        if (arg2 s> 0 && *arg1 s> 0)
                            goto label_40df67
                else
                    void* edx_14 = eax_5 - *arg8
                    *esi = edx_14
                    arg2 = divs.dp.d(sx.q(*arg1 * edx_14), eax_19)
                    *arg1 = arg2
                    
                    if (*esi s> 0 && arg2 s> 0)
                        goto label_40df36

arg2.b = 0
return arg2
