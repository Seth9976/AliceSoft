// 函数: sub_63ff10
// 地址: 0x63ff10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg1

if (result != arg2)
    int32_t* result_1 = &result[0x23]
    
    if (result_1 != arg2)
        while (true)
            int32_t eax = *result
            int32_t var_98
            __builtin_memcpy(&var_98, result_1, 0x8c)
            int32_t* result_2 = result_1
            result = result_1
            
            if (var_98 s>= eax)
                while (true)
                    result -= 0x8c
                    
                    if (var_98 s>= *result)
                        break
                    
                    __builtin_memcpy(result_2, result, 0x8c)
                    result_2 = result
            else
                result_2 = arg1
                
                if (result_2 != result_1)
                    do
                        result -= 0x8c
                        __builtin_memcpy(&result[0x23], result, 0x8c)
                    while (result != result_2)
            
            result_1 = &result_1[0x23]
            __builtin_memcpy(result_2, &var_98, 0x8c)
            
            if (result_1 == arg2)
                break
            
            result = arg1

return result
