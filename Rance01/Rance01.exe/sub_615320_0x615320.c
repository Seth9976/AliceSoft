// 函数: sub_615320
// 地址: 0x615320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0 && arg1 s< (*(*(arg2 + 0x9c) + 0x14))() && arg3 s>= 0
        && arg3 s< (*(*(arg2 + 0xd4) + 0x10))() + 2)
    void* ebp = *(arg2 + 0x11c)
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = muls.dp.d(0x66666667, *(arg2 + 0x120) - ebp)
    int32_t edx_4 = edx_3 s>> 4
    int32_t eax_8 = (edx_4 u>> 0x1f) + edx_4
    int32_t result = 0
    int32_t edi_2 = 2
    
    if (eax_8 s> 0)
        int32_t* ecx_5 = ebp + 0x20
        
        do
            if (arg3 s>= edi_2 && arg3 s< *ecx_5 + (*(arg2 + 0x118) << 1) + edi_2)
                return result
            
            result += 1
            edi_2 += *ecx_5 + (*(arg2 + 0x118) << 1)
            ecx_5 = &ecx_5[0xa]
        while (result s< eax_8)

return 0xffffffff
