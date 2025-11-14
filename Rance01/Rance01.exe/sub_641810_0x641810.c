// 函数: sub_641810
// 地址: 0x641810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg1

if (result != arg2)
    void* result_2 = result + 0x8c
    
    if (result_2 != arg2)
        while (true)
            int32_t eax = *(result + 0x1c)
            int32_t var_98
            __builtin_memcpy(&var_98, result_2, 0x8c)
            void* result_1 = result_2
            int32_t var_7c
            void* result_3
            
            if (var_7c s< eax || (var_7c s<= eax && var_98 s< *arg1))
                result = result_2
                
                if (arg1 != result_2)
                    do
                        result -= 0x8c
                        __builtin_memcpy(result + 0x8c, result, 0x8c)
                    while (result != arg1)
                
                result_3 = arg1
            else
                result = result_2
                
                while (true)
                    int32_t ecx_2 = *(result - 0x70)
                    result -= 0x8c
                    
                    if (var_7c s>= ecx_2)
                        if (var_7c s> ecx_2)
                            break
                        
                        if (var_98 s>= *result)
                            break
                    
                    __builtin_memcpy(result_1, result, 0x8c)
                    result_1 = result
                
                result_3 = result_1
            
            result_2 += 0x8c
            __builtin_memcpy(result_3, &var_98, 0x8c)
            
            if (result_2 == arg2)
                break
            
            result = arg1

return result
