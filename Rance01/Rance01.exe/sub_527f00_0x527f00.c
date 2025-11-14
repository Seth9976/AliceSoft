// 函数: sub_527f00
// 地址: 0x527f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax

if (arg1 s>= 0)
    eax = data_797d4c
    
    if (arg1 s< (*(eax + 0x44) - *(eax + 0x40)) s>> 2)
        eax = *(*(eax + 0x40) + (arg1 << 2))
        
        if (eax != 0 && arg2 s>= 0 && arg2 s< (*(eax + 0xbc) - *(eax + 0xb8)) s>> 2)
            *(*(eax + 0xb8) + (arg2 << 2)) = fconvert.s(fconvert.t(arg3))
            int32_t eax_2
            eax_2.b = 1
            return eax_2

eax.b = 0
return eax
