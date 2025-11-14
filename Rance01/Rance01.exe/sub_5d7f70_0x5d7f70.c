// 函数: sub_5d7f70
// 地址: 0x5d7f70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = *(arg1 + 0x18)
int32_t* i = *result

if (i != result)
    do
        int32_t* edi_1 = i[4]
        result = (*(**edi_1 + 0x44))(0, sub_5d7a00(arg1, edi_1), 0)
        
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
    while (i != *(arg1 + 0x18))

return result
