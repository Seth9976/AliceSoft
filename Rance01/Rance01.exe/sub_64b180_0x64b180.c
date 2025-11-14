// 函数: sub_64b180
// 地址: 0x64b180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg1

if (result != arg2)
    void* result_1 = result + 0x28
    
    if (result_1 != arg2)
        while (true)
            int32_t eax = *(result + 0x20)
            int32_t var_28
            __builtin_memcpy(&var_28, result_1, 0x28)
            void* result_2 = result_1
            int32_t var_8
            void* result_3
            
            if (var_8 s< eax || (var_8 s<= eax && var_28 s< *arg1))
                result = result_1
                
                if (arg1 != result_1)
                    do
                        result -= 0x28
                        __builtin_memcpy(result + 0x28, result, 0x28)
                    while (result != arg1)
                
                result_3 = arg1
            else
                result = result_1
                
                while (true)
                    int32_t ecx_3 = *(result - 8)
                    result -= 0x28
                    
                    if (var_8 s>= ecx_3)
                        if (var_8 s> ecx_3)
                            break
                        
                        if (var_28 s>= *result)
                            break
                    
                    __builtin_memcpy(result_2, result, 0x28)
                    result_2 = result
                
                result_3 = result_2
            
            result_1 += 0x28
            __builtin_memcpy(result_3, &var_28, 0x28)
            
            if (result_1 == arg2)
                break
            
            result = arg1

return result
