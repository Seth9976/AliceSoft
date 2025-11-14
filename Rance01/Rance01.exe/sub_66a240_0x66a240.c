// 函数: sub_66a240
// 地址: 0x66a240
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *arg2

if ((arg2[1] - eax) s>> 2 s>= arg3)
    eax = eax[arg3 - 1]
    
    if (eax != 0 && eax[2] == 4 && arg4 s>= 0 && arg1 s>= 0)
        int32_t edx_3 = eax[0x17]
        
        if ((eax[0x18] - edx_3) s>> 4 s> arg1)
            eax = edx_3 + arg1 * 0x10
            
            if ((eax[1] - *eax) s>> 2 s> arg4)
                *arg5 = *(*(*eax + (arg4 << 2)) + 4)
                void* eax_3
                eax_3.b = 1
                return eax_3

eax.b = 0
return eax
