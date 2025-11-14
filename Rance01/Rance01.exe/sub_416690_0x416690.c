// 函数: sub_416690
// 地址: 0x416690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = *(arg1 + 0xc)
int32_t* i = *result

if (i != result)
    do
        result = i[4]
        
        if (result[0xa] != 0)
            int32_t edx_2
            result, edx_2 = (*(*result[0xa] + 8))()
            
            if (result == 0xb)
                int32_t eax_1 = arg2[1]
                int32_t ecx_2
                
                if (&i[3] u< eax_1)
                    ecx_2 = *arg2
                
                if (&i[3] u>= eax_1 || ecx_2 u> &i[3])
                    if (eax_1 == arg2[2])
                        sub_40d3d0(arg2, edx_2, 1)
                    
                    result = arg2[1]
                    
                    if (result != 0)
                        *result = i[3]
                else
                    if (eax_1 == arg2[2])
                        sub_40d3d0(arg2, edx_2, 1)
                    
                    result = arg2[1]
                    
                    if (result != 0)
                        *result = *(*arg2 + ((&i[3] - ecx_2) s>> 2 << 2))
                
                arg2[1] += 4
        
        if (*(i + 0x15) == 0)
            int32_t* ecx_5 = i[2]
            
            if (*(ecx_5 + 0x15) != 0)
                result = i[1]
                
                if (*(result + 0x15) == 0)
                    while (i == result[2])
                        i = result
                        result = result[1]
                        
                        if (*(result + 0x15) != 0)
                            break
                
                i = result
            else
                result = *ecx_5
                
                while (*(result + 0x15) == 0)
                    ecx_5 = result
                    result = *ecx_5
                
                i = ecx_5
    while (i != *(arg1 + 0xc))

return result
