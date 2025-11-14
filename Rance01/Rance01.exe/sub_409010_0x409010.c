// 函数: sub_409010
// 地址: 0x409010
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x49) == 0)
    return 

if ((***(arg1 + 0x24))() - *(arg1 + 0x44) u< 0xbb8)
    Sleep(*(arg1 + 0x4c))
    return 

int32_t eax_6
int32_t edx_2
edx_2:eax_6 = muls.dp.d(0x57619f1, *(arg1 + 0x40) * 0x3e8)
int32_t edx_3 = edx_2 s>> 6
int32_t eax_9 = (edx_3 u>> 0x1f) + edx_3

if (eax_9 s> 0x5a)
    *(arg1 + 0x4c) += 1
else if (eax_9 s< 0x3c)
    int32_t eax_10 = *(arg1 + 0x4c)
    
    if (eax_10 != 0)
        *(arg1 + 0x4c) = eax_10 - 1

Sleep(*(arg1 + 0x4c))
int32_t* ecx_5 = *(arg1 + 0x24)
*(arg1 + 0x40) = 0
*(arg1 + 0x44) = (**ecx_5)()
