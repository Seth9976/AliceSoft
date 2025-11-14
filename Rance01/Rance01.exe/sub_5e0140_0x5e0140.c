// 函数: sub_5e0140
// 地址: 0x5e0140
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result

if (*arg2 == *arg1 && arg2[1] == arg1[1] && arg2[2] == arg1[2] && arg2[3] == arg1[3]
        && arg2[4] == arg1[4] && arg2[5] == arg1[5])
    long double x87_r7_1 = fconvert.t(arg2[6])
    long double x87_r6_1 = fconvert.t(arg1[6])
    x87_r6_1 - x87_r7_1
    result.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        long double x87_r7_2 = fconvert.t(arg2[7])
        long double x87_r6_2 = fconvert.t(arg1[7])
        x87_r6_2 - x87_r7_2
        result.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            return sub_5e0060(&arg1[8], arg2, &arg2[8]) == 0

result.b = 0
return result
