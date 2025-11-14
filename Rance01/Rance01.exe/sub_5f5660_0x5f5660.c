// 函数: sub_5f5660
// 地址: 0x5f5660
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = *(arg1 + 0xc)
int32_t edi = *(result + 0x58)

if (edi != 0)
    int32_t ebx
    ebx.b = 0
    char var_19_1 = 0
    void* eax = sub_5f7370(*(arg1 + 0x48), edi)
    
    if (eax != 0)
        int32_t eax_1 = sub_5f3f50(eax)
        
        if (eax_1 != 2)
            var_19_1 = 0
        
        if (eax_1 == 2 || eax_1 == 3)
            var_19_1 = 1
        
        ebx.b = var_19_1
    
    void* edi_1 = *(arg1 + 0xc)
    uint32_t eax_2 = *(edi_1 + 0x28)
    uint32_t var_18_1 = eax_2
    
    if (ebx.b != *(arg1 + 0x11))
        if (*(arg1 + 0x1c) s> 0)
            bool cond:1_1 = *(arg1 + 0x20) != 0
            *(arg1 + 0x14) = 0
            
            if (cond:1_1)
                *(arg1 + 0x18) = eax_2
            else
                *(arg1 + 0x18) = zx.d((ebx.b != 0) - 1)
            
            *(arg1 + 0x20) = 1
        else
            uint32_t eax_3 = zx.d(ebx.b)
            int32_t eax_4 = neg.d(eax_3)
            var_18_1 = zx.d((sbb.d(eax_4, eax_4, eax_3 != 0)).b)
        
        *(arg1 + 0x11) = ebx.b
    
    if (*(arg1 + 0x20) != 0)
        int32_t temp0_1 = divs.dp.d(sx.q(*(arg1 + 0x14) * 0xff), *(arg1 + 0x1c))
        *(arg1 + 0x1c)
        
        if (ebx.b == 0)
            uint32_t ecx_7 = *(arg1 + 0x18) - temp0_1
            var_18_1 = ecx_7
            
            if (ecx_7 s<= 0)
                var_18_1 = 0
                *(arg1 + 0x20) = 0
                *(arg1 + 0x14) = 0
        else
            uint32_t eax_11 = temp0_1 + *(arg1 + 0x18)
            var_18_1 = eax_11
            
            if (eax_11 s>= 0xff)
                var_18_1 = 0xff
                *(arg1 + 0x20) = 0
                *(arg1 + 0x14) = 0
    
    uint32_t var_14 = var_18_1
    void* const var_10 = 0xff
    void* const result_2 = nullptr
    void** eax_13 = &var_14
    
    if (var_18_1 s>= 0xff)
        eax_13 = &var_10
    
    if (*eax_13 s<= 0)
        eax_13 = &result_2
    
    void* eax_14 = *eax_13
    
    if (*(edi_1 + 0x28) != eax_14)
        *(edi_1 + 0x28) = eax_14
        *(edi_1 + 0xc) = 1
    
    for (uint32_t* i = *(arg1 + 0xb4) + 4; i != *(arg1 + 0xb8); i = &i[1])
        int32_t edi_2 = *(*(arg1 + 0xc) + 0x50)
        var_14 = *i
        void* eax_16
        
        if (edi_2 != 0)
            eax_16 = sub_5f7370(*(arg1 + 0x48), edi_2)
        
        int32_t eax_17
        
        if (edi_2 != 0 && eax_16 != 0)
            eax_17 = sub_5f2b10(eax_16)
        else
            eax_17 = 0xff
        
        (*(*var_14 + 0x20))(*(*(arg1 + 0xc) + 0x28) * eax_17 s/ 0xff)
    
    result = sub_5f3f50(arg1)
    void* const result_1 = result
    result_2 = result_1
    
    if (result_1 u<= 3)
        int32_t* ebx_3 = *(arg1 + 0xb4) + 4
        
        if (ebx_3 != *(arg1 + 0xb8))
            while (true)
                char ecx_15
                
                if (*(arg1 + 0x20) == 0 || var_18_1 s<= 0)
                    ecx_15 = 0
                else
                    ecx_15 = 1
                
                void* eax_22
                
                if (result_1 != (ebx_3 - *(arg1 + 0xb4)) s>> 2 || (var_19_1 == 0 && ecx_15 == 0))
                    eax_22.b = 0
                else
                    int32_t edi_7 = *(*(arg1 + 0xc) + 0x50)
                    
                    if (edi_7 == 0)
                    label_5f5888:
                        eax_22 = *(arg1 + 0xc)
                        
                        if (*(eax_22 + 0x24) == 0 || (*(eax_22 + 0x6d) != 0 && arg2.b == 0))
                            eax_22.b = 0
                        else
                            eax_22.b = 1
                    else
                        void* eax_24 = sub_5f7370(*(arg1 + 0x48), edi_7)
                        
                        if (eax_24 == 0)
                            goto label_5f5888
                        
                        if (sub_5f2ab0(eax_24, arg2).b != 0)
                            goto label_5f5888
                        
                        eax_22.b = 0
                
                result = (*(**ebx_3 + 0x1c))(eax_22)
                ebx_3 = &ebx_3[1]
                
                if (ebx_3 == *(arg1 + 0xb8))
                    break
                
                result_1 = result_2

return result
