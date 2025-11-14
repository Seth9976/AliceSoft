// 函数: sub_5a0980
// 地址: 0x5a0980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 != 0)
    int32_t* eax_1 = *(arg1 + 0x1c)
    
    if (eax_1 != 0)
        eax_1[7] = 0
        *(arg1 + 0x14) = 0
        *(arg1 + 8) = 0
        *(arg1 + 0x18) = 0
        int32_t edx = eax_1[2]
        
        if (edx != 0)
            *(arg1 + 0x30) = edx & 1
        
        *eax_1 = 0
        eax_1[1] = 0
        eax_1[3] = 0
        eax_1[8] = 0
        eax_1[0xe] = 0
        eax_1[0xf] = 0
        eax_1[5] = 0x8000
        eax_1[0x1b] = &eax_1[0x14c]
        eax_1[0x14] = &eax_1[0x14c]
        eax_1[0x13] = &eax_1[0x14c]
        eax_1[0x6f0] = 1
        eax_1[0x6f1] = 0xffffffff
        return 0

return 0xfffffffe
