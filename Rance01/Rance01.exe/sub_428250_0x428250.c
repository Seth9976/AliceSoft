// 函数: sub_428250
// 地址: 0x428250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *arg2

if (eax + 1 u<= arg2[1])
    bool cond:0_1 = *eax == 1
    *arg2 = eax + 1
    eax.b = cond:0_1
    
    if (eax.b == 0)
        sub_428170(arg1)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_1
        eax_1.b = 1
        *(arg1 + 0x18) = 1
        return eax_1
    
    if (sub_4280d0(arg1).b != 0)
        eax = *(arg1 + 0x1c)
        
        if (eax s>= 0)
            void* ecx_1 = data_797d4c
            
            if (eax s< (*(ecx_1 + 0x44) - *(ecx_1 + 0x40)) s>> 2)
                eax = *(*(ecx_1 + 0x40) + (eax << 2))
                
                if (eax != 0 && sub_5051f0(arg2, &eax[4]).b != 0)
                    eax.b = 1
                    *(arg1 + 0x18) = 1
                    return eax

eax.b = 0
return eax
