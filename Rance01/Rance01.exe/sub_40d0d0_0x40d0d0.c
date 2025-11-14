// 函数: sub_40d0d0
// 地址: 0x40d0d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
int32_t* result = ebx[3]
int32_t* i = *result

if (i != result)
    do
        result = i[4]
        arg2 = result
        
        if (result != 0 && *(result + 0x2a) != 0 && result[7] s> 0)
            result = sub_61b5a0(&arg2, arg1)
        
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
    while (i != ebx[3])

return result
