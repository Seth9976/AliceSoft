// 函数: sub_5d87b0
// 地址: 0x5d87b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* ecx = arg1[1]
int128_t* edi = *arg1

if (edi != ecx)
    int32_t ebx_1 = 0 s>> 2 << 2
    sub_6b49d0(edi, ecx, ebx_1)
    arg1[1] = ebx_1 + edi

int32_t* result = arg2[7]
int32_t* ebx_3 = *result
arg2 = result

if (ebx_3 != result)
    do
        int32_t eax_4 = arg1[1]
        int32_t edx_1
        
        if (&ebx_3[3] u< eax_4)
            edx_1 = *arg1
        
        if (&ebx_3[3] u>= eax_4 || edx_1 u> &ebx_3[3])
            int32_t ecx_6 = arg1[2]
            
            if (eax_4 == ecx_6)
                int32_t edx_5 = *arg1
                int32_t eax_9 = (eax_4 - edx_5) s>> 2
                
                if (eax_9 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_8 = (ecx_6 - edx_5) s>> 2
                
                if (eax_9 + 1 u> ecx_8)
                    uint32_t edx_7 = ecx_8 u>> 1
                    int32_t ecx_9
                    
                    if (0x3fffffff - edx_7 u>= ecx_8)
                        ecx_9 = ecx_8 + edx_7
                    else
                        ecx_9 = 0
                    
                    if (ecx_9 u< eax_9 + 1)
                        ecx_9 = eax_9 + 1
                    
                    sub_6b0560(arg1, ecx_9)
            
            result = arg1[1]
            
            if (result != 0)
                *result = ebx_3[3]
        else
            int32_t ecx_1 = arg1[2]
            
            if (eax_4 == ecx_1)
                int32_t eax_6 = (eax_4 - edx_1) s>> 2
                
                if (eax_6 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_3 = (ecx_1 - edx_1) s>> 2
                
                if (eax_6 + 1 u> ecx_3)
                    uint32_t edx_3 = ecx_3 u>> 1
                    int32_t ecx_4
                    
                    if (0x3fffffff - edx_3 u>= ecx_3)
                        ecx_4 = ecx_3 + edx_3
                    else
                        ecx_4 = 0
                    
                    if (ecx_4 u< eax_6 + 1)
                        ecx_4 = eax_6 + 1
                    
                    sub_6b0560(arg1, ecx_4)
            
            result = arg1[1]
            
            if (result != 0)
                *result = *(*arg1 + ((&ebx_3[3] - edx_1) s>> 2 << 2))
        
        arg1[1] += 4
        
        if (*(ebx_3 + 0x15) == 0)
            int32_t* result_1 = ebx_3[2]
            
            if (*(result_1 + 0x15) != 0)
                result = ebx_3[1]
                
                if (*(result + 0x15) == 0)
                    int32_t* i = ebx_3
                    
                    while (i == result[2])
                        i = result
                        result = result[1]
                        
                        if (*(result + 0x15) != 0)
                            break
                
                ebx_3 = result
            else
                result = *result_1
                
                while (*(result + 0x15) == 0)
                    result_1 = result
                    result = *result_1
                
                ebx_3 = result_1
    while (ebx_3 != arg2)

return result
