// 函数: sub_5f6520
// 地址: 0x5f6520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct _EXCEPTION_REGISTRATION_RECORD** eax = sub_5f7370(*data_797da0, arg2)

if (eax != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** esi_1 = sub_5f3470(eax, arg4)
    
    if (esi_1 != 0)
        if (sub_405d70(arg3, &esi_1[2]) != 0)
            return 1
        
        if (sub_5e7890(&esi_1[0xb], arg3).b != 0)
            sub_401180(&esi_1[2], 0xffffffff, arg3, 0)
            int32_t* eax_3
            eax_3.b = 1
            esi_1[0x14].b = 1
            return eax_3

eax.b = 0
return eax
