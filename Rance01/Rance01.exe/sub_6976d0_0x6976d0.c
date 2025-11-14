// 函数: sub_6976d0
// 地址: 0x6976d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_1 = *(arg1 + 0x14)

if (eax_1 != 0 && *(arg1 + 0x18) != 0 && *(arg1 + 0x1c) != 0 && *(arg1 + 0x20) != 0)
    int32_t ebx
    
    if (*(eax_1 + 0x2c) == 0)
    label_69770a:
        
        if (sub_413690(*(arg1 + 0x18)).b != 0)
            ebx.b = 1
        else if (sub_413690(*(arg1 + 0x1c)).b != 0)
            ebx.b = 1
        else if (sub_413690(*(arg1 + 0x20)).b != 0)
            ebx.b = 1
        else
            ebx.b = 0
    else
        if ((*(**(eax_1 + 0x2c) + 0x10))().b == 0)
            goto label_69770a
        
        ebx.b = 1
    
    eax_1.b = *(arg1 + 0x11)
    
    if (eax_1.b != 0)
    label_697751:
        
        if (ebx.b == 0)
            eax_1 = sub_41d700(arg1 + 0xa8)
    else
        if (ebx.b != 0)
            int32_t eax_5 = sub_41d6e0(arg1 + 0xa8)
            *(arg1 + 0x11) = ebx.b
            return eax_5
        
        if (eax_1.b != 0)
            goto label_697751
    
    *(arg1 + 0x11) = ebx.b

return eax_1
