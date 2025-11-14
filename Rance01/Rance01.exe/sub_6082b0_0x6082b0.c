// 函数: sub_6082b0
// 地址: 0x6082b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result

if (arg2 s>= 0)
    int32_t eax
    int32_t edx_3
    edx_3:eax = muls.dp.d(0x2aaaaaab, *(arg3 + 0xab0) - *(arg3 + 0xaac))
    int32_t edx_4 = edx_3 s>> 2
    
    if (arg2 s< (edx_4 u>> 0x1f) + edx_4)
        result = *(arg3 + 0xaac) + arg2 * 0x18
        
        if (arg1 s>= 0)
            int32_t edx_6 = *result
            
            if (arg1 s< (*(result + 4) - edx_6) s>> 2)
                result = edx_6 + (arg1 << 2)
                int32_t temp1_1
                
                do
                    int32_t edx_7 = *result
                    
                    if (edx_7 != 0xffffffff)
                        *arg4 = edx_7
                        result.b = 1
                        return result
                    
                    result -= 4
                    temp1_1 = arg1
                    arg1 -= 1
                while (temp1_1 - 1 s>= 0)

result.b = 0
return result
