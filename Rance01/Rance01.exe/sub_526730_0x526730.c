// 函数: sub_526730
// 地址: 0x526730
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx_2 = arg1
int32_t eax

if (ecx_2 s>= 0)
    eax = data_797d4c
    
    if (ecx_2 s< (*(eax + 0x44) - *(eax + 0x40)) s>> 2)
        eax = *(*(eax + 0x40) + (ecx_2 << 2))
        
        if (eax != 0 && arg2 s>= 0)
            int32_t ecx = *(eax + 0x10)
            
            if (arg2 s< (*(eax + 0x14) - ecx) s>> 2)
                eax = *(ecx + (arg2 << 2))
                
                if (eax != 0)
                    sub_4c8880(eax + 0x274, &arg1, *(eax + 0x274), *(eax + 0x278))
                    void** eax_5
                    eax_5.b = 1
                    return eax_5

eax.b = 0
return eax
