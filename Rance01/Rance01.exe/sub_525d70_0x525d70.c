// 函数: sub_525d70
// 地址: 0x525d70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** eax

if (arg1 s>= 0)
    eax = data_797d4c
    
    if (arg1 s< (eax[0x11] - eax[0x10]) s>> 2)
        eax = *(eax[0x10] + (arg1 << 2))
        
        if (eax != 0 && arg2 s>= 0)
            int32_t ecx = eax[4]
            
            if (arg2 s< (eax[5] - ecx) s>> 2)
                eax = *(ecx + (arg2 << 2))
                
                if (eax != 0)
                    eax = eax[0x74]
                    
                    if (eax != 0 && arg3 s>= 0 && arg3 s< (eax[0x15] - eax[0x14]) s>> 2)
                        eax = *(eax[0x14] + (arg3 << 2))
                        
                        if (eax != 0)
                            if (eax[5] u>= 0x10)
                                eax = *eax
                            
                            (*(*arg4 + 4))(eax)
                            int32_t eax_6
                            eax_6.b = 1
                            return eax_6

eax.b = 0
return eax
