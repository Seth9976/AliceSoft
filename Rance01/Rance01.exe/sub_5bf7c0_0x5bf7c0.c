// 函数: sub_5bf7c0
// 地址: 0x5bf7c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0)
    return 

int32_t i = 0

if (*(arg1 + 4) s> 0)
    do
        int32_t eax_1 = *(arg1 + 0x14)
        
        if (*(eax_1 + (i << 2)) != 0)
            __free_base(*(eax_1 + (i << 2)))
        
        i += 1
    while (i s< *(arg1 + 4))

__free_base(*(arg1 + 0x14))
int32_t i_1 = 0

if (*(arg1 + 0x18) s> 0)
    do
        __free_base(*(*(arg1 + 0x1c) + (i_1 << 2)))
        i_1 += 1
    while (i_1 s< *(arg1 + 0x18))

__free_base(*(arg1 + 0x1c))
sub_6bc670(arg1, 0, 0x2c)
__free_base(arg1)
