// 函数: sub_5f7840
// 地址: 0x5f7840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 0x18)
int32_t* i = *eax

if (i != eax)
    do
        sub_5f5130(i[4], arg2)
        
        if (*(i + 0x15) == 0)
            int32_t* i_2 = i[2]
            
            if (*(i_2 + 0x15) != 0)
                int32_t* i_4 = i[1]
                
                if (*(i_4 + 0x15) == 0)
                    while (i == i_4[2])
                        i = i_4
                        i_4 = i_4[1]
                        
                        if (*(i_4 + 0x15) != 0)
                            break
                
                i = i_4
            else
                i = i_2
                int32_t* i_3 = *i
                
                while (*(i_3 + 0x15) == 0)
                    i = i_3
                    i_3 = *i
    while (i != *(arg1 + 0x18))

int32_t* result = *(arg1 + 0x18)
int32_t* i_1 = *result

if (i_1 != result)
    do
        result = i_1[4]
        result[4].b = 0
        
        if (*(i_1 + 0x15) == 0)
            int32_t* i_5 = i_1[2]
            
            if (*(i_5 + 0x15) != 0)
                result = i_1[1]
                
                if (*(result + 0x15) == 0)
                    while (i_1 == result[2])
                        i_1 = result
                        result = result[1]
                        
                        if (*(result + 0x15) != 0)
                            break
                
                i_1 = result
            else
                i_1 = i_5
                result = *i_1
                
                while (*(result + 0x15) == 0)
                    i_1 = result
                    result = *i_1
    while (i_1 != *(arg1 + 0x18))

return result
