// 函数: sub_528540
// 地址: 0x528540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_2 = arg1
void* eax

if (ecx_2 s>= 0)
    eax = data_797d4c
    
    if (ecx_2 s< (*(eax + 0x44) - *(eax + 0x40)) s>> 2)
        eax = *(*(eax + 0x40) + (ecx_2 << 2))
        
        if (eax != 0)
            arg1 = arg2
            
            if (arg2 s>= 0 && arg2 s< 3)
                *sub_5cc1d0(eax + 0x15c, &arg1) = arg3
                void* eax_3
                eax_3.b = 1
                return eax_3

eax.b = 0
return eax
