// 函数: sub_5b6e00
// 地址: 0x5b6e00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 != 0xfffffff0)
    int32_t eax_1 = *(arg1 + 0x18)
    
    if (eax_1 != 0)
        __free_base(eax_1)
    
    int32_t eax_2 = *(arg1 + 0x1c)
    
    if (eax_2 != 0)
        __free_base(eax_2)
    
    __builtin_memset(&arg1[1], 0, 0x14)

void* esi_1 = &arg1[3]
int32_t i_1 = 7
int32_t i

do
    __free_base(*esi_1)
    esi_1 += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
__free_base(*(arg1 + 0x24))
__free_base(*(arg1 + 0x98))
__free_base(arg1[0xa].d)
return sub_6bc670(arg1, i_1.b, 0xb4)
