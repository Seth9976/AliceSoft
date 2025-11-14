// 函数: sub_554660
// 地址: 0x554660
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = 0
*(arg1 + 0x3c) = 0
int32_t result = *(arg1 + 0xc) - *(arg1 + 8)

if ((result & 0xfffffffc) s> 0)
    do
        if (*(*(arg1 + 8) + (i << 2)) == 0)
            int32_t eax_1 = *(arg1 + 0x40)
            int32_t edi_2 = *(arg1 + 0x3c) + 1
            
            if (edi_2 u> eax_1)
                int32_t lpMem = *(arg1 + 0x38)
                int32_t eax_2 = eax_1 + edi_2
                *(arg1 + 0x40) = eax_2
                int32_t eax_4
                
                if (lpMem == 0)
                    eax_4 = HeapAlloc(data_797df0, HEAP_NONE, eax_2 << 2)
                else
                    eax_4 = HeapReAlloc(data_797df0, HEAP_NONE, lpMem, eax_2 << 2)
                
                *(arg1 + 0x38) = eax_4
            
            result = *(arg1 + 0x38)
            *(arg1 + 0x3c) = edi_2
            *(result + (edi_2 << 2) - 4) = i
        
        i += 1
    while (i s< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)

return result
