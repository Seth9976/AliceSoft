// 函数: sub_56e980
// 地址: 0x56e980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0xae) == 0)
    int32_t eax_2 = (*(*arg1 + 0x10))()
    int32_t eax_5
    int32_t edx_2
    edx_2:eax_5 = sx.q(arg1[0x2c] - eax_2)
    *arg2 = (eax_5 - edx_2) s>> 1
    int32_t eax_9 = (*(*arg1 + 0x14))()
    int32_t eax_12
    int32_t edx_4
    edx_4:eax_12 = sx.q(arg1[0x2d] - eax_9)
    int32_t eax = (eax_12 - edx_4) s>> 1
    bool cond:1_1 = *arg2 s>= 0
    *arg3 = eax
    
    if (not(cond:1_1))
        *arg2 = 0
    
    if (eax s< 0)
        *arg3 = 0

*arg3 = 0
*arg2 = 0
