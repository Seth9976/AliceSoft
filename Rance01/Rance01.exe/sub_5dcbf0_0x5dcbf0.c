// 函数: sub_5dcbf0
// 地址: 0x5dcbf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL result = arg1[4]
BOOL x = arg4
int32_t esi = 0
arg4 = result

if (result s> 0)
    do
        int32_t ecx_1 = arg1[5]
        char* eax
        
        if (ecx_1 u< 0x10)
            eax = arg1
        else
            eax = *arg1
        
        char* eax_1
        
        if (eax[esi] u>= 0x81)
            if (ecx_1 u< 0x10)
                eax_1 = arg1
            else
                eax_1 = *arg1
        
        char* eax_2
        
        if (eax[esi] u< 0x81 || eax_1[esi] u> 0x9f)
            if (ecx_1 u< 0x10)
                eax_2 = arg1
            else
                eax_2 = *arg1
        
        if ((eax[esi] u< 0x81 || eax_1[esi] u> 0x9f) && eax_2[esi] u< 0xe0)
            TextOutA(arg3, x, arg5, sub_401170(arg1) + esi, 1)
            int32_t eax_12
            int32_t edx_3
            edx_3:eax_12 = sx.q(*(arg2 + 0x38))
            result = (eax_12 - edx_3) s>> 1
            x += result
            esi += 1
        else
            result = TextOutA(arg3, x, arg5, sub_401170(arg1) + esi, 2)
            x += *(arg2 + 0x38)
            esi += 2
    while (esi s< arg4)

return result
