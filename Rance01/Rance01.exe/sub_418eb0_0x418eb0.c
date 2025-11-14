// 函数: sub_418eb0
// 地址: 0x418eb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t** result = arg1
void* i = result[5]
int32_t ebp = arg2

if (i != result[4])
    arg2 = ebp
    
    do
        void* edi_1 = *(i - 4)
        
        if (ebp s> 0)
            int32_t* var_c
            sub_42e070(edi_1 + 0x18, &var_c, &arg2)
            int32_t edi_2 = *(edi_1 + 0x1c)
            result.b = var_c != edi_2
            
            if (result.b != 0)
                int32_t var_8 = ebp
                int32_t* result_1
                sub_42e070(edi_1 + 0x18, &result_1, &var_8)
                result = result_1
                
                if (result != edi_2)
                    result = result[4]
                    
                    if (result[0xb] != 0)
                        result = (*(*result[0xb] + 0x14))()
        
        i -= 4
    while (i != arg1[4])

return result
