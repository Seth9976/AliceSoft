// 函数: sub_66ac50
// 地址: 0x66ac50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_2 = *arg1

if ((arg1[1] - eax_2) s>> 2 s>= arg2)
    void* esi_1 = *(eax_2 + (arg2 << 2) - 4)
    
    if (esi_1 != 0 && *(esi_1 + 8) == 4 && (*(esi_1 + 0x60) - *(esi_1 + 0x5c)) s>> 4 s> arg3)
        eax_2 = sub_669120(esi_1, arg4)
        
        if (eax_2 s>= 0 && arg3 s>= 0)
            eax_2 = *(*(*(esi_1 + 0x5c) + arg3 * 0x10) + (eax_2 << 2))
            
            if (*(eax_2 + 8) == 3)
                sub_401180(arg5, 0xffffffff, eax_2 + 0x30, 0)
                int32_t* eax_4
                eax_4.b = 1
                return eax_4

eax_2.b = 0
return eax_2
