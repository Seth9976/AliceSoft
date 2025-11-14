// 函数: sub_5c05e0
// 地址: 0x5c05e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i_1 = arg5
int32_t edx = 0

if (i_1 s> 0)
    int32_t* eax_1 = arg3
    int32_t i
    
    do
        if (*(arg4 - arg3 + eax_1) != 0)
            arg3[edx] = *eax_1
            edx += 1
        
        eax_1 = &eax_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (edx != 0)
        sub_5c0070(arg2, arg6, arg3, arg1, arg2, edx)

return 0
