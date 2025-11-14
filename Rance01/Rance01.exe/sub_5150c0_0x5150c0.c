// 函数: sub_5150c0
// 地址: 0x5150c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax

if (*(arg1 + 0x2a0) != 0)
    int32_t* ecx_1 = *(arg1 + 0x148)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()
        *(arg1 + 0x148) = 0
    
    eax = sub_510df0(*(arg1 + 0x2a0), 0x10000000)
    *(arg1 + 0x148) = eax
    
    if (eax != 0)
        int32_t* ecx_2 = *(arg1 + 0x14c)
        
        if (ecx_2 != 0)
            (*(*ecx_2 + 4))()
            *(arg1 + 0x14c) = 0
        
        eax = sub_510df0(*(arg1 + 0x2a0), 0x10000001)
        *(arg1 + 0x14c) = eax
        
        if (eax != 0)
            int32_t* ecx_3 = *(arg1 + 0x150)
            
            if (ecx_3 != 0)
                (*(*ecx_3 + 4))()
                *(arg1 + 0x150) = 0
            
            int32_t* eax_4 = sub_511f10(*(arg1 + 0x2a0), 0x14000000)
            *(arg1 + 0x150) = eax_4
            eax_4.b = eax_4 != 0
            return eax_4

eax.b = 0
return eax
