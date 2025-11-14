// 函数: sub_431030
// 地址: 0x431030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct IInterface::partsengine::CFlatData::VTable** eax

if (*(arg2 + 0x3c) != 0)
    if (sub_405d70(arg1, arg2 + 8) != 0)
        return 1
    
    int32_t* ecx_1 = data_7933e4
    
    if (data_7933f8 u< 0x10)
        ecx_1 = &data_7933e4
    
    int32_t esi_1 = arg1[4]
    int32_t ebx_1 = data_7933f4
    int32_t eax_3 = esi_1
    
    if (esi_1 u>= ebx_1)
        eax_3 = ebx_1
    
    int32_t* edx_2
    
    if (arg1[5] u< 0x10)
        edx_2 = arg1
    else
        edx_2 = *arg1
    
    struct IInterface::partsengine::CFlatData::VTable* edx_3
    
    if (sub_402320(eax_3, edx_2, ecx_1, eax_3) == 0 && esi_1 u>= ebx_1)
        int32_t eax_4
        eax_4.b = esi_1 != ebx_1
        
        if (eax_4 != 0)
            goto label_4310b1
        
        edx_3 = **(arg2 + 0x40)
        goto label_4310d3
    
label_4310b1:
    eax = sub_42cf10(*(arg2 + 0x3c), arg1)
    
    if (eax != 0)
        long double x87_r0
        sub_431d20(*(arg2 + 0x40), x87_r0, eax)
        edx_3 = *eax
    label_4310d3:
        edx_3->__offset(0x4).d()
        sub_401180(arg2 + 8, 0xffffffff, arg1, 0)
        int32_t* eax_8
        eax_8.b = 1
        *(arg2 + 0x28) = 1
        return eax_8

eax.b = 0
return eax
