// 函数: sub_4d83a0
// 地址: 0x4d83a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg3
int32_t* ebp = arg5
int32_t eax_2 = (ebp - arg3) s>> 5

if (eax_2 s> 0x28)
    int32_t eax_4
    int32_t edx
    edx:eax_4 = sx.q(eax_2 + 1)
    int32_t eax_6 = (eax_4 + (edx & 7)) s>> 3
    int32_t eax_7 = eax_6 << 5
    int32_t* edx_2 = &arg3[eax_6 * 0x10]
    int32_t* eax_8 = &arg3[eax_6 * 8]
    ebp -= eax_7
    arg2 = sub_4d8a70(ebp, 
        sub_4d8a70(arg4, sub_4d8a70(eax_8, edx_2, arg3, edx_2), arg4 - eax_7, &arg4[eax_6 * 8]), 
        arg5 - (eax_6 << 6), arg5)
    arg3 = eax_8

return sub_4d8a70(arg4, arg2, arg3, ebp)
