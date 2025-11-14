// 函数: sub_5b60b0
// 地址: 0x5b60b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t edx
int32_t* result = _calloc(arg1, edx, ecx, 1, 0x28)
result[9] = 1

if (sub_5b4d20(0x18, arg1) == 0x564342)
    *result = sub_5b4d20(0x10, arg1)
    uint32_t i_1 = sub_5b4d20(0x18, arg1)
    result[1] = i_1
    
    if (i_1 != 0xffffffff)
        uint32_t i = *result
        int32_t edx_1 = 0
        
        for (; i != 0; i u>>= 1)
            edx_1 += 1
        
        int32_t ecx_1 = 0
        
        for (; i_1 != 0; i_1 u>>= 1)
            ecx_1 += 1
        
        if (ecx_1 + edx_1 s<= 0x18)
            int32_t eax_2 = sub_5b4d20(1, arg1)
            
            if (eax_2 == 0)
                int32_t eax_10 = sub_5b4d20(1, arg1)
                int32_t ebx_2 = result[1]
                int32_t eax_13
                int32_t edx_6
                edx_6:eax_13 = sx.q(arg1[1] + 7)
                int32_t eax_16
                eax_16.b = eax_10 == 0
                
                if ((((eax_16 << 2) + 1) * ebx_2 + 7) s>> 3
                        s<= arg1[4] - ((eax_13 + (edx_6 & 7)) s>> 3) - *arg1)
                    result[2] = sub_6b5c43(ebx_2 << 2)
                    
                    if (eax_10 == 0)
                        int32_t ebp_5 = 0
                        
                        if (ebx_2 s<= 0)
                        label_5b62c7:
                            int32_t eax_28 = sub_5b4d20(4, arg1)
                            result[3] = eax_28
                            
                            if (eax_28 == 0)
                                return result
                            
                            if (eax_28 - 1 u<= 1)
                                result[4] = sub_5b4d20(0x20, arg1)
                                result[5] = sub_5b4d20(0x20, arg1)
                                result[6] = sub_5b4d20(4, arg1) + 1
                                int32_t eax_34 = sub_5b4d20(1, arg1)
                                result[7] = eax_34
                                
                                if (eax_34 != 0xffffffff)
                                    int32_t eax_35 = result[3]
                                    int32_t ebx_4 = 0
                                    
                                    if (eax_35 == 1)
                                        long double x87_r0
                                        
                                        if (*result != 0)
                                            ebx_4 = sub_5c0f90(result, x87_r0)
                                        else
                                            ebx_4 = 0
                                    else if (eax_35 == 2)
                                        ebx_4 = *result * result[1]
                                    
                                    int32_t eax_42
                                    int32_t edx_12
                                    edx_12:eax_42 = sx.q(arg1[1] + 7)
                                    
                                    if ((result[6] * ebx_4 + 7) s>> 3
                                            s<= arg1[4] - ((eax_42 + (edx_12 & 7)) s>> 3) - *arg1)
                                        int32_t eax_49 = ebx_4 << 2
                                        int32_t ebp_6 = 0
                                        result[8] = sub_6b5c43(eax_49)
                                        bool cond:2_1 = ebx_4 == 0
                                        
                                        if (ebx_4 s> 0)
                                            do
                                                *(result[8] + (ebp_6 << 2)) =
                                                    sub_5b4d20(result[6], arg1)
                                                ebp_6 += 1
                                            while (ebp_6 s< ebx_4)
                                            
                                            cond:2_1 = ebx_4 == 0
                                        
                                        if (cond:2_1 || *(result[8] + eax_49 - 4) != 0xffffffff)
                                            return result
                        else
                            while (true)
                                int32_t eax_26 = sub_5b4d20(5, arg1)
                                
                                if (eax_26 == 0xffffffff)
                                    break
                                
                                *(result[2] + (ebp_5 << 2)) = eax_26 + 1
                                ebp_5 += 1
                                
                                if (ebp_5 s>= result[1])
                                    goto label_5b62c7
                    else
                        int32_t ebp_4 = 0
                        
                        if (ebx_2 s<= 0)
                            goto label_5b62c7
                        
                        while (true)
                            if (sub_5b4d20(1, arg1) == 0)
                                *(result[2] + (ebp_4 << 2)) = 0
                            else
                                int32_t eax_23 = sub_5b4d20(5, arg1)
                                
                                if (eax_23 == 0xffffffff)
                                    break
                                
                                *(result[2] + (ebp_4 << 2)) = eax_23 + 1
                            
                            ebp_4 += 1
                            
                            if (ebp_4 s>= result[1])
                                goto label_5b62c7
            else if (eax_2 == 1)
                int32_t eax_5 = sub_5b4d20(5, arg1)
                
                if (eax_5 != 0xffffffff)
                    int32_t ebp_1 = result[1]
                    int32_t ebx_1 = 0
                    result[2] = sub_6b5c43(ebp_1 << 2)
                    
                    if (ebp_1 s<= 0)
                        goto label_5b62c7
                    
                    int32_t ebp_2 = eax_5 + 1
                    var_4 = ebp_2 - 1
                    
                    while (true)
                        int32_t ecx_4 = result[1]
                        uint32_t i_2 = ecx_4 - ebx_1
                        int32_t eax_9 = 0
                        
                        if (ecx_4 != ebx_1)
                            do
                                eax_9 += 1
                                i_2 u>>= 1
                            while (i_2 != 0)
                        
                        int32_t i_4 = sub_5b4d20(eax_9, arg1)
                        
                        if (i_4 == 0xffffffff)
                            break
                        
                        if (var_4 s> 0x1f)
                            break
                        
                        if (i_4 s> result[1] - ebx_1)
                            break
                        
                        if (i_4 s> 0)
                            if ((i_4 - 1) s>> var_4.b s> 1)
                                break
                            
                            if (i_4 s> 0)
                                int32_t i_3
                                
                                do
                                    *(result[2] + (ebx_1 << 2)) = ebp_2
                                    ebx_1 += 1
                                    i_3 = i_4
                                    i_4 -= 1
                                while (i_3 != 1)
                        
                        var_4 += 1
                        ebp_2 += 1
                        
                        if (ebx_1 s>= result[1])
                            goto label_5b62c7

if (result[9] != 0)
    int32_t eax_54 = result[8]
    
    if (eax_54 != 0)
        __free_base(eax_54)
    
    int32_t eax_55 = result[2]
    
    if (eax_55 != 0)
        __free_base(eax_55)
    
    __builtin_memset(result, 0, 0x28)
    __free_base(result)

return 0
