// 函数: sub_5d1480
// 地址: 0x5d1480
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = data_797d8c
int32_t* result

if (*esi != 0)
label_5d14af:
    int32_t eax_2 = *esi
    *(eax_2 + 0x30) = 1
    result = eax_2 + 4
    bool cond:0_1 = result[5] u< 0x10
    result[4] = 0
    
    if (not(cond:0_1))
        result = *result
    
    *result = 0
else
    result = sub_597300(0x737314)
    
    if (result != 0)
        result = (**result)(0x737324)
        *esi = result
        
        if (result != 0)
            goto label_5d14af

return result
