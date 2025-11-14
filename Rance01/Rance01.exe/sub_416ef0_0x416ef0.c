// 函数: sub_416ef0
// 地址: 0x416ef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi

if (*(arg1 + 0x28) != 0)
    edi = (*(**(arg1 + 0x28) + 0x2c))()
else
    edi = 0

int32_t eax_2

if (*(arg2 + 0x28) != 0)
    eax_2 = (*(**(arg2 + 0x28) + 0x2c))()
else
    eax_2 = 0

if (edi s>= eax_2)
    int32_t edi_1
    
    if (*(arg1 + 0x28) != 0)
        edi_1 = (*(**(arg1 + 0x28) + 0x2c))()
    else
        edi_1 = 0
    
    int32_t eax_6
    
    if (*(arg2 + 0x28) != 0)
        eax_6 = (*(**(arg2 + 0x28) + 0x2c))()
    else
        eax_6 = 0
    
    if (edi_1 s> eax_6)
        eax_6.b = 0
        return eax_6
    
    int32_t edi_2
    
    if (*(arg1 + 0x28) != 0)
        edi_2 = (*(**(arg1 + 0x28) + 0x28))()
    else
        edi_2 = 0
    
    if (*(arg2 + 0x28) != 0)
        eax_2 = (*(**(arg2 + 0x28) + 0x28))()
    else
        eax_2 = 0
    
    if (edi_2 s>= eax_2)
        int32_t edi_3
        
        if (*(arg1 + 0x28) != 0)
            edi_3 = (*(**(arg1 + 0x28) + 0x28))()
        else
            edi_3 = 0
        
        if (*(arg2 + 0x28) != 0)
            eax_6 = (*(**(arg2 + 0x28) + 0x28))()
        else
            eax_6 = 0
        
        if (edi_3 s> eax_6)
            eax_6.b = 0
            return eax_6
        
        int32_t esi_1
        
        if (*(arg1 + 0x28) != 0)
            esi_1 = (*(**(arg1 + 0x28) + 0x24))()
        else
            esi_1 = 0
        
        if (*(arg2 + 0x28) != 0)
            int32_t eax_18
            eax_18.b = esi_1 s< (*(**(arg2 + 0x28) + 0x24))()
            return eax_18
        
        int32_t eax_16
        eax_16.b = esi_1 s< 0
        return eax_16

eax_2.b = 1
return eax_2
