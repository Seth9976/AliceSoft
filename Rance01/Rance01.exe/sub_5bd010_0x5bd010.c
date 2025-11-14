// 函数: sub_5bd010
// 地址: 0x5bd010
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0)
    return 

int32_t eax_1 = arg1[1].d

if (eax_1 != 0)
    __free_base(eax_1)

int32_t eax_2 = *(arg1 + 0x14)

if (eax_2 != 0)
    __free_base(eax_2)

int32_t eax_3 = *(arg1 + 0x18)

if (eax_3 != 0)
    __free_base(eax_3)

if (*(arg1 + 8) != 0)
    int32_t ebx
    int32_t var_8_1 = ebx
    
    for (int32_t* i = nullptr; i s< 0x44; i = &i[1])
        for (int32_t j = 0; j s< 0x20; j += 4)
            __free_base(*(*(i + *(arg1 + 8)) + j))
        
        __free_base(*(i + *(arg1 + 8)))
    
    __free_base(*(arg1 + 8))

if (*(arg1 + 0xc) != 0)
    for (int32_t i_1 = 0; i_1 s< 0xc; i_1 += 4)
        __free_base(*(*(arg1 + 0xc) + i_1))
    
    __free_base(*(arg1 + 0xc))

sub_6bc670(arg1, 0, 0x34)
