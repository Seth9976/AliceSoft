// 函数: sub_40d040
// 地址: 0x40d040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* j_1 = arg3
int32_t arg_4
int32_t edi = arg_4

if (*(arg1 + 0x10) != 0)
    sub_42e070(arg1 + 8, &j_1, &arg_4)
    int32_t esi_1 = *(arg1 + 0xc)
    int32_t* j = j_1
    
    if (j != esi_1)
        int32_t i
        
        do
            i = j[3] + 1
            
            if (*(j + 0x15) == 0)
                int32_t* j_2 = j[2]
                
                if (*(j_2 + 0x15) != 0)
                    int32_t* j_4 = j[1]
                    
                    if (*(j_4 + 0x15) == 0)
                        while (j == j_4[2])
                            j = j_4
                            j_4 = j_4[1]
                            
                            if (*(j_4 + 0x15) != 0)
                                break
                    
                    j = j_4
                else
                    j = j_2
                    int32_t* j_3 = *j
                    
                    while (*(j_3 + 0x15) == 0)
                        j = j_3
                        j_3 = *j
            
            if (j == esi_1)
                break
        while (j[3] == i)
        
        return i

return edi
