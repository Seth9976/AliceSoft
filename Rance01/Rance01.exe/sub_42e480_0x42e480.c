// 函数: sub_42e480
// 地址: 0x42e480
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1
int32_t* result = arg3
int32_t* i = result[7]

if (i != result[8])
    do
        int32_t edi_1 = **i
        int32_t eax_1 = arg2[1]
        var_4 = edi_1
        int32_t edx_1
        
        if (&var_4 u< eax_1)
            edx_1 = *arg2
        
        if (&var_4 u>= eax_1 || edx_1 u> &var_4)
            int32_t ecx_5 = arg2[2]
            
            if (eax_1 == ecx_5)
                int32_t edx_5 = *arg2
                int32_t eax_6 = (eax_1 - edx_5) s>> 2
                
                if (eax_6 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_7 = (ecx_5 - edx_5) s>> 2
                
                if (eax_6 + 1 u> ecx_7)
                    uint32_t edx_7 = ecx_7 u>> 1
                    int32_t ecx_8
                    
                    if (0x3fffffff - edx_7 u>= ecx_7)
                        ecx_8 = ecx_7 + edx_7
                    else
                        ecx_8 = 0
                    
                    if (ecx_8 u< eax_6 + 1)
                        ecx_8 = eax_6 + 1
                    
                    sub_6b0560(arg2, ecx_8)
            
            result = arg2[1]
            
            if (result != 0)
                *result = edi_1
        else
            int32_t ecx = arg2[2]
            
            if (eax_1 == ecx)
                int32_t eax_3 = (eax_1 - edx_1) s>> 2
                
                if (eax_3 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_2 = (ecx - edx_1) s>> 2
                
                if (eax_3 + 1 u> ecx_2)
                    uint32_t edx_3 = ecx_2 u>> 1
                    int32_t ecx_3
                    
                    if (0x3fffffff - edx_3 u>= ecx_2)
                        ecx_3 = ecx_2 + edx_3
                    else
                        ecx_3 = 0
                    
                    if (ecx_3 u< eax_3 + 1)
                        ecx_3 = eax_3 + 1
                    
                    sub_6b0560(arg2, ecx_3)
            
            result = arg2[1]
            
            if (result != 0)
                *result = *(*arg2 + ((&var_4 - edx_1) s>> 2 << 2))
        
        arg2[1] += 4
        i = &i[1]
    while (i != arg3[8])

return result
