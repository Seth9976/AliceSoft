// 函数: sub_4dd580
// 地址: 0x4dd580
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

for (; arg3 != arg5; arg3 = &arg3[1])
    void* edx_2 = arg7
    int32_t* eax = *(edx_2 + 4)
    
    if (eax u>= *(edx_2 + 8))
        if (eax != 0)
            *eax = *arg3
            edx_2 = arg7
        
        *(edx_2 + 4) += 4
        *(arg7 + 8) = *(edx_2 + 4)
    else
        *eax = *arg3
        *(arg7 + 4) += 4

arg4[4] = arg7
*arg4 = 0
arg4[1] = 0
arg4[2] = 0
arg4[3] = 0

if (arg6 != 0)
    int32_t __saved_ebx_1 = arg6
    sub_6b4d5b()

return arg4
