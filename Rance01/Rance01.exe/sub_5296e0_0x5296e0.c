// 函数: sub_5296e0
// 地址: 0x5296e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax

if (arg1 s>= 0)
    eax = data_797d4c
    int32_t edx_3 = (*(eax + 0x44) - *(eax + 0x40)) s>> 2
    
    if (arg1 s< edx_3)
        eax = *(*(eax + 0x40) + (arg1 << 2))
        
        if (eax != 0)
            int32_t eax_3
            int80_t st0
            st0, eax_3 = sub_4cb740(*(eax + 0x1b0), edx_3, arg1)
            eax_3.b = 1
            return eax_3

eax.b = 0
return eax
