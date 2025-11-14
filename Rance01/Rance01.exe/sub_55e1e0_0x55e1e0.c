// 函数: sub_55e1e0
// 地址: 0x55e1e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = *(*(arg1 + 4) + 4)

if (eax == 0xfffffef8)
    return eax + 0x108

if (arg2 s>= 0)
    void* edi_1 = *(eax + 0x108)
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x2e8ba2e9, *(eax + 0x10c) - edi_1)
    int32_t edx_2 = edx_1 s>> 3
    
    if (arg2 s< (edx_2 u>> 0x1f) + edx_2)
        int32_t esi_1 = arg2 * 0x2c
        int32_t* result = edi_1 + esi_1
        
        if (*(edi_1 + esi_1 + 0x14) u< 0x10)
            return result
        
        return *result

return nullptr
