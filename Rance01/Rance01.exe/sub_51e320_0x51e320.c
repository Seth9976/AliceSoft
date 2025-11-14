// 函数: sub_51e320
// 地址: 0x51e320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = fconvert.t(*arg2)
long double x87_r6 = fconvert.t(*arg1)
x87_r6 - x87_r7
int32_t eax
eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    long double x87_r7_1 = fconvert.t(arg2[1])
    long double x87_r6_1 = fconvert.t(arg1[1])
    x87_r6_1 - x87_r7_1
    eax.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        long double x87_r7_2 = fconvert.t(arg2[2])
        long double x87_r6_2 = fconvert.t(arg1[2])
        x87_r6_2 - x87_r7_2
        eax.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            long double x87_r7_3 = fconvert.t(arg2[3])
            long double x87_r6_3 = fconvert.t(arg1[3])
            x87_r6_3 - x87_r7_3
            eax.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
            bool p_3 = unimplemented  {test ah, 0x44}
            
            if (not(p_3))
                return 0

return 1
