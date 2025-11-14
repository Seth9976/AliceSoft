// 函数: sub_5e87c0
// 地址: 0x5e87c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[1] != 0)
    arg1 = *arg1
    
    if (arg1 != 0xffffffff)
        int32_t edx = *arg2
        int32_t esi_1 = *arg4 + edx
        int32_t var_4 = esi_1
        int32_t* eax_2 = &var_4
        
        if (esi_1 s>= edx)
            eax_2 = arg2
        
        int32_t ebx = *eax_2
        int32_t* ebp = arg3
        int32_t eax_3 = *ebp
        int32_t ecx_2 = *arg5 + eax_3
        var_4 = ecx_2
        
        if (ecx_2 s< eax_3)
            ebp = &var_4
        
        int32_t ebp_1 = *ebp
        var_4 = esi_1
        int32_t* edx_1 = &var_4
        
        if (edx s>= esi_1)
            edx_1 = arg2
        
        int32_t edi_1 = *edx_1
        var_4 = ecx_2
        int32_t* eax_4 = &var_4
        
        if (eax_3 s>= ecx_2)
            eax_4 = arg3
        
        int32_t esi_2 = *eax_4
        var_4 = sub_5f9f40(arg1)
        int32_t eax_8 = sub_5f9f90(arg1)
        
        if (ebx s< 0)
            ebx = 0
        
        int32_t ecx_3 = var_4
        
        if (ecx_3 s< ebx)
            ebx = ecx_3
        
        if (ebp_1 s< 0)
            ebp_1 = 0
        
        if (eax_8 s< ebp_1)
            ebp_1 = eax_8
        
        if (edi_1 s< 0)
            edi_1 = 0
        
        if (ecx_3 s< edi_1)
            edi_1 = ecx_3
        
        if (esi_2 s< 0)
            esi_2 = 0
        
        if (eax_8 s< esi_2)
            esi_2 = eax_8
        
        *arg2 = ebx
        *arg3 = ebp_1
        *arg4 = edi_1 - ebx
        *arg5 = esi_2 - ebp_1
        int32_t* eax_9
        eax_9.b = 0
        return eax_9

arg1.b = 1
return arg1
