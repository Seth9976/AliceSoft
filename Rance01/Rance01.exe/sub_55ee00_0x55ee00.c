// 函数: sub_55ee00
// 地址: 0x55ee00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = 0
arg1[1] = 0
int32_t result = *arg2

if (((arg2[3] - result) & 0xfffffffc) s> 0)
    do
        int32_t* edx_1 = *(result + (i << 2))
        int32_t eax = arg1[2]
        int32_t edi_2 = arg1[1] + 1
        
        if (edi_2 u> eax)
            int32_t lpMem = *arg1
            int32_t eax_1 = eax + edi_2
            arg1[2] = eax_1
            int32_t eax_4
            
            if (lpMem == 0)
                eax_4 = HeapAlloc(data_797df0, HEAP_NONE, eax_1 << 2)
            else
                eax_4 = HeapReAlloc(data_797df0, HEAP_NONE, lpMem, eax_1 * 4)
            
            *arg1 = eax_4
        
        int32_t ecx_3 = *arg1
        arg1[1] = edi_2
        *(ecx_3 + (edi_2 << 2) - 4) = edx_1
        result = *arg2
        i += 1
    while (i s< (arg2[3] - result) s>> 2)

return result
