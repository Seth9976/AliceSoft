// 函数: sub_625f50
// 地址: 0x625f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

switch (*(arg1 + 0xd8))
    case 0
        return *(arg1 + 0x100) + 0x15
    case 1
        void* eax_3 = *(arg1 + 0xdc)
        int32_t ecx = *(eax_3 + 0x10)
        
        if (*(arg1 + 0x179) != 0)
            ecx += *(eax_3 + 0xc)
        
        return ecx + *(arg1 + 0x104) + 4
    case 2
        return *(arg1 + 0x110) + *(arg1 + 0x10c) + *(arg1 + 0x108) + 4
    case 3
        return *(arg1 + 0x114)
    case 4
        int32_t ecx_2 = *(arg1 + 0xec)
        int32_t eax_9 = *(arg1 + 0xf0)
        
        if (ecx_2 != eax_9)
            switch ((*(**(*(arg1 + 0xdc) + 4) + 0x14))(
                    *(ecx_2 + (eax_9 - ecx_2) s/ 0x28 * 0x28 - 0x28)) - 1)
                case 0
                    return *(arg1 + 0x120) + *(arg1 + 0x11c) + *(arg1 + 0x118) + 4
                case 2
                    return *(arg1 + 0x130) + 0xb
                case 3
                    return *(arg1 + 0x12c) + *(arg1 + 0x128) + *(arg1 + 0x124) + 4
                case 4
                    return 0x14

return 0
