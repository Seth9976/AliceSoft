// 函数: sub_6926d0
// 地址: 0x6926d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char result = (*(*arg1 + 0x10))()

if (result == 0)
    return result

int32_t* esi = data_797d8c

if (*esi != 0)
label_69270d:
    
    if (sub_5638f0(*esi) == 0)
        goto label_692716
else
    int32_t* eax = sub_597300(0x737314)
    
    if (eax != 0)
        int32_t eax_2 = (**eax)(0x737324)
        *esi = eax_2
        
        if (eax_2 == 0)
            goto label_692716
        
        goto label_69270d
    
label_692716:
    
    if (sub_5d1860() == 0)
        return 0

return 1
