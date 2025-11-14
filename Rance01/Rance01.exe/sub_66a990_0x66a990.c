// 函数: sub_66a990
// 地址: 0x66a990
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *arg1

if ((arg1[1] - eax) s>> 2 s>= arg2)
    void* esi_1 = *(eax + (arg2 << 2) - 4)
    
    if (esi_1 != 0 && *(esi_1 + 8) == 4)
        int32_t eax_1 = sub_668f00(esi_1, arg3)
        void* eax_4 = sub_669120(esi_1, arg4)
        
        if (eax_4 s>= 0 && eax_1 s>= 0)
            eax_4 = *(*(*(esi_1 + 0x5c) + eax_1 * 0x10) + (eax_4 << 2))
            
            if (*(eax_4 + 8) == 3)
                sub_401180(arg5, 0xffffffff, eax_4 + 0x30, 0)
                int32_t* eax_6
                eax_6.b = 1
                return eax_6
        
        eax_4.b = 0
        return eax_4

eax.b = 0
return eax
