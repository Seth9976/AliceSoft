// 函数: sub_5e6dd0
// 地址: 0x5e6dd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7_1 = fconvert.t(*(arg1 + 0x24))
long double x87_r6 = fconvert.t(arg2)
x87_r6 - x87_r7_1
int32_t result
result.w = (x87_r6 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_1) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
long double x87_r6_1 = fconvert.t(arg3)
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    long double x87_r5_1 = fconvert.t(*(arg1 + 0x28))
    x87_r6_1 - x87_r5_1
    result.w = (x87_r6_1 < x87_r5_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r5_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r5_1 ? 1 : 0) << 0xe | 0x3000
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        return result

*(arg1 + 0x50) = 1
*(arg1 + 0x24) = fconvert.s(x87_r7_1)
*(arg1 + 0x28) = fconvert.s(x87_r6_1)
return result
