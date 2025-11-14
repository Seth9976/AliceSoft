// 函数: sub_64b4c0
// 地址: 0x64b4c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg2
int32_t ebx
int32_t var_2c = ebx
int32_t* ebp = arg1

if (ebp != result)
    void* result_1 = &ebp[0xa]
    
    if (result_1 != result)
        while (true)
            result.b = ebp[9].b
            int32_t var_28
            __builtin_memcpy(&var_28, result_1, 0x28)
            char var_4
            ebx.b = var_4
            arg1 = result_1
            
            if (ebx.b == 0)
                if (result.b == 0 && var_28 s>= *ebp)
                    goto label_64b537
                
                goto label_64b511
            
            void* edi_4
            
            if (result.b == 0 || var_28 s>= *ebp)
            label_64b537:
                result = result_1
                
                while (true)
                    int32_t esi_4 = *(result - 0x28)
                    char ecx_1 = *(result - 4)
                    result -= 0x28
                    
                    if (ebx.b != 0)
                        if (ecx_1 == 0)
                            break
                    else if (ecx_1 != 0)
                        __builtin_memcpy(arg1, result, 0x28)
                        arg1 = result
                        continue
                    
                    if (var_28 s>= esi_4)
                        break
                    
                    __builtin_memcpy(arg1, result, 0x28)
                    arg1 = result
                
                edi_4 = arg1
            else
            label_64b511:
                result = result_1
                
                if (ebp != result_1)
                    do
                        result -= 0x28
                        __builtin_memcpy(result + 0x28, result, 0x28)
                    while (result != ebp)
                
                edi_4 = ebp
            
            result_1 += 0x28
            __builtin_memcpy(edi_4, &var_28, 0x28)
            
            if (result_1 == arg2)
                break

return result
