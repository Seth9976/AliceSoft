// 函数: sub_527e80
// 地址: 0x527e80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0)
    void* eax_1 = data_797d4c
    
    if (arg1 s< (*(eax_1 + 0x44) - *(eax_1 + 0x40)) s>> 2)
        void* eax_3 = *(*(eax_1 + 0x40) + (arg1 << 2))
        
        if (eax_3 != 0)
            if (arg2 s< 0)
                return fconvert.t(fconvert.s(fconvert.t(**(eax_3 + 0xb8))))
            
            int32_t ecx_3 = (*(eax_3 + 0xbc) - *(eax_3 + 0xb8)) s>> 2
            
            if (arg2 s< ecx_3)
                return fconvert.t(fconvert.s(fconvert.t(*(*(eax_3 + 0xb8) + (arg2 << 2)))))
            
            return fconvert.t(fconvert.s(fconvert.t(*(*(eax_3 + 0xb8) + (ecx_3 << 2) - 4))))

return float.t(0)
