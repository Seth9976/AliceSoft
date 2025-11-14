// 函数: sub_550ca0
// 地址: 0x550ca0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t eax

if (arg1[0x10].b == 0)
    if (arg2 != 0)
        eax = *(arg3 + ((arg2 - 1) << 2))
    
    if (arg2 == 0 || eax s<= 0)
        arg1[0xc] = arg2 - 1
        arg1[1] = 0
        eax.b = 1
        return eax
    
    if (sub_550c40(eax, arg1).b != 0)
        arg1[0xc] = arg2 - 1
        eax = *(arg3 + ((arg2 - 1) << 2))
        arg1[0xf] = arg2
        
        if (arg2 != 1)
            int32_t var_18_1 = 0
            
            if (eax s> 0)
                int32_t ebx_5
                
                do
                    void* edi_3 = arg1[5]
                    uint32_t eax_4 = sub_5527e0(edi_3)
                    *(*(edi_3 + 8) + eax_4 * 4) = sub_5524b0(edi_3 + 0x20)
                    
                    if (eax_4 s< 0)
                        goto label_550d19
                    
                    void* ecx_5 = arg1[5]
                    
                    if (eax_4 u>= (*(ecx_5 + 0xc) - *(ecx_5 + 8)) s>> 2)
                        goto label_550d19
                    
                    void* edi_4 = *(*(ecx_5 + 8) + (eax_4 << 2))
                    
                    if (edi_4 == 0)
                        goto label_550d19
                    
                    *(edi_4 + 0x34) = arg1[0xd]
                    *(edi_4 + 0x38) = arg1[0xe]
                    
                    if (sub_54f950(arg1, var_18_1, eax_4).b == 0)
                        goto label_550d19
                    
                    if (sub_550ca0(arg2 - 1, arg3, arg4).b == 0)
                        goto label_550d19
                    
                    ebx_5 = var_18_1 + 1
                    var_18_1 = ebx_5
                while (ebx_5 s< eax)
            
            goto label_550e08
        
        switch (arg1[0xd] - 0x10)
            case 0, 8
                if (sub_550ef0(arg1, eax).b != 0)
                label_550e08:
                    arg1[0x10].b = 1
                    eax.b = 1
                    return eax
            case 1, 9
                eax = sub_551110(arg1, eax, arg1[0xe], arg4)
                
                if (eax.b == 0)
                    return eax
                
                goto label_550e08
            default
                sub_54fa30(arg1)
                arg1[0x10].b = 1
                int128_t* eax_3
                eax_3.b = 1
                return eax_3

label_550d19:
eax.b = 0
return eax
