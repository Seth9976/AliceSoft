// 函数: sub_68b480
// 地址: 0x68b480
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = *(arg1 + 0x18)

if (eax != 0 && *(arg1 + 0x1c) != 0 && *(arg1 + 0x20) != 0 && *(arg1 + 0x24) != 0)
    int32_t ebx
    
    if (*(eax + 0x2c) == 0)
    label_68b4c7:
        
        if (sub_413690(*(arg1 + 0x1c)).b != 0)
            ebx.b = 1
        else if (sub_413690(*(arg1 + 0x20)).b != 0)
            ebx.b = 1
        else if (sub_413690(*(arg1 + 0x24)).b != 0)
            ebx.b = 1
        else
            void** i = *(arg1 + 0x28)
            ebx.b = 0
            
            while (i != *(arg1 + 0x2c))
                eax = *i
                
                if (*(eax + 0x2c) != 0)
                    eax = (*(**(eax + 0x2c) + 0x10))()
                else
                    eax.b = 0
                
                i = &i[1]
                ebx.b |= eax.b
    else
        if ((*(**(eax + 0x2c) + 0x10))().b == 0)
            goto label_68b4c7
        
        ebx.b = 1
    
    eax.b = *(arg1 + 0x60)
    
    if (eax.b != 0)
    label_68b538:
        
        if (ebx.b == 0)
            eax = sub_41d700(arg1 + 0x78)
    else
        if (ebx.b != 0)
            int32_t eax_6 = sub_41d6e0(arg1 + 0x78)
            *(arg1 + 0x60) = ebx.b
            return eax_6
        
        if (eax.b != 0)
            goto label_68b538
    
    *(arg1 + 0x60) = ebx.b

return eax
