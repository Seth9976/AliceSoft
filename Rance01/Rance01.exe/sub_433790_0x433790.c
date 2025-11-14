// 函数: sub_433790
// 地址: 0x433790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 != 0)
    arg1 *= *(arg2 + 0x54)

*(arg2 + 0x70) += arg1
int32_t edx = *(arg2 + 0x78)

if (edx != *(arg2 + 0x7c))
    int32_t eax_1
    eax_1, edx = sub_5ee000(*(arg2 + 0x70), edx, arg2 + 0x78)
    *(arg2 + 0x14) = eax_1
    *(arg2 + 0xc) = 1

if (*(arg2 + 0x88) != *(arg2 + 0x8c))
    *(arg2 + 0x18) = sub_5ee000(*(arg2 + 0x70), edx, arg2 + 0x88)
    *(arg2 + 0xc) = 1

int32_t edx_1 = *(arg2 + 0x98)

if (edx_1 != *(arg2 + 0x9c))
    int32_t eax_6
    eax_6, edx_1 = sub_5ee000(*(arg2 + 0x70), edx_1, arg2 + 0x98)
    *(arg2 + 0x28) = eax_6
    *(arg2 + 0xc) = 1

if (*(arg2 + 0x108) != *(arg2 + 0x10c))
    *(arg2 + 0x1a0) = fconvert.s(sub_5ebfe0(*(arg2 + 0x70), edx_1, arg2 + 0x108))
    *(arg2 + 0xc) = 1

int32_t edx_2 = *(arg2 + 0x118)

if (edx_2 != *(arg2 + 0x11c))
    long double st0_2
    st0_2, edx_2 = sub_5ebfe0(*(arg2 + 0x70), edx_2, arg2 + 0x118)
    *(arg2 + 0x1a4) = fconvert.s(st0_2)
    *(arg2 + 0xc) = 1

if (*(arg2 + 0x128) != *(arg2 + 0x12c))
    *(arg2 + 0x1a8) = fconvert.s(sub_5ebfe0(*(arg2 + 0x70), edx_2, arg2 + 0x128))
    *(arg2 + 0xc) = 1

int32_t edx_3 = *(arg2 + 0x138)

if (edx_3 != *(arg2 + 0x13c))
    long double st0_4
    st0_4, edx_3 = sub_5ebfe0(*(arg2 + 0x70), edx_3, arg2 + 0x138)
    *(arg2 + 0x1ac) = fconvert.s(st0_4)
    *(arg2 + 0xc) = 1

if (*(arg2 + 0x148) != *(arg2 + 0x14c))
    *(arg2 + 0x1b0) = fconvert.s(sub_5ebfe0(*(arg2 + 0x70), edx_3, arg2 + 0x148))
    *(arg2 + 0xc) = 1

void* edx_4 = *(arg2 + 0x178)

if (edx_4 != *(arg2 + 0x17c))
    int32_t eax_15 = *(arg2 + 0x70)
    
    if (*(edx_4 + 8) s<= eax_15)
        *(arg2 + 0x198) = sub_433930(arg2 + 0x178, eax_15, arg2 + 0x158)
        *(arg2 + 0xc) = 1

int32_t result = *(arg2 + 0x188)

if (result != *(arg2 + 0x18c))
    result = *(arg2 + 0x70)
    
    if (*(*(arg2 + 0x188) + 8) s<= result)
        result = sub_433930(arg2 + 0x188, result, arg2 + 0x168)
        *(arg2 + 0x19c) = result
        *(arg2 + 0xc) = 1

return result
