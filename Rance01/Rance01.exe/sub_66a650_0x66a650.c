// 函数: sub_66a650
// 地址: 0x66a650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *arg1

if ((arg1[1] - eax) s>> 2 s>= arg2)
    void* esi_1 = *(eax + (arg2 << 2) - 4)
    
    if (esi_1 != 0 && *(esi_1 + 8) == 4)
        int32_t* eax_1 = sub_668fd0(esi_1, arg3)
        int32_t eax_4
        
        if (sub_669120(esi_1, arg4) s>= 0 && eax_1 s>= 0)
            eax_4.b = 1
            return eax_4
        
        eax_4.b = 0
        return eax_4

eax.b = 0
return eax
