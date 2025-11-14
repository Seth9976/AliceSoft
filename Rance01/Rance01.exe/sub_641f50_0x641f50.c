// 函数: sub_641f50
// 地址: 0x641f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg2

if (arg1 != result)
    int32_t* result_2 = &arg1[0x23]
    int32_t* result_3 = result_2
    
    if (result_2 != result)
        do
            int32_t eax = arg1[9]
            int32_t var_8c
            __builtin_memcpy(&var_8c, result_2, 0x8c)
            int32_t ecx_1 = arg1[0xa]
            int32_t esi_2 = arg1[0xb]
            int32_t* result_1 = result_2
            int32_t var_68
            int32_t var_64
            int32_t var_60
            int32_t* result_4
            
            if (var_68 s< eax || (var_68 s<= eax && (var_64 s< ecx_1 || (var_64 s<= ecx_1
                    && (var_60 s< esi_2 || (var_60 s<= esi_2 && var_8c s< *arg1))))))
                result = result_2
                
                if (arg1 != result_2)
                    do
                        result -= 0x8c
                        __builtin_memcpy(&result[0x23], result, 0x8c)
                    while (result != arg1)
                
                result_4 = arg1
            else
                result = result_2
                int32_t edi_3 = var_64
                
                while (true)
                    int32_t ecx_2 = result[-0x1a]
                    int32_t edx_1 = result[-0x19]
                    int32_t esi_4 = result[-0x18]
                    result -= 0x8c
                    
                    if (var_68 s>= ecx_2)
                        if (var_68 s> ecx_2)
                            break
                        
                        if (edi_3 s>= edx_1)
                            if (edi_3 s> edx_1)
                                break
                            
                            if (var_60 s>= esi_4)
                                if (var_60 s> esi_4)
                                    break
                                
                                if (var_8c s>= *result)
                                    break
                    
                    __builtin_memcpy(result_1, result, 0x8c)
                    edi_3 = var_64
                    result_1 = result
                
                result_4 = result_1
                result_2 = result_3
            
            result_2 = &result_2[0x23]
            __builtin_memcpy(result_4, &var_8c, 0x8c)
            result_3 = result_2
        while (result_2 != arg2)

return result
