// 函数: sub_692c50
// 地址: 0x692c50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_1 = *(arg1 + 0x20)

if (eax_1 != 0 && *(arg1 + 0x24) != 0)
    int32_t ebx
    
    if (*(eax_1 + 0x2c) == 0)
    label_692c7b:
        void* eax_2 = *(arg1 + 0x24)
        
        if (*(eax_2 + 0x2c) != 0)
            eax_1 = (*(**(eax_2 + 0x2c) + 0x10))()
        
        if (*(eax_2 + 0x2c) != 0 && eax_1.b != 0)
            ebx.b = 1
        else
            void* eax_4 = *(arg1 + 0x10)
            
            if (*(eax_4 + 0x2c) != 0)
                eax_1 = (*(**(eax_4 + 0x2c) + 0x10))()
            
            if (*(eax_4 + 0x2c) != 0 && eax_1.b != 0)
                ebx.b = 1
            else if (sub_413690(*(arg1 + 0x14)).b != 0)
                ebx.b = 1
            else if (sub_413690(*(arg1 + 0x18)).b != 0)
                ebx.b = 1
            else if (sub_413690(*(arg1 + 0x1c)).b != 0)
                ebx.b = 1
            else
                ebx.b = 0
    else
        eax_1 = (*(**(eax_1 + 0x2c) + 0x10))()
        
        if (eax_1.b == 0)
            goto label_692c7b
        
        ebx.b = 1
    
    eax_1.b = *(arg1 + 0xd)
    
    if (eax_1.b != 0)
    label_692d04:
        
        if (ebx.b == 0)
            sub_41d700(arg1 + 0xa0)
            *(arg1 + 0x50) = 0xffffffff
            *(arg1 + 0x4c) = 0
            sub_5d1530()
            eax_1 = sub_697c60()
    else
        if (ebx.b != 0)
            sub_41d6e0(arg1 + 0xa0)
            *(arg1 + 0x58) = 0
            sub_5d1480()
            int32_t* eax_9 = sub_5d14d0()
            *(arg1 + 0xd) = ebx.b
            return eax_9
        
        if (eax_1.b != 0)
            goto label_692d04
    
    *(arg1 + 0xd) = ebx.b

return eax_1
