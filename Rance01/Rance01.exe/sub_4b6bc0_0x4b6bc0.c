// 函数: sub_4b6bc0
// 地址: 0x4b6bc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = float.t(0)
long double x87_r6 = fconvert.t(arg1)
x87_r6 - x87_r7
long double x87_r5 = fconvert.t(360.0)
bool p = unimplemented  {test ah, 0x5}

if (not(p))
    while (true)
        long double x87_r5_2 = fconvert.t(fconvert.s(x87_r6 + x87_r5))
        x87_r5_2 - x87_r7
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            break
        
        x87_r6 = x87_r5_2
    
    x87_r6 = x87_r7
    x87_r7 = x87_r5

long double x87_r5_3 = fconvert.t(360f)
x87_r5_3 - x87_r6
bool p_2 = unimplemented  {test ah, 0x41}

if (p_2)
    return x87_r7

while (true)
    long double x87_r5_6 = fconvert.t(fconvert.s(x87_r6 - x87_r7))
    x87_r5_6 - x87_r5_3
    
    if ((((x87_r5_6 < x87_r5_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_6, x87_r5_3) ? 1 : 0) << 0xa
            | (x87_r5_6 == x87_r5_3 ? 1 : 0) << 0xe | 0x2800):1.b & 1) != 0)
        break
    
    x87_r6 = x87_r5_6

return x87_r5_3
