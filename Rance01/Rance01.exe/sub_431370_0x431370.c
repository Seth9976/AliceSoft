// 函数: sub_431370
// 地址: 0x431370
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(*(arg1 + 0x40) + 0x88) = arg4
*(*(arg1 + 0x40) + 0x8c) = arg5
int32_t eax_3 = *(*(arg1 + 0x40) + 8)

if (eax_3 != 0)
    eax_3 = *(eax_3 + 0x1c)

int32_t eax_6

if (arg6 - 1 u> 8)
    eax_6 = 0
else
    switch (arg6 + &jump_table_43146c[2]:3)
        case &lookup_table_431478, &lookup_table_431478[3], &lookup_table_431478[6]
            eax_6 = 0
        case &lookup_table_431478[1], &lookup_table_431478[4], &lookup_table_431478[7]
            int32_t eax_4
            int32_t edx_3
            edx_3:eax_4 = sx.q(eax_3)
            eax_6 = neg.d((eax_4 - edx_3) s>> 1)
        case &lookup_table_431478[2], &lookup_table_431478[5], &lookup_table_431478[8]
            eax_6 = neg.d(eax_3)

*(*(arg1 + 0x40) + 0xbc) = eax_6
int32_t eax_8 = *(*(arg1 + 0x40) + 8)

if (eax_8 != 0)
    eax_8 = *(eax_8 + 0x20)

int32_t eax_11

if (arg6 - 1 u> 8)
    eax_11 = 0
else
    switch (arg6 + &jump_table_431484[2]:3)
        case &lookup_table_431490, &lookup_table_431490[1], &lookup_table_431490[2]
            eax_11 = 0
        case &lookup_table_431490[3], &lookup_table_431490[4], &lookup_table_431490[5]
            int32_t eax_9
            int32_t edx_6
            edx_6:eax_9 = sx.q(eax_8)
            eax_11 = neg.d((eax_9 - edx_6) s>> 1)
        case &lookup_table_431490[6], &lookup_table_431490[7], &lookup_table_431490[8]
            eax_11 = neg.d(eax_8)

*(*(arg1 + 0x40) + 0xc0) = eax_11
void* result = *(arg1 + 0x40)
*(result + 0x98) = fconvert.s(fconvert.t(arg7))
*(result + 0x9c) = fconvert.s(fconvert.t(arg8))
*(result + 0xb0) = fconvert.s(fconvert.t(arg9))
*(result + 0xb4) = fconvert.s(fconvert.t(arg10))
*(result + 0xb8) = fconvert.s(fconvert.t(arg11))

if (*(result + 0x70) == 0)
    result.b = 0
    return result

if (arg12 == 0)
    return sub_42fcd0(arg2, arg3)

return sub_42fc10(arg3, arg2)
