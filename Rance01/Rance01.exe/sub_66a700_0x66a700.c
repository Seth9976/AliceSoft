// 函数: sub_66a700
// 地址: 0x66a700
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = *arg1

if ((arg1[1] - eax) s>> 2 s>= arg2)
    eax = *(eax + (arg2 << 2) - 4)
    
    if (eax != 0 && *(eax + 8) == 5 && arg3 s>= 0)
        int32_t ecx_3 = *(eax + 0x6c)
        
        if ((*(eax + 0x70) - ecx_3) s>> 2 s> arg3)
            eax = *(ecx_3 + (arg3 << 2))
            
            if (*(eax + 8) == 3)
                sub_401180(arg4, 0xffffffff, eax + 0x30, 0)
                int32_t* eax_2
                eax_2.b = 1
                return eax_2

eax.b = 0
return eax
