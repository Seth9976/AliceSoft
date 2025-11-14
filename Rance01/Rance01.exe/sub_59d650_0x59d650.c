// 函数: sub_59d650
// 地址: 0x59d650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 s>= 0)
    int32_t esi_1 = *(arg1 + 0x14)
    
    if (arg2 s< (*(arg1 + 0x18) - esi_1) s>> 5 && arg3 s>= 0 && arg3 s< *(arg1 + 0x10))
        int32_t ecx_1 = arg3 * 7
        int32_t edx_5 = *((arg2 << 5) + esi_1 + 0x10)
        int32_t* result = edx_5 + (ecx_1 << 2)
        
        if (*(edx_5 + (ecx_1 << 2) + 0x14) u< 0x10)
            return result
        
        return *result

return nullptr
