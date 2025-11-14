// 函数: sub_66aa80
// 地址: 0x66aa80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *arg1

if ((arg1[1] - eax) s>> 2 s>= arg2)
    void* esi_1 = *(eax + (arg2 << 2) - 4)
    
    if (esi_1 != 0 && *(esi_1 + 8) == 4)
        int32_t* eax_1 = sub_668fd0(esi_1, arg3)
        void* eax_4 = sub_669120(esi_1, arg4)
        
        if (eax_4 s>= 0 && eax_1 s>= 0)
            eax_4 = *(*(*(esi_1 + 0x5c) + eax_1 * 0x10) + (eax_4 << 2))
            
            if (*(eax_4 + 8) == 2)
                *arg5 = fconvert.s(fconvert.t(*(eax_4 + 0x2c)))
                float* eax_5
                eax_5.b = 1
                return eax_5
        
        eax_4.b = 0
        return eax_4

eax.b = 0
return eax
