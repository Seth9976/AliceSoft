// 函数: sub_526210
// 地址: 0x526210
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
                
                if (eax != 0)
                    eax = *(eax + 0x1d0)
                    
                    if (eax != 0)
                        int32_t eax_5
                        int80_t st0
                        st0, eax_5 = sub_4c2610(eax + 0xb4, fconvert.s(fconvert.t(arg3)), 
                            fconvert.s(fconvert.t(arg4)), arg5)
                        return eax_5

eax.b = 0
return eax
