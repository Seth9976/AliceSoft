// 函数: sub_64f450
// 地址: 0x64f450
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (zx.d(arg3) - 0x9c9e u<= 7)
    switch (arg3)
        case 0x9c9e
            sub_6b1970(arg1)
        case 0x9c9f
            if (*(arg1 + 0x8c) != 0)
                sub_64f5e0(arg1, arg2)
        case 0x9ca2
            void* eax_10 = *(arg1 + 0x88)
            
            if (eax_10 != 0)
                uint32_t eax_12 = sub_64f6e0(arg1, *(eax_10 + 0x1d8))
                void* ecx_6 = *(arg1 + 0x88)
                *(ecx_6 + 0x1d8) = eax_12
                sub_65d840(ecx_6)
        case 0x9ca3
            if (*(arg1 + 0x8c) != 0)
                sub_64f590(arg1)
        case 0x9ca4
            if (*(arg1 + 0x8c) != 0)
                char eax_4 = sub_64f750(0x9ca4, arg1)
                void* ecx_1 = *(*(arg1 + 0x8c) + 0x10c)
                
                if (ecx_1 != 0)
                    void* ecx_2 = *(ecx_1 + 0xa0)
                    
                    if (ecx_2 != 0)
                        *(ecx_2 + 0x184) = eax_4
        case 0x9ca5
            if (*(arg1 + 0x8c) != 0)
                char eax_8 = sub_64f750(0x9ca5, arg1)
                void* ecx_4 = *(*(arg1 + 0x8c) + 0x108)
                
                if (ecx_4 != 0)
                    void* ecx_5 = *(ecx_4 + 0x8c)
                    
                    if (ecx_5 != 0)
                        *(ecx_5 + 0x340) = eax_8

return 0
