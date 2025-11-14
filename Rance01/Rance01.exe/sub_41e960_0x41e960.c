// 函数: sub_41e960
// 地址: 0x41e960
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = sub_5f7370(*data_797da0, *(arg1 + 4))
void* result_1 = result

if (result_1 != 0)
    int32_t edi_1 = 3
    result = (*(**(*(result_1 + 0xb4) + 0xc) + 0x34))()
    
    if (result.b == 0)
        result = (*(**(*(result_1 + 0xb4) + 8) + 0x34))()
        int32_t ecx_4
        ecx_4.b = result.b != 0
        edi_1 = ecx_4 + 1
    
    if (*(result_1 + 0x24) != edi_1)
        if (edi_1 u<= 3)
            result.b = *(*(*(result_1 + 0xc) + 0x22c) + (edi_1 << 2)) == 1
            
            if (result.b != 0)
                result = (*(**(*(result_1 + 0xb4) + (edi_1 << 2)) + 0x58))()
        
        *(result_1 + 0x24) = edi_1
        *(result_1 + 0x10) = 1

return result
