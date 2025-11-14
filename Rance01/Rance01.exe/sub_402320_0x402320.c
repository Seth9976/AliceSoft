// 函数: sub_402320
// 地址: 0x402320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = arg4

while (i u>= 4)
    if (*arg2 != *arg3)
        goto label_402348
    
    i -= 4
    arg3 = &arg3[1]
    arg2 = &arg2[1]

if (i != 0)
label_402348:
    uint32_t eax_1 = zx.d(*arg2)
    uint32_t edi_1 = zx.d(*arg3)
    
    if (eax_1 != edi_1)
        return (eax_1 - edi_1) s>> 0x1f | 1
    
    if (i u> 1)
        uint32_t eax_3 = zx.d(*(arg2 + 1))
        uint32_t edi_2 = zx.d(*(arg3 + 1))
        
        if (eax_3 != edi_2)
            return (eax_3 - edi_2) s>> 0x1f | 1
        
        if (i u> 2)
            uint32_t eax_4 = zx.d(*(arg2 + 2))
            uint32_t edi_3 = zx.d(*(arg3 + 2))
            
            if (eax_4 != edi_3)
                return (eax_4 - edi_3) s>> 0x1f | 1
            
            if (i u> 3)
                return (zx.d(*(arg2 + 3)) - zx.d(*(arg3 + 3))) s>> 0x1f | 1

return 0
