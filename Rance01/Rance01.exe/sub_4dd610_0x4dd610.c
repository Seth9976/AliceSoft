// 函数: sub_4dd610
// 地址: 0x4dd610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = arg2
int32_t i = (arg3 - result) s>> 2

if (i s> 0)
    int32_t* ecx_1 = *arg1
    
    do
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = sx.q(i)
        int32_t i_1 = (eax_1 - edx_1) s>> 1
        
        if (sub_4dc1f0(*(result + (i_1 << 2)), ecx_1) == 0)
            i = i_1
        else
            result = result + (i_1 << 2) + 4
            i += 0xffffffff - i_1
    while (i s> 0)

return result
