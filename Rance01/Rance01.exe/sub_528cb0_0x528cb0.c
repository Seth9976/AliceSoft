// 函数: sub_528cb0
// 地址: 0x528cb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0)
    void* eax_1 = data_797d4c
    
    if (arg1 s< (*(eax_1 + 0x44) - *(eax_1 + 0x40)) s>> 2)
        void* eax_3 = *(*(eax_1 + 0x40) + (arg1 << 2))
        
        if (eax_3 != 0 && eax_3 != 0xfffffff0)
            if (arg2 s>= 0)
                int32_t esi_1 = *(eax_3 + 0x1c4)
                
                if (arg2 s< (*(eax_3 + 0x1c8) - esi_1) s/ 0x3c)
                    return fconvert.t(fconvert.s(fconvert.t(*(esi_1 + arg2 * 0x3c + 0x20))))
            
            return fconvert.t(fconvert.s(float.t(1)))

return float.t(0)
