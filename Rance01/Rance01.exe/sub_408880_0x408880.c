// 函数: sub_408880
// 地址: 0x408880
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg6
int32_t edx = *arg2
int32_t ecx = *ebx
int32_t result = *arg1

if (ecx + edx s> result)
    if (edx s< result)
        *arg4 += result - edx
        ebx = arg6
        *ebx = ecx - result + edx
        *arg2 = result
    
    int32_t ecx_3 = arg1[2]
    int32_t edi_1 = *arg2
    int32_t edx_1 = ecx_3 + result
    
    if (edi_1 s< edx_1)
        if (*ebx + edi_1 s> edx_1)
            *ebx = ecx_3 - edi_1 + result
        
        int32_t* ebp_5 = arg3
        int32_t edx_2 = *ebp_5
        result = *arg7
        int32_t edi_2 = arg1[1]
        
        if (result + edx_2 s> edi_2)
            int32_t* edx_3
            
            if (edx_2 s>= edi_2)
                edx_3 = arg7
            else
                *arg5 += edi_2 - edx_2
                ebp_5 = arg3
                ebx = arg6
                edx_3 = arg7
                *edx_3 = result - edi_2 + edx_2
                *ebp_5 = edi_2
            
            int32_t ecx_8 = *ebp_5
            result = arg1[3] + edi_2
            
            if (ecx_8 s< result)
                if (*edx_3 + ecx_8 s> result)
                    *edx_3 = result - ecx_8
                
                if (*ebx s> 0 && *edx_3 s> 0)
                    result.b = 1
                    return result

result.b = 0
return result
