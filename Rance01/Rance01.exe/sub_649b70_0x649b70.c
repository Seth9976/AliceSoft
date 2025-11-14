// 函数: sub_649b70
// 地址: 0x649b70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg2

if (arg1 != result && &arg1[0xa] != result)
    void* result_2 = &arg1[0xa]
    
    do
        int32_t var_28
        __builtin_memcpy(&var_28, result_2, 0x28)
        int32_t* result_1 = result_2
        result = result_2
        int32_t* result_3
        
        if (var_28 s>= *arg1)
            while (true)
                result -= 0x28
                result_3 = result_1
                
                if (var_28 s>= *result)
                    break
                
                __builtin_memcpy(result_3, result, 0x28)
                result_1 = result
        else
            if (arg1 != result_2)
                do
                    result -= 0x28
                    __builtin_memcpy(&result[0xa], result, 0x28)
                while (result != arg1)
            
            result_3 = arg1
        
        result_2 += 0x28
        __builtin_memcpy(result_3, &var_28, 0x28)
    while (result_2 != arg2)

return result
