// 函数: sub_5f9690
// 地址: 0x5f9690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* result

for (int32_t i = *(arg1 + 0x14); i != *(arg1 + 0x18); i += 4)
    char* eax_1 = data_797d94
    int32_t esi_2 = *(*(arg1 + 0x2c) + 4) + *i
    
    if (sub_5d57f0(eax_1).b != 0)
        void* edi_2 = *(eax_1 + 0x3c)
        bool cond:0_1 = *(edi_2 + 4) == 0
        int32_t var_8 = esi_2
        
        if (not(cond:0_1))
            int32_t* result_1
            sub_42e070(edi_2 + 0x18, &result_1, &var_8)
            result = result_1
            
            if (result != *(edi_2 + 0x1c))
                result = *(result + 0x10)
                
                if (result != 0 && (*(**result + 0x1c))().b != 0)
                    result.b = 1
                    return result

result.b = 0
return result
