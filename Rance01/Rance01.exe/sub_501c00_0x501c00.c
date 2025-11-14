// 函数: sub_501c00
// 地址: 0x501c00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = *(arg2 + 4)
int32_t* i = *result

if (i != result)
    do
        int32_t eax = *(arg1 + 0x3c)
        int32_t edx_1
        
        if (&i[3] u< eax)
            edx_1 = *(arg1 + 0x38)
        
        if (&i[3] u>= eax || edx_1 u> &i[3])
            int32_t ecx_5 = *(arg1 + 0x40)
            
            if (eax == ecx_5)
                int32_t edx_5 = *(arg1 + 0x38)
                int32_t eax_5 = (eax - edx_5) s>> 2
                
                if (eax_5 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_7 = (ecx_5 - edx_5) s>> 2
                
                if (eax_5 + 1 u> ecx_7)
                    uint32_t edx_7 = ecx_7 u>> 1
                    int32_t ecx_8
                    
                    if (0x3fffffff - edx_7 u>= ecx_7)
                        ecx_8 = ecx_7 + edx_7
                    else
                        ecx_8 = 0
                    
                    if (ecx_8 u< eax_5 + 1)
                        ecx_8 = eax_5 + 1
                    
                    sub_6b0560(arg1 + 0x38, ecx_8)
            
            result = *(arg1 + 0x3c)
            
            if (result != 0)
                *result = i[3]
        else
            int32_t ecx = *(arg1 + 0x40)
            
            if (eax == ecx)
                int32_t eax_2 = (eax - edx_1) s>> 2
                
                if (eax_2 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_2 = (ecx - edx_1) s>> 2
                
                if (eax_2 + 1 u> ecx_2)
                    uint32_t edx_3 = ecx_2 u>> 1
                    int32_t ecx_3
                    
                    if (0x3fffffff - edx_3 u>= ecx_2)
                        ecx_3 = ecx_2 + edx_3
                    else
                        ecx_3 = 0
                    
                    if (ecx_3 u< eax_2 + 1)
                        ecx_3 = eax_2 + 1
                    
                    sub_6b0560(arg1 + 0x38, ecx_3)
            
            result = *(arg1 + 0x3c)
            
            if (result != 0)
                *result = *(*(arg1 + 0x38) + ((&i[3] - edx_1) s>> 2 << 2))
        
        *(arg1 + 0x3c) += 4
        
        if (*(i + 0x11) == 0)
            int32_t* ecx_10 = i[2]
            
            if (*(ecx_10 + 0x11) != 0)
                result = i[1]
                
                if (*(result + 0x11) == 0)
                    while (i == result[2])
                        i = result
                        result = result[1]
                        
                        if (*(result + 0x11) != 0)
                            break
                
                i = result
            else
                result = *ecx_10
                
                while (*(result + 0x11) == 0)
                    ecx_10 = result
                    result = *ecx_10
                
                i = ecx_10
    while (i != *(arg2 + 4))

return result
