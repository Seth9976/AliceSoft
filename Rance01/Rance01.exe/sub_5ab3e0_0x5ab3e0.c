// 函数: sub_5ab3e0
// 地址: 0x5ab3e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result
result.b = *(arg1 + 0x141)

if (result.b u< 8)
    uint32_t edi_1 = zx.d(result.b)
    int32_t eax = *(arg1 + 0x54)
    *(arg1 + 0x2ac) = 0x11
    
    if (eax == 0)
        sub_5a5c60(arg1, "Call to NULL read function")
        noreturn
    
    int32_t eax_1
    int32_t ecx_2
    eax_1, ecx_2 = eax(arg1, edi_1 + arg2 + 0x20, 8 - edi_1)
    int32_t var_20_1 = 8 - edi_1
    *(arg1 + 0x141) = 8
    int32_t ecx_3
    result, ecx_3 = sub_5a3e70(eax_1, edi_1, ecx_2, arg2 + 0x20)
    
    if (result != 0)
        if (edi_1 u< 4)
            int32_t var_14_2 = 8 - edi_1 - 4
            
            if (sub_5a3e70(result, edi_1, ecx_3, arg2 + 0x20) != 0)
                sub_5a5c60(arg1, "Not a PNG file")
                noreturn
        
        sub_5a5c60(arg1, "PNG file corrupted by ASCII conversion")
        noreturn
    
    if (edi_1 u< 3)
        *(arg1 + 0x6c) |= 0x1000

return result
