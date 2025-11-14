// 函数: sub_415140
// 地址: 0x415140
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg1
int32_t* edi = arg3
int128_t* ecx = edi[1]
int128_t* esi = *edi

if (esi != ecx)
    int32_t ebx_1 = 0 s>> 2 << 2
    sub_6b49d0(esi, ecx, ebx_1)
    edi[1] = ebx_1 + esi

int32_t* result = ebp[3]
int32_t* i = *result
arg1 = i

if (i != result)
    do
        result = i[3]
        
        if (result s>= 0 && arg2 s>= result)
            int32_t* j = i[4]
            
            if (j != 0)
                if (ebp[1] != 0)
                    (*(*ebp[1] + 4))(j)
                
                int32_t var_8 = j[4]
                sub_416780(&var_8, edi)
                int32_t ecx_2 = ebp[7]
                int32_t* eax_7 = ebp[6]
                
                if (eax_7 != ecx_2)
                    while (*eax_7 != j)
                        eax_7 = &eax_7[1]
                        
                        if (eax_7 == ecx_2)
                            break
                
                sub_6b49d0(eax_7, &eax_7[1], ((ebp[7] - &eax_7[1]) s>> 2) * 4)
                ebp[7] -= 4
                int32_t j_1 = *ebp
                
                if (j_1 != 0)
                    int32_t eax_8 = j[6]
                    int32_t* ecx_4 = j[5]
                    
                    if (ecx_4 != eax_8)
                        while (*ecx_4 != j_1)
                            ecx_4 = &ecx_4[1]
                            
                            if (ecx_4 == eax_8)
                                break
                        
                        if (ecx_4 != eax_8)
                            sub_6b49d0(ecx_4, &ecx_4[1], ((eax_8 - &ecx_4[1]) s>> 2) * 4)
                            j[6] -= 4
                
                (*(*j + 4))()
                edi = arg3
            
            sub_5cc250(&arg1)
            void var_4
            result = sub_436320(&ebp[2], &var_4, i)
            i = arg1
        else if (*(i + 0x15) == 0)
            int32_t* ecx_7 = i[2]
            
            if (*(ecx_7 + 0x15) != 0)
                result = i[1]
                
                if (*(result + 0x15) == 0)
                    while (i == result[2])
                        i = result
                        result = result[1]
                        
                        if (*(result + 0x15) != 0)
                            break
                
                i = result
            else
                result = *ecx_7
                
                while (*(result + 0x15) == 0)
                    ecx_7 = result
                    result = *ecx_7
                
                i = ecx_7
            
            arg1 = i
    while (i != ebp[3])

return result
