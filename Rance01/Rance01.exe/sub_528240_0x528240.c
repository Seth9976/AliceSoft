// 函数: sub_528240
// 地址: 0x528240
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax

if (arg1 s>= 0)
    eax = data_797d4c
    
    if (arg1 s< (*(eax + 0x44) - *(eax + 0x40)) s>> 2)
        eax = *(*(eax + 0x40) + (arg1 << 2))
        
        if (eax != 0 && eax != 0xfffffff0)
            int32_t eax_2 = sub_70c710(fconvert.t(arg3))
            sub_503530(eax + 0xe4, sub_70c710(fconvert.t(arg2)), eax_2, 
                fconvert.s(fconvert.t(arg4)), fconvert.s(fconvert.t(arg5)), 
                fconvert.s(fconvert.t(arg6)))
            int32_t eax_4
            eax_4.b = 1
            return eax_4

eax.b = 0
return eax
