// 函数: sub_529770
// 地址: 0x529770
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0)
    void* eax_1 = data_797d4c
    
    if (arg1 s< (*(eax_1 + 0x44) - *(eax_1 + 0x40)) s>> 2)
        void* eax_3 = *(*(eax_1 + 0x40) + (arg1 << 2))
        
        if (eax_3 != 0)
            void* eax_4 = *(eax_3 + 0x1b0)
            
            if (arg2 s>= 0 && arg2 s< (*(eax_4 + 0x10) - *(eax_4 + 0xc)) s>> 2)
                return fconvert.t(fconvert.s(fconvert.t(*(*(eax_4 + 0xc) + (arg2 << 2)))))
            
            return fconvert.t(fconvert.s(float.t(0)))

return float.t(0)
