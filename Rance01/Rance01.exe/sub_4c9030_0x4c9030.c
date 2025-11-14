// 函数: sub_4c9030
// 地址: 0x4c9030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg2
char* result = *esi

if (&result[4] u<= esi[1])
    uint32_t edx_2 = zx.d(result[1])
    uint32_t i_1 = ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | edx_2) << 8 | zx.d(*result)
    *esi = &result[4]
    uint32_t i_2 = i_1
    int32_t eax_3 = (arg1[1] - *arg1) s>> 2
    
    if (eax_3 s> i_1)
        uint32_t i = i_1
        
        if (i_1 s< eax_3)
            do
                if (i s>= 0)
                    uint32_t eax_4 = *arg1
                    
                    if (i s< (arg1[1] - eax_4) s>> 2 && *(eax_4 + (i << 2)) != 0)
                        sub_4c3d90(*(eax_4 + (i << 2)))
                        *(*arg1 + (i << 2)) = 0
                
                i += 1
            while (i s< (arg1[1] - *arg1) s>> 2)
        
        sub_65a090(arg1, i_1)
        esi = arg2
    else if (eax_3 s< i_1)
        sub_51af30(i_1, edx_2, &result[4], arg1)
    
    int32_t ebx_1 = 0
    
    if (i_1 s> 0)
        do
            result = *esi
            int32_t* ecx_5 = &result[1]
            
            if (ecx_5 u> esi[1])
                goto label_4c90c4
            
            bool cond:2_1 = *result == 1
            *esi = ecx_5
            result.b = cond:2_1
            
            if (result.b != 0)
                int32_t ebp_7 = ebx_1 << 2
                int32_t** eax_11 = *arg1 + ebp_7
                
                if (*eax_11 == 0)
                    *eax_11 = sub_4c8c30(ecx_5, arg1)
                
                result, edx_2 = sub_4c6da0(*(*arg1 + ebp_7), arg2)
                
                if (result.b == 0)
                    goto label_4c90c4
                
                i_1 = i_2
                esi = arg2
            else if (ebx_1 s>= 0)
                uint32_t eax_9 = *arg1
                
                if (ebx_1 s< (arg1[1] - eax_9) s>> 2 && *(eax_9 + (ebx_1 << 2)) != 0)
                    sub_4c3d90(*(eax_9 + (ebx_1 << 2)))
                    *(*arg1 + (ebx_1 << 2)) = 0
                    esi = arg2
            
            ebx_1 += 1
        while (ebx_1 s< i_1)
    
    result = *esi
    
    if (&result[1] u<= esi[1])
        bool cond:1 = *result == 1
        result.b = 1
        edx_2.b = cond:1
        arg1[5].b = edx_2.b
        *esi += 1
        return result

label_4c90c4:
result.b = 0
return result
