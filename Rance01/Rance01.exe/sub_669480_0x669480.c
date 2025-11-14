// 函数: sub_669480
// 地址: 0x669480
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg3
int32_t* result = arg1

while (edi != arg4)
    if (result != edi)
        int32_t ecx = edi[1]
        int128_t* eax = *edi
        int32_t edx_2 = (ecx - eax) s>> 2
        
        if (edx_2 != 0)
            int128_t* ebp_3 = *result
            int32_t ebx_4 = (result[1] - ebp_3) s>> 2
            
            if (edx_2 u<= ebx_4)
                sub_6b49d0(ebp_3, eax, ((ecx - eax) s>> 2) * 4)
                result[1] = *result + ((edi[1] - *edi) s>> 2 << 2)
            else if (edx_2 u> (result[2] - ebp_3) s>> 2)
                if (ebp_3 != 0)
                    int128_t* var_14_4 = ebp_3
                    sub_6b4d5b()
                
                int32_t ebx_8 = (edi[1] - *edi) s>> 2
                *result = 0
                result[1] = 0
                result[2] = 0
                
                if (ebx_8 != 0)
                    if (ebx_8 u> 0x3fffffff)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    int128_t* eax_12 = sub_65a1c0(ebx_8)
                    result[2] = eax_12 + (ebx_8 << 2)
                    *result = eax_12
                    result[1] = eax_12
                    int128_t* edx_9 = *edi
                    void* ebx_9 = (edi[1] - edx_9) s>> 2 << 2
                    result[1] = sub_6b49d0(eax_12, edx_9, ebx_9) + ebx_9
            else
                void* ebx_5 = eax + (ebx_4 << 2)
                sub_6b49d0(ebp_3, eax, ((ebx_5 - eax) s>> 2) * 4)
                int32_t ebp_4 = (edi[1] - ebx_5) s>> 2 << 2
                result[1] = sub_6b49d0(result[1], ebx_5, ebp_4) + ebp_4
        else
            int128_t* ecx_1 = result[1]
            int128_t* ebx_1 = *result
            
            if (ebx_1 != ecx_1)
                int32_t ebp_1 = 0 s>> 2 << 2
                sub_6b49d0(ebx_1, ecx_1, ebp_1)
                result[1] = ebp_1 + ebx_1
    
    edi = &edi[4]
    result = &result[4]

return result
