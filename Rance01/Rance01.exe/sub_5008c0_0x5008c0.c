// 函数: sub_5008c0
// 地址: 0x5008c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *(arg1 + 0x20)
int32_t edx = *(arg1 + 0x24)

if (ecx != edx)
    long double x87_r7_1 = float.t(1)
    
    do
        long double x87_r6_1 = fconvert.t(*(ecx + 0x24))
        x87_r7_1 - x87_r6_1
        arg1.w = (x87_r7_1 < x87_r6_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_1, x87_r6_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x44}
        bool p_2
        
        if (not(p_1))
            long double x87_r6_2 = fconvert.t(*(ecx + 0x28))
            x87_r7_1 - x87_r6_2
            arg1.w = (x87_r7_1 < x87_r6_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_1, x87_r6_2) ? 1 : 0) << 0xa
                | (x87_r7_1 == x87_r6_2 ? 1 : 0) << 0xe | 0x3800
            p_2 = unimplemented  {test ah, 0x44}
        
        if (p_1 || p_2)
            arg1.b = 1
            return 
        
        ecx += 0x2c
    while (ecx != edx)

arg1.b = 0
