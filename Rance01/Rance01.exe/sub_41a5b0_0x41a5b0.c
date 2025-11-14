// 函数: sub_41a5b0
// 地址: 0x41a5b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_2 = *(arg1 + 0x28)
int32_t* result = *(arg1 + 0x2c)

if (ecx_2 != result)
    int32_t eax_1 = (result - ecx_2) s>> 2
    result = eax_1 - 1
    int32_t* i = result
    
    if (eax_1 - 1 s>= 0)
        int32_t* i_1
        
        do
            int32_t ecx = *(arg1 + 0x2c)
            result = *(arg1 + 0x28)
            
            if (result != ecx)
                while (*result != i)
                    result = &result[1]
                    
                    if (result == ecx)
                        break
                
                if (result != ecx)
                    result =
                        sub_6b49d0(result, &result[1], ((*(arg1 + 0x2c) - &result[1]) s>> 2) * 4)
                    *(arg1 + 0x2c) -= 4
                    *(arg1 + 0x25) = 1
            
            i_1 = i
            i -= 1
        while (i_1 - 1 s>= 0)
    
    *(arg1 + 0x25) = 1

return result
