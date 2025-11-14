// 函数: sub_527ae0
// 地址: 0x527ae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0)
    void* eax_1 = data_797d4c
    
    if (arg1 s< (*(eax_1 + 0x44) - *(eax_1 + 0x40)) s>> 2)
        void* eax_3 = *(*(eax_1 + 0x40) + (arg1 << 2))
        
        if (eax_3 != 0)
            if (arg2 s>= 0 && arg2 s< (*(eax_3 + 0xac) - *(eax_3 + 0xa8)) s>> 2)
                return fconvert.t(fconvert.s(fconvert.t(*(*(eax_3 + 0xa8) + (arg2 << 2)))))
            
            return fconvert.t(fconvert.s(float.t(0)))

return float.t(0)
