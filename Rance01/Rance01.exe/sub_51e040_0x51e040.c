// 函数: sub_51e040
// 地址: 0x51e040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = fconvert.t(*arg2)
long double x87_r6 = fconvert.t(*arg1)
x87_r6 - x87_r7
int16_t result

if ((((x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
    fconvert.t(*arg1) - fconvert.t(*arg2)
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (not(p_1))
        result.b = 0
        return result
    
    long double x87_r7_2 = fconvert.t(arg2[1])
    long double x87_r6_2 = fconvert.t(arg1[1])
    x87_r6_2 - x87_r7_2
    
    if ((((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
        fconvert.t(arg1[1]) - fconvert.t(arg2[1])
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (not(p_2))
            result.b = 0
            return result
        
        long double x87_r7_4 = fconvert.t(arg2[2])
        long double x87_r6_4 = fconvert.t(arg1[2])
        x87_r6_4 - x87_r7_4
        
        if ((((x87_r6_4 < x87_r7_4 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
            result.b = 0
            return result

result.b = 1
return result
