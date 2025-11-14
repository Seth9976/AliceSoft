// 函数: sub_418450
// 地址: 0x418450
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* result = *(arg1 + 0x70)
int32_t* esi = *(arg1 + 0x6c)

if (esi != result)
    while (*esi != arg2)
        esi = &esi[1]
        
        if (esi == result)
            break
    
    if (esi != result)
        int32_t ebx_1 = *esi
        
        if (ebx_1 != 0)
            sub_41d870(ebx_1)
            int32_t var_10_2 = ebx_1
            sub_6b4d5b()
        
        result = sub_6b49d0(esi, &esi[1], ((*(arg1 + 0x70) - &esi[1]) s>> 2) * 4)
        *(arg1 + 0x70) -= 4

return result
