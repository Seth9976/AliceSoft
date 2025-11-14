// 函数: sub_529720
// 地址: 0x529720
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax

if (arg1 s>= 0)
    eax = data_797d4c
    
    if (arg1 s< (*(eax + 0x44) - *(eax + 0x40)) s>> 2)
        eax = *(*(eax + 0x40) + (arg1 << 2))
        
        if (eax != 0)
            eax = *(eax + 0x1b0)
            
            if (arg2 s>= 0 && arg2 s< (*(eax + 0x10) - *(eax + 0xc)) s>> 2)
                *(*(eax + 0xc) + (arg2 << 2)) = fconvert.s(fconvert.t(arg3))
                int32_t eax_2
                eax_2.b = 1
                return eax_2

eax.b = 0
return eax
