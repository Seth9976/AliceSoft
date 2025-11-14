// 函数: sub_523ad0
// 地址: 0x523ad0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax

if (arg1 s>= 0)
    eax = data_797d4c
    
    if (arg1 s< (*(eax + 0x44) - *(eax + 0x40)) s>> 2)
        eax = *(*(eax + 0x40) + (arg1 << 2))
        
        if (eax != 0 && arg2 s>= 0)
            int32_t ecx = *(eax + 0x10)
            
            if (arg2 s< (*(eax + 0x14) - ecx) s>> 2)
                eax = *(ecx + (arg2 << 2))
                
                if (eax != 0 && arg3 s>= 0 && arg3 s< (*(eax + 0xbc) - *(eax + 0xb8)) s>> 2)
                    *(*(eax + 0xb8) + (arg3 << 2)) = arg4
                    int32_t eax_4
                    eax_4.b = 1
                    return eax_4

eax.b = 0
return eax
