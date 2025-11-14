// 函数: sub_502ee0
// 地址: 0x502ee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_4cce80(arg1 + 0x14).b != 0)
    int32_t* ecx_1 = *(arg1 + 0xd4)
    
    if (ecx_1 != 0 && (*(*ecx_1 + 0x10))().b != 0)
        sub_4ce490(arg1 + 0x24, arg4)
        int32_t* ecx_2 = *(arg1 + 0xd4)
        
        if (ecx_2 != 0 && (*(*ecx_2 + 0x34))() == 0 && sub_502de0(arg1) == 0)
            return 0
        
        int32_t* ecx_3 = *(arg1 + 0xd8)
        
        if (ecx_3 != 0)
            char eax_6
            int32_t ecx_4
            eax_6, ecx_4 = (*(*ecx_3 + 0x10))()
            
            if (eax_6 == 0 && sub_502e50(ecx_4, arg1) == 0)
                return 0
        
        float var_84[0x10]
        float* eax_8 = sub_5033d0(arg1, &var_84)
        __builtin_memcpy(arg1 + 0xe0, eax_8, 0x40)
        float var_90
        float var_44[0x11]
        *(arg1 + 0xd0) = fconvert.s(fconvert.t(sub_51e1c0(
            __builtin_memcpy(arg1 + 0x120, 
                sub_4b65f0(sub_4b65f0(eax_8, arg1 + 0xe0, arg2, &var_84), &var_84, arg3, &var_44), 
                0x40), 
            &var_90, arg2, arg1 + 0x54)[2]))
        void** i = *(arg1 + 0x24)
        
        while (i != *(arg1 + 0x28))
            void* edi_3 = *i
            i = &i[1]
            *(edi_3 + 0x78) =
                fconvert.s(fconvert.t(sub_51e1c0(edi_3 + 0x6c, &var_90, &var_84, edi_3 + 0x6c)[2]))

int32_t* result
result.b = 1
return result
