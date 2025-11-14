// 函数: sub_575e30
// 地址: 0x575e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = sx.q(arg3 - 1)
int32_t eax_2 = (eax - edx) s>> 1

if (arg6 s>= arg3)
    *(arg4 + (arg3 << 2)) = *arg5
    return eax_2

do
    void* edx_1 = *(arg4 + (eax_2 << 2))
    
    if (*(*(edx_1 + 0x40) + 4) s<= *(*(*arg5 + 0x40) + 4))
        break
    
    *(arg4 + (arg3 << 2)) = edx_1
    arg3 = eax_2
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q(eax_2 - 1)
    eax_2 = (eax_4 - edx_2) s>> 1
while (arg6 s< arg3)

int32_t eax_6 = *arg5
*(arg4 + (arg3 << 2)) = eax_6
return eax_6
