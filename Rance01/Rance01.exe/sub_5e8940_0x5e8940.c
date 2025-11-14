// 函数: sub_5e8940
// 地址: 0x5e8940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg5

if (arg2[1] != 0)
    arg2 = *arg2
    
    if (arg2 != 0xffffffff)
        int32_t* eax = sub_5f9f40(arg2)
        arg2 = sub_5f9f90(arg2)
        int32_t edx_1 = *arg3
        arg5 = arg2
        
        if ((edx_1 s>= 0 || *arg1 s>= 0) && (edx_1 s< eax || *arg1 s< eax))
            int32_t* ecx_1 = *arg4
            
            if ((ecx_1 s>= 0 || *ebx s>= 0) && (ecx_1 s< arg2 || *ebx s< arg2))
                int32_t ecx_2 = *arg1
                
                if (ecx_2 != edx_1)
                    if (edx_1 s< 0)
                        arg2 = arg5
                        *arg4 = ecx_1 - divs.dp.d(sx.q((*ebx - ecx_1) * edx_1), ecx_2 - edx_1)
                        *arg3 = 0
                    
                    int32_t ecx_6 = *arg1
                    
                    if (ecx_6 s< 0)
                        int32_t edx_4 = *arg3
                        arg2 = arg5
                        *ebx = *arg4 - divs.dp.d(sx.q((*ebx - *arg4) * edx_4), ecx_6 - edx_4)
                        *arg1 = 0
                    
                    int32_t edx_7 = *arg3
                    
                    if (edx_7 s>= eax)
                        *arg4 += divs.dp.d(sx.q((eax - edx_7 - 1) * (*ebx - *arg4)), *arg1 - *arg3)
                        arg2 = arg5
                        *arg3 = eax - 1
                    
                    if (*arg1 s>= eax)
                        *ebx = divs.dp.d(sx.q((eax - *arg3 - 1) * (*ebx - *arg4)), *arg1 - *arg3)
                            + *arg4
                        arg2 = arg5
                        *arg1 = eax - 1
                
                int32_t ecx_17 = *ebx
                int32_t edx_16 = *arg4
                
                if (ecx_17 != edx_16)
                    if (edx_16 s< 0)
                        arg2 = arg5
                        *arg3 -= divs.dp.d(sx.q((*arg1 - *arg3) * edx_16), ecx_17 - edx_16)
                        *arg4 = 0
                    
                    int32_t ecx_21 = *ebx
                    
                    if (ecx_21 s< 0)
                        int32_t edx_19 = *arg4
                        arg2 = arg5
                        *arg1 = *arg3 - divs.dp.d(sx.q((*arg1 - *arg3) * edx_19), ecx_21 - edx_19)
                        *ebx = 0
                    
                    int32_t edx_22 = *arg4
                    
                    if (edx_22 s>= arg2)
                        *arg3 +=
                            divs.dp.d(sx.q((arg2 - edx_22 - 1) * (*arg1 - *arg3)), *ebx - *arg4)
                        arg2 = arg5
                        *arg4 = arg2 - 1
                    
                    if (*ebx s>= arg2)
                        *arg1 = divs.dp.d(sx.q((arg2 - *arg4 - 1) * (*arg1 - *arg3)), *ebx - *arg4)
                            + *arg3
                        arg2 = arg5
                        *ebx = arg2 - 1
                
                int32_t esi_1 = *arg3
                
                if (esi_1 s>= 0)
                    int32_t edi_1 = *arg1
                    
                    if (edi_1 s>= 0 && esi_1 s< eax && edi_1 s< eax)
                        int32_t ebp_1 = *arg4
                        
                        if (ebp_1 s>= 0)
                            int32_t ebx_1 = *ebx
                            
                            if (ebx_1 s>= 0 && ebp_1 s< arg2 && ebx_1 s< arg2)
                                arg2.b = 1
                                return arg2

arg2.b = 0
return arg2
