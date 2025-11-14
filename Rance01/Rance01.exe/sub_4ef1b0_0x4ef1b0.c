// 函数: sub_4ef1b0
// 地址: 0x4ef1b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 8) u> 3)
    *(arg1 + 0x20c) = 0
    return 

if (*(arg1 + 0x38) != 0)
    long double x87_r7_1 = fconvert.t(arg2)
    long double x87_r6_1 = fconvert.t(*(arg1 + 0x228))
    x87_r6_1 - x87_r7_1
    bool p_1
    
    if ((((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
        fconvert.t(*(arg1 + 0x22c)) - x87_r7_1
        p_1 = unimplemented  {test ah, 0x41}
    
    if ((((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) == 0 || not(p_1))
        *(arg1 + 0x20c) = 0
        return 

*(arg1 + 0x20c) = 1
