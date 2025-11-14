// 函数: sub_595c50
// 地址: 0x595c50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = *(arg1 + 8)
int32_t* eax = *(arg1 + 4)

if (eax != ecx)
    while (*eax != arg2)
        eax = &eax[1]
        
        if (eax == ecx)
            break
    
    if (eax != ecx)
        sub_6b49d0(eax, &eax[1], ((*(arg1 + 8) - &eax[1]) s>> 2) * 4)
        *(arg1 + 8) -= 4
        int128_t* eax_1
        eax_1.b = 1
        return eax_1

eax.b = 0
return eax
