// 函数: sub_62f920
// 地址: 0x62f920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0 && arg1 s< (*(*(arg2 + 0x94) + 0x14))() && arg3 s>= 0
        && arg3 s< (*(*(arg2 + 0xc8) + 0x10))() + 2)
    void* ebp = *(arg2 + 0x10c)
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = muls.dp.d(0x66666667, *(arg2 + 0x110) - ebp)
    int32_t edx_4 = edx_3 s>> 4
    int32_t eax_8 = (edx_4 u>> 0x1f) + edx_4
    int32_t result = 0
    int32_t edi_2 = 2
    
    if (eax_8 s> 0)
        int32_t* ecx_5 = ebp + 0x20
        
        do
            if (arg3 s>= edi_2 && arg3 s< *ecx_5 + (*(arg2 + 0x108) << 1) + edi_2)
                return result
            
            result += 1
            edi_2 += *ecx_5 + (*(arg2 + 0x108) << 1)
            ecx_5 = &ecx_5[0xa]
        while (result s< eax_8)

return 0xffffffff
