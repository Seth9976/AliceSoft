// 函数: sub_5f7a40
// 地址: 0x5f7a40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = *(arg1 + 0x18)
int32_t* i = *result

if (i != result)
    do
        void* ebp_1 = i[4]
        
        for (int32_t* j = *(ebp_1 + 0xb4) + 4; j != *(ebp_1 + 0xb8); j = &j[1])
            if ((*(**j + 0x60))(arg2).b == 0)
                result.b = 0
                return result
        
        *(ebp_1 + 0x10) = 1
        
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

result.b = 1
return result
