// 函数: sub_435bb0
// 地址: 0x435bb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
int32_t* result = arg2[1]
int32_t ebx = arg1[1]
int32_t* ebp = *arg1
int32_t* i = *result

if (i != result)
    do
        int32_t* eax_1 = ebp
        
        if (ebp != ebx)
            while (*eax_1 != i[3])
                eax_1 = &eax_1[1]
                
                if (eax_1 == ebx)
                    goto label_435bf1
        
        if (ebp == ebx || eax_1 == ebx)
        label_435bf1:
            int32_t* edi_1 = i[4]
            
            if (edi_1 != 0)
                sub_434bc0(edi_1)
                int32_t* var_18_1 = edi_1
                sub_6b4d5b()
            
            int32_t* i_7 = i
            
            if (*(i + 0x15) != 0)
                sub_436320(arg2, &var_4, i_7)
            else
                int32_t* i_1 = i[2]
                
                if (*(i_1 + 0x15) != 0)
                    int32_t* i_3 = i[1]
                    
                    if (*(i_3 + 0x15) == 0)
                        while (i == i_3[2])
                            i = i_3
                            i_3 = i_3[1]
                            
                            if (*(i_3 + 0x15) != 0)
                                break
                    
                    i = i_3
                    sub_436320(arg2, &var_4, i_7)
                else
                    i = i_1
                    int32_t* i_2 = *i
                    
                    if (*(i_2 + 0x15) != 0)
                        sub_436320(arg2, &var_4, i_7)
                    else
                        do
                            i = i_2
                            i_2 = *i
                        while (*(i_2 + 0x15) == 0)
                        
                        sub_436320(arg2, &var_4, i_7)
        else if (*(i + 0x15) == 0)
            int32_t* i_4 = i[2]
            
            if (*(i_4 + 0x15) != 0)
                int32_t* i_6 = i[1]
                
                if (*(i_6 + 0x15) == 0)
                    while (i == i_6[2])
                        i = i_6
                        i_6 = i_6[1]
                        
                        if (*(i_6 + 0x15) != 0)
                            break
                
                i = i_6
            else
                i = i_4
                int32_t* i_5 = *i
                
                while (*(i_5 + 0x15) == 0)
                    i = i_5
                    i_5 = *i
        
        result = arg2
    while (i != result[1])

return result
