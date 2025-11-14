// 函数: sub_5545c0
// 地址: 0x5545c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL result

if (sub_5543e0(arg1, arg2, arg3).b != 0)
    int32_t edx_1 = *(arg1 + 8)
    int32_t eax_2 = (*(arg1 + 0xc) - edx_1) s>> 2
    void* ecx
    
    if (arg2 u< eax_2)
        ecx = *(edx_1 + (arg2 << 2))
    else
        ecx = nullptr
    
    if (arg3 u< eax_2)
        result = *(edx_1 + (arg3 << 2))
    else
        result = 0
    
    if (ecx != 0 && result != 0)
        int32_t esi_1 = *(ecx + 0x30)
        int32_t edi_1 = *(ecx + 0x34)
        int32_t edx_2 = *(ecx + 0x3c)
        arg3.b = *(ecx + 0x40)
        *(ecx + 0x30) = *(result + 0x30)
        *(ecx + 0x34) = *(result + 0x34)
        int32_t ebp = *(ecx + 0x38)
        *(ecx + 0x38) = *(result + 0x38)
        *(ecx + 0x3c) = *(result + 0x3c)
        *(ecx + 0x40) = *(result + 0x40)
        ecx.b = arg3.b
        *(result + 0x38) = ebp
        *(result + 0x34) = edi_1
        *(result + 0x30) = esi_1
        *(result + 0x3c) = edx_2
        *(result + 0x40) = ecx.b
        result.b = 1
        return result

result.b = 0
return result
