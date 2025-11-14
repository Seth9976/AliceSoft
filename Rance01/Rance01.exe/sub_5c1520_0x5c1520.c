// 函数: sub_5c1520
// 地址: 0x5c1520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x24) == 0)
    return 

int32_t eax_1 = *(arg1 + 0x20)

if (eax_1 != 0)
    __free_base(eax_1)

int32_t eax_2 = *(arg1 + 8)

if (eax_2 != 0)
    __free_base(eax_2)

__builtin_memset(arg1, 0, 0x28)
__free_base(arg1)
