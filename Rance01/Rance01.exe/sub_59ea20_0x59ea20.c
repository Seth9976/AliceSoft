// 函数: sub_59ea20
// 地址: 0x59ea20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 != 0)
    void* edx_1 = *(arg1 + 0x1c)
    
    if (edx_1 != 0 && *(arg1 + 0x20) != 0 && *(arg1 + 0x24) != 0)
        *(arg1 + 0x14) = 0
        *(arg1 + 8) = 0
        *(arg1 + 0x18) = 0
        *(arg1 + 0x2c) = 2
        *(edx_1 + 0x10) = *(edx_1 + 8)
        int32_t ecx_1 = *(edx_1 + 0x18)
        *(edx_1 + 0x14) = 0
        
        if (ecx_1 s< 0)
            *(edx_1 + 0x18) = neg.d(ecx_1)
        
        int32_t esi = *(edx_1 + 0x18)
        int32_t ecx_4 = neg.d(esi)
        *(edx_1 + 4) = (sbb.d(ecx_4, ecx_4, esi != 0) & 0xffffffb9) + 0x71
        int32_t ecx_8
        ecx_8.b = esi != 2
        *(arg1 + 0x30) = ecx_8
        *(edx_1 + 0x28) = 0
        sub_5a2620(ecx_8, edx_1)
        return 0

return 0xfffffffe
