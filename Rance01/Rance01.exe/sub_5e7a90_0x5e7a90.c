// 函数: sub_5e7a90
// 地址: 0x5e7a90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_1 = arg2[1]

if (eax_1 != 0)
    int32_t* ecx_1 = data_793470
    
    if (data_793484 u< 0x10)
        ecx_1 = &data_793470
    
    int32_t esi_1 = arg3[4]
    int32_t ebp_1 = data_793480
    int32_t eax_2 = esi_1
    
    if (esi_1 u>= ebp_1)
        eax_2 = ebp_1
    
    int32_t* edx_1
    
    if (arg3[5] u< 0x10)
        edx_1 = arg3
    else
        edx_1 = *arg3
    
    if (sub_402320(eax_2, edx_1, ecx_1, eax_2) == 0 && esi_1 u>= ebp_1)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_3
        eax_3.b = esi_1 != ebp_1
        
        if (eax_3 == 0)
            int32_t edi_2 = *arg2
            
            if (edi_2 != 0xffffffff)
                sub_409390(edi_2)
                *arg2 = 0xffffffff
            
            eax_3.b = 1
            return eax_3
    
    int32_t esi_2 = *arg2
    
    if (esi_2 == 0xffffffff)
        int32_t edx_2 = *eax_1
        int32_t var_18_2 = edx_2
        esi_2 = sub_40d040(*(data_797d2c + 0x30) + 0x28c, edx_2, eax_1)
    
    if (sub_5f9d00(esi_2, arg3, *arg1, arg1[1], arg1[2], arg1[3]).b != 0)
        *arg2 = esi_2
        eax_1.b = 1
        return eax_1

eax_1.b = 0
return eax_1
