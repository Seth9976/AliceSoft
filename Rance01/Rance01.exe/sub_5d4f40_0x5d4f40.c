// 函数: sub_5d4f40
// 地址: 0x5d4f40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x18) != 0 && *(arg1 + 0x50) != 0)
    int32_t* eax_1 = *(arg1 + 0x1c)
    
    if (eax_1 != 0)
        (*(*eax_1 + 8))(eax_1)
        *(arg1 + 0x1c) = 0
    
    int32_t* eax_2 = *(arg1 + 0x18)
    
    if ((**eax_2)(eax_2, 0x72cb18, arg1 + 0x1c) s>= 0)
        int32_t* esi_2 = *(arg1 + 0x1c)
        int32_t var_8 = *(arg1 + 0x50)
        int32_t var_c = 0xffffffff
        
        if ((*(*esi_2 + 0xc))(esi_2, 1, &var_c) s>= 0)
            int32_t eax_6
            eax_6.b = 1
            return eax_6
        
        sub_40da60("IDirectSoundNotify::SetNotificationPositions()")
        void* eax_7
        eax_7.b = 0
        return eax_7
    
    sub_40da60("IID_IDirectSoundNotify")

void* eax
eax.b = 0
return eax
