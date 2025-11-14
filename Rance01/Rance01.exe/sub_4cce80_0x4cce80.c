// 函数: sub_4cce80
// 地址: 0x4cce80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = *(arg1 + 4)
int32_t* i = *result

if (i != result)
    do
        if (sub_4ccad0(i[4]).b == 0)
            result.b = 0
            return result
        
        if (*(i + 0x15) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0x15) != 0)
                result = i[1]
                
                if (*(result + 0x15) == 0)
                    while (i == result[2])
                        i = result
                        result = result[1]
                        
                        if (*(result + 0x15) != 0)
                            break
                
                i = result
            else
                i = i_1
                result = *i
                
                while (*(result + 0x15) == 0)
                    i = result
                    result = *i
    while (i != *(arg1 + 4))

result.b = 1
return result
