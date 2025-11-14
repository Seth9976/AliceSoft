// 函数: sub_695bc0
// 地址: 0x695bc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = data_797d8c

if (*esi != 0)
label_695bf0:
    
    if (sub_5638f0(*esi) != 0)
        return 1
    
    esi = data_797d8c
else
    int32_t* eax_1 = sub_597300(0x737314)
    
    if (eax_1 != 0)
        int32_t eax_3 = (**eax_1)(0x737324)
        *esi = eax_3
        
        if (eax_3 != 0)
            goto label_695bf0
        
        esi = data_797d8c

if (*esi != 0)
label_695c27:
    
    if (*(*esi + 0x31) != 0)
        return 1
else
    int32_t* eax_5 = sub_597300(0x737314)
    
    if (eax_5 != 0)
        int32_t eax_7 = (**eax_5)(0x737324)
        *esi = eax_7
        
        if (eax_7 != 0)
            goto label_695c27

return 0
