// 函数: sub_431180
// 地址: 0x431180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(*(arg1 + 0x40) + 0x88) = arg2
*(*(arg1 + 0x40) + 0x8c) = arg3
int32_t eax_2 = *(*(arg1 + 0x40) + 8)

if (eax_2 != 0)
    eax_2 = *(eax_2 + 0x1c)

int32_t eax_5

if (arg4 - 1 u> 8)
    eax_5 = 0
else
    switch (arg4 + &jump_table_431244[2]:3)
        case &lookup_table_431250, &lookup_table_431250[3], &lookup_table_431250[6]
            eax_5 = 0
        case &lookup_table_431250[1], &lookup_table_431250[4], &lookup_table_431250[7]
            int32_t eax_3
            int32_t edx_3
            edx_3:eax_3 = sx.q(eax_2)
            eax_5 = neg.d((eax_3 - edx_3) s>> 1)
        case &lookup_table_431250[2], &lookup_table_431250[5], &lookup_table_431250[8]
            eax_5 = neg.d(eax_2)

*(*(arg1 + 0x40) + 0xbc) = eax_5
int32_t eax_7 = *(*(arg1 + 0x40) + 8)

if (eax_7 != 0)
    eax_7 = *(eax_7 + 0x20)

int32_t eax_10

if (arg4 - 1 u> 8)
    eax_10 = 0
else
    switch (arg4 + &jump_table_43125c[2]:3)
        case &lookup_table_431268, &lookup_table_431268[1], &lookup_table_431268[2]
            eax_10 = 0
        case &lookup_table_431268[3], &lookup_table_431268[4], &lookup_table_431268[5]
            int32_t eax_8
            int32_t edx_6
            edx_6:eax_8 = sx.q(eax_7)
            eax_10 = neg.d((eax_8 - edx_6) s>> 1)
        case &lookup_table_431268[6], &lookup_table_431268[7], &lookup_table_431268[8]
            eax_10 = neg.d(eax_7)

*(*(arg1 + 0x40) + 0xc0) = eax_10
void* result = *(arg1 + 0x40)
*(result + 0x98) = fconvert.s(fconvert.t(arg5))
*(result + 0x9c) = fconvert.s(fconvert.t(arg6))
*(result + 0xb0) = fconvert.s(fconvert.t(arg7))
*(result + 0xb4) = fconvert.s(fconvert.t(arg8))
*(result + 0xb8) = fconvert.s(fconvert.t(arg9))
return result
