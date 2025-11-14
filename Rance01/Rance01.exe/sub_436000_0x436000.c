// 函数: sub_436000
// 地址: 0x436000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = *(arg1 + 4)
int32_t* i = *result

if (i != result)
    do
        void* edi_1 = i[4]
        
        if (edi_1 != 0)
            int32_t* ecx_1 = *(edi_1 + 0xd4)
            
            if (ecx_1 == arg2 && ecx_1 != 0)
                (*(*ecx_1 + 4))()
                *(edi_1 + 0xd4) = 0
        
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
