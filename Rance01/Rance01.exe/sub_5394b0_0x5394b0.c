// 函数: sub_5394b0
// 地址: 0x5394b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i = *(arg1 + 0x130)
int32_t* ebx = arg2
int32_t esi = *i
arg2 = i

for (; i != esi; i = arg2)
    int32_t* j = i
    
    if (*(i + 0x15) == 0)
        int32_t* j_1 = *i
        
        if (*(j_1 + 0x15) != 0)
            int32_t* j_3 = i[1]
            
            if (*(j_3 + 0x15) == 0)
                while (j == *j_3)
                    j = j_3
                    j_3 = j_3[1]
                    
                    if (*(j_3 + 0x15) != 0)
                        break
            
            if (*(j + 0x15) == 0)
                j = j_3
        else
            j = j_1
            int32_t* j_2 = j[2]
            
            while (*(j_2 + 0x15) == 0)
                j = j_2
                j_2 = j[2]
    else
        j = i[2]
    
    int32_t** eax_1 = &arg2
    
    if (j[3] s<= ebx)
        arg2 = i
        sub_58d240(eax_1)
        return arg2[4] * 0x4c + *(arg1 + 0x6c)
    
    sub_58d240(eax_1)

return 0
