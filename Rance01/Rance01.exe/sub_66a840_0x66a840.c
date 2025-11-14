// 函数: sub_66a840
// 地址: 0x66a840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *arg2

if ((arg2[1] - eax) s>> 2 s>= arg3)
    eax = *(eax + (arg3 << 2) - 4)
    
    if (eax != 0 && *(eax + 8) == 4 && arg4 s>= 0 && arg1 s>= 0)
        int32_t edx_3 = *(eax + 0x5c)
        
        if ((*(eax + 0x60) - edx_3) s>> 4 s> arg1)
            eax = edx_3 + arg1 * 0x10
            
            if ((*(eax + 4) - *eax) s>> 2 s> arg4)
                eax = *(*eax + (arg4 << 2))
                
                if (*(eax + 8) == 3)
                    sub_401180(arg5, 0xffffffff, eax + 0x30, 0)
                    int32_t* eax_4
                    eax_4.b = 1
                    return eax_4

eax.b = 0
return eax
