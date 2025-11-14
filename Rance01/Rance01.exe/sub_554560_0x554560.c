// 函数: sub_554560
// 地址: 0x554560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL result

if (sub_5543e0(arg2, arg1, arg3).b != 0)
    int32_t ecx_1 = *(arg2 + 8)
    result = (*(arg2 + 0xc) - ecx_1) s>> 2
    void* edi_1
    
    if (arg1 u< result)
        edi_1 = *(ecx_1 + (arg1 << 2))
    else
        edi_1 = nullptr
    
    void* const ecx_2
    
    if (arg3 u< result)
        ecx_2 = *(ecx_1 + (arg3 << 2))
    else
        ecx_2 = nullptr
    
    if (edi_1 != 0 && ecx_2 != 0)
        result.b = *(edi_1 + 0x2c)
        *(edi_1 + 0x2c) = *(ecx_2 + 0x2c)
        *(ecx_2 + 0x2c) = result.b
        result.b = 1
        return result

result.b = 0
return result
