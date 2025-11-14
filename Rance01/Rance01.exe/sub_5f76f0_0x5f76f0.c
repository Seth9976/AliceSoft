// 函数: sub_5f76f0
// 地址: 0x5f76f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = *(arg1 + 0x18)
int32_t* i = *result

if (i != result)
    do
        result = arg2
        void* edi_1 = i[4]
        int32_t* result_1 = result
        
        if (arg3 != 0)
            result_1 = *(*(edi_1 + 0xc) + 0x54) * result
        
        for (int32_t* j = *(edi_1 + 0xb4) + 4; j != *(edi_1 + 0xb8); j = &j[1])
            result = (*(**j + 0x54))(result_1)
        
        if (*(edi_1 + 0x20) != 0)
            *(edi_1 + 0x14) += result_1
        
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
