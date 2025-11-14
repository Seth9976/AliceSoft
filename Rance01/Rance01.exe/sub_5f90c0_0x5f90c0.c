// 函数: sub_5f90c0
// 地址: 0x5f90c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = *(arg1 + 0x10)
int32_t eax_1

if (*(arg1 + 0x24) s> 0 || *(arg1 + 0x28) s> 0)
    int32_t edx_1 = *(arg1 + 0x1c)
    eax_1 = *(arg1 + 0x24)
    
    if (edx_1 s< 0)
        edx_1 = 0
    
    if (edx_1 + eax_1 s> esi)
        eax_1 = esi - edx_1
else
    eax_1 = esi

if (arg3 - 1 u<= 8)
    switch (arg3 + &jump_table_5f9118[2]:3)
        case &lookup_table_5f9124[1], &lookup_table_5f9124[4], &lookup_table_5f9124[7]
            int32_t eax_2
            int32_t edx_3
            edx_3:eax_2 = sx.q(eax_1)
            return neg.d((eax_2 - edx_3) s>> 1) + arg2
        case &lookup_table_5f9124[2], &lookup_table_5f9124[5], &lookup_table_5f9124[8]
            return neg.d(eax_1) + arg2

return arg2
