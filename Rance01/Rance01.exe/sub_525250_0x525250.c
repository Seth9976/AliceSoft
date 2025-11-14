// 函数: sub_525250
// 地址: 0x525250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0)
    void* eax_1 = data_797d4c
    
    if (arg1 s< (*(eax_1 + 0x44) - *(eax_1 + 0x40)) s>> 2)
        void* eax_3 = *(*(eax_1 + 0x40) + (arg1 << 2))
        
        if (eax_3 != 0 && arg2 s>= 0)
            int32_t ecx = *(eax_3 + 0x10)
            
            if (arg2 s< (*(eax_3 + 0x14) - ecx) s>> 2)
                void* ecx_1 = *(ecx + (arg2 << 2))
                
                if (ecx_1 != 0)
                    if (arg3 s>= 0)
                        int32_t eax_7
                        int32_t edx_7
                        edx_7:eax_7 = muls.dp.d(0x2fa0be83, *(ecx_1 + 0xd4) - *(ecx_1 + 0xd0))
                        int32_t edx_8 = edx_7 s>> 5
                        
                        if (arg3 s< (edx_8 u>> 0x1f) + edx_8)
                            return fconvert.t(*(arg3 * 0xac + *(ecx_1 + 0xd0) + 0x78))

return float.t(0)
