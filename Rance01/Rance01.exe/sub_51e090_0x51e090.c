// 函数: sub_51e090
// 地址: 0x51e090
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

fconvert.t(*arg1) - fconvert.t(*arg2)
bool p = unimplemented  {test ah, 0x5}
int16_t result

if (p)
    long double x87_r7_1 = fconvert.t(*arg2)
    long double x87_r6_1 = fconvert.t(*arg1)
    x87_r6_1 - x87_r7_1
    
    if ((((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
        result.b = 0
        return result
    
    fconvert.t(arg1[1]) - fconvert.t(arg2[1])
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r7_3 = fconvert.t(arg2[1])
        long double x87_r6_3 = fconvert.t(arg1[1])
        x87_r6_3 - x87_r7_3
        
        if ((((x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
            result.b = 0
            return result
        
        fconvert.t(arg1[2]) - fconvert.t(arg2[2])
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (p_2)
            result.b = 0
            return result

result.b = 1
return result
