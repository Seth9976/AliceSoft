// 函数: sub_5c5c40
// 地址: 0x5c5c40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x58) s>= 2 && *(arg1 + 4) != 0)
    int32_t ecx_1 = *(arg1 + 0x34)
    
    if (arg2 s< ecx_1)
        if (arg2 s>= 0)
            int32_t edi_2 = *(arg1 + 0x44)
            int32_t eax_4 = arg2 << 4
            *(edi_2 + eax_4 + 0xc)
            return *(edi_2 + eax_4 + 8)
        
        int32_t result = 0
        int32_t ebp = 0
        int32_t i = 0
        
        if (ecx_1 s> 0)
            do
                int32_t eax_2
                int32_t edx_1
                eax_2, edx_1 = sub_5c5c40(arg1, i)
                int32_t result_1 = result
                result += eax_2
                ebp = adc.d(ebp, edx_1, result_1 + eax_2 u< result_1)
                i += 1
            while (i s< *(arg1 + 0x34))
        
        return result

return 0xffffff7d
