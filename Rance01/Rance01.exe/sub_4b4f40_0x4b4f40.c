// 函数: sub_4b4f40
// 地址: 0x4b4f40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

for (int32_t* i = &arg1[1]; i != arg2; i = &i[1])
    int32_t esi_1 = *i
    int32_t* i_1 = i
    
    if (esi_1 s>= *arg1)
        int32_t ecx_4 = i[-1]
        int128_t* i_2 = &i[-1]
        
        while (esi_1 s< ecx_4)
            *i_1 = ecx_4
            ecx_4 = *(i_2 - 4)
            i_1 = i_2
            i_2 -= 4
        
        *i_1 = esi_1
    else
        int32_t eax_3 = ((i + 4 - arg1 - 4) s>> 2) * 4
        sub_6b49d0(i - eax_3 + 4, arg1, eax_3)
        *arg1 = esi_1
