// 函数: sub_525c30
// 地址: 0x525c30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0)
    void* eax_1 = data_797d4c
    
    if (arg1 s< (*(eax_1 + 0x44) - *(eax_1 + 0x40)) s>> 2)
        void* eax_3 = *(*(eax_1 + 0x40) + (arg1 << 2))
        
        if (eax_3 != 0 && arg2 s>= 0)
            int32_t ecx = *(eax_3 + 0x10)
            
            if (arg2 s< (*(eax_3 + 0x14) - ecx) s>> 2)
                void* eax_7 = *(ecx + (arg2 << 2))
                
                if (eax_7 != 0)
                    void* eax_9 = *(eax_7 + 0x1d0)
                    
                    if (eax_9 != 0)
                        int32_t eax_10
                        int32_t edx_5
                        edx_5:eax_10 = muls.dp.d(0x2e8ba2e9, *(eax_9 + 0x64) - *(eax_9 + 0x60))
                        int32_t edx_6 = edx_5 s>> 3
                        return (edx_6 u>> 0x1f) + edx_6

return 0
