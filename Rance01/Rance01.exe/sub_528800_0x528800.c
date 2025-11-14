// 函数: sub_528800
// 地址: 0x528800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax

if (arg1 s>= 0)
    eax = data_797d4c
    
    if (arg1 s< (*(eax + 0x44) - *(eax + 0x40)) s>> 2)
        eax = *(*(eax + 0x40) + (arg1 << 2))
        
        if (eax != 0 && eax != 0xfffffff0 && arg2 s>= 0)
            int32_t ecx = *(eax + 0x198)
            
            if (arg2 s< (*(eax + 0x19c) - ecx) s>> 2)
                *(ecx + (arg2 << 2)) = arg3
                int32_t eax_4
                eax_4.b = 1
                return eax_4

eax.b = 0
return eax
