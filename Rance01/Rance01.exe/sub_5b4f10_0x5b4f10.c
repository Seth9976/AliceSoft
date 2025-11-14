// 函数: sub_5b4f10
// 地址: 0x5b4f10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i_1 = *(arg1 + 0x54)

if (i_1 != 0)
    int32_t* i
    
    do
        i = i_1[1]
        __free_base(*i_1)
        *i_1 = 0
        i_1[1] = 0
        __free_base(i_1)
        i_1 = i
    while (i != 0)

int32_t result = *(arg1 + 0x50)

if (result != 0)
    *(arg1 + 0x44) = _realloc(*(arg1 + 0x44), *(arg1 + 0x4c) + result)
    result = *(arg1 + 0x50)
    *(arg1 + 0x4c) += result
    *(arg1 + 0x50) = 0

*(arg1 + 0x54) = 0
*(arg1 + 0x48) = 0
return result
