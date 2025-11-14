// 函数: sub_56c9e0
// 地址: 0x56c9e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = arg3

if (arg2 s>= 0)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x66666667, *(arg1 + 8) - *(arg1 + 4))
    int32_t edx_2 = edx_1 s>> 4
    
    if (arg2 s< (edx_2 u>> 0x1f) + edx_2)
        if (arg3 s< 0)
            esi = 0
        else if (arg3 s> 0x64)
            esi = 0x64
        
        *(*(arg1 + 4) + arg2 * 0x28) = esi

for (int32_t* i = *(arg1 + 0x18); i != *(arg1 + 0x1c); i = &i[1])
    (***i)(arg2, arg3)
