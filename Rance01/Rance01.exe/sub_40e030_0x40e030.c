// 函数: sub_40e030
// 地址: 0x40e030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_1 = (*(*arg3 + 0x10))()
int32_t* result = (*(*arg3 + 0x14))()
int32_t edx_2 = *arg1
arg3 = result

if ((edx_2 s>= 0 || *arg2 s>= 0) && (edx_2 s< eax_1 || *arg2 s< eax_1))
    int32_t* ecx_3 = *arg4
    
    if ((ecx_3 s>= 0 || *arg5 s>= 0) && (ecx_3 s< result || *arg5 s< result))
        int32_t ecx_4 = *arg2
        
        if (ecx_4 != edx_2)
            if (edx_2 s< 0)
                result = arg3
                *arg4 = ecx_3 - divs.dp.d(sx.q((*arg5 - ecx_3) * edx_2), ecx_4 - edx_2)
                *arg1 = 0
            
            int32_t ecx_8 = *arg2
            
            if (ecx_8 s< 0)
                int32_t edx_5 = *arg1
                result = arg3
                *arg5 = *arg4 - divs.dp.d(sx.q((*arg5 - *arg4) * edx_5), ecx_8 - edx_5)
                *arg2 = 0
            
            int32_t edx_8 = *arg1
            
            if (edx_8 s>= eax_1)
                *arg4 += divs.dp.d(sx.q((eax_1 - edx_8 - 1) * (*arg5 - *arg4)), *arg2 - *arg1)
                result = arg3
                *arg1 = eax_1 - 1
            
            if (*arg2 s>= eax_1)
                *arg5 =
                    divs.dp.d(sx.q((eax_1 - *arg1 - 1) * (*arg5 - *arg4)), *arg2 - *arg1) + *arg4
                result = arg3
                *arg2 = eax_1 - 1
        
        int32_t ecx_19 = *arg5
        int32_t edx_17 = *arg4
        
        if (ecx_19 != edx_17)
            if (edx_17 s< 0)
                result = arg3
                *arg1 -= divs.dp.d(sx.q((*arg2 - *arg1) * edx_17), ecx_19 - edx_17)
                *arg4 = 0
            
            int32_t ecx_23 = *arg5
            
            if (ecx_23 s< 0)
                int32_t edx_20 = *arg4
                result = arg3
                *arg2 = *arg1 - divs.dp.d(sx.q((*arg2 - *arg1) * edx_20), ecx_23 - edx_20)
                *arg5 = 0
            
            int32_t edx_23 = *arg4
            
            if (edx_23 s>= result)
                *arg1 += divs.dp.d(sx.q((result - edx_23 - 1) * (*arg2 - *arg1)), *arg5 - *arg4)
                result = arg3
                *arg4 = result - 1
            
            if (*arg5 s>= result)
                *arg2 =
                    divs.dp.d(sx.q((result - *arg4 - 1) * (*arg2 - *arg1)), *arg5 - *arg4) + *arg1
                result = arg3
                *arg5 = result - 1
        
        int32_t esi_1 = *arg1
        
        if (esi_1 s>= 0)
            int32_t edi_1 = *arg2
            
            if (edi_1 s>= 0 && esi_1 s< eax_1 && edi_1 s< eax_1)
                int32_t ebp_1 = *arg4
                
                if (ebp_1 s>= 0)
                    int32_t ebx_1 = *arg5
                    
                    if (ebx_1 s>= 0 && ebp_1 s< result && ebx_1 s< result)
                        result.b = 1
                        return result

result.b = 0
return result
