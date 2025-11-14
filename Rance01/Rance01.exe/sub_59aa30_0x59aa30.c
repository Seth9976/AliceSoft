// 函数: sub_59aa30
// 地址: 0x59aa30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1
int32_t* ebp = arg3
var_4 = (ebp[1] - *ebp) s>> 2
int32_t* result = sub_416780(&var_4, arg2)

for (int32_t* i = *ebp; i != ebp[1]; i = &i[1])
    int32_t eax_4 = arg2[1]
    int32_t edx_1
    
    if (i u< eax_4)
        edx_1 = *arg2
    
    if (i u>= eax_4 || edx_1 u> i)
        int32_t ecx_5 = arg2[2]
        
        if (eax_4 == ecx_5)
            int32_t edx_5 = *arg2
            int32_t eax_9 = (eax_4 - edx_5) s>> 2
            
            if (eax_9 u> 0x3ffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t ecx_7 = (ecx_5 - edx_5) s>> 2
            
            if (eax_9 + 1 u> ecx_7)
                uint32_t edx_7 = ecx_7 u>> 1
                int32_t ecx_8
                
                if (0x3fffffff - edx_7 u>= ecx_7)
                    ecx_8 = ecx_7 + edx_7
                else
                    ecx_8 = 0
                
                if (ecx_8 u< eax_9 + 1)
                    ecx_8 = eax_9 + 1
                
                sub_6b0560(arg2, ecx_8)
        
        result = arg2[1]
        
        if (result != 0)
            *result = *i
    else
        int32_t ecx = arg2[2]
        
        if (eax_4 == ecx)
            int32_t eax_6 = (eax_4 - edx_1) s>> 2
            
            if (eax_6 u> 0x3ffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t ecx_2 = (ecx - edx_1) s>> 2
            
            if (eax_6 + 1 u> ecx_2)
                uint32_t edx_3 = ecx_2 u>> 1
                int32_t ecx_3
                
                if (0x3fffffff - edx_3 u>= ecx_2)
                    ecx_3 = ecx_2 + edx_3
                else
                    ecx_3 = 0
                
                if (ecx_3 u< eax_6 + 1)
                    ecx_3 = eax_6 + 1
                
                sub_6b0560(arg2, ecx_3)
                ebp = arg3
        
        result = arg2[1]
        
        if (result != 0)
            *result = *(*arg2 + ((i - edx_1) s>> 2 << 2))
    
    arg2[1] += 4

return result
