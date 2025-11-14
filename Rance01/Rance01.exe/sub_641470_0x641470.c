// 函数: sub_641470
// 地址: 0x641470
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg2

if (arg1 != result)
    void* result_4 = &arg1[0x23]
    void* result_1 = result_4
    
    if (result_4 != result)
        while (true)
            int32_t eax_1 = arg1[5] * arg1[4]
            int32_t* result_2 = result_4
            int32_t var_98
            __builtin_memcpy(&var_98, result_4, 0x8c)
            int32_t var_88
            int32_t var_84
            int32_t edx_2 = var_88 * var_84
            int32_t* result_3
            int32_t* result_5
            
            if (edx_2 s< eax_1 || (edx_2 s<= eax_1 && var_98 s< *arg1))
                result_3 = result_1
                result = result_3
                
                if (arg1 != result_3)
                    do
                        result -= 0x8c
                        __builtin_memcpy(&result[0x23], result, 0x8c)
                    while (result != arg1)
                
                result_5 = arg1
            else
                result = result_1
                
                while (true)
                    int32_t ecx_2 = result[-0x1e] * result[-0x1f]
                    result -= 0x8c
                    
                    if (edx_2 s>= ecx_2)
                        if (edx_2 s> ecx_2)
                            break
                        
                        if (var_98 s>= *result)
                            break
                    
                    __builtin_memcpy(result_2, result, 0x8c)
                    result_2 = result
                
                result_5 = result_2
                result_3 = result_1
            
            __builtin_memcpy(result_5, &var_98, 0x8c)
            result_1 = &result_3[0x23]
            
            if (&result_3[0x23] == arg2)
                break
            
            result_4 = result_1

return result
