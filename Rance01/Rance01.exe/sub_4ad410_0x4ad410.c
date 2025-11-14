// 函数: sub_4ad410
// 地址: 0x4ad410
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* ecx = *(arg1 + 0x28)
long double x87_r4 = fconvert.t(arg2)
long double x87_r5_5 = fconvert.t(fconvert.s(fconvert.t(*ecx) * x87_r4
    + fconvert.t(ecx[1]) * fconvert.t(arg3) + fconvert.t(ecx[2])))
long double x87_r4_2 = float.t(0)
x87_r4_2 - x87_r5_5
arg1.w = (x87_r4_2 < x87_r5_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_2, x87_r5_5) ? 1 : 0) << 0xa
    | (x87_r4_2 == x87_r5_5 ? 1 : 0) << 0xe | 0x2000
bool p = unimplemented  {test ah, 0x5}

if (p)
    long double x87_r4_7 = fconvert.t(fconvert.s(fconvert.t(ecx[3]) * x87_r4
        + fconvert.t(ecx[4]) * x87_r4_2 + fconvert.t(ecx[5])))
    x87_r4_7 - x87_r5_5
    arg1.w = (x87_r4_7 < x87_r5_5 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_7, x87_r5_5) ? 1 : 0) << 0xa
        | (x87_r4_7 == x87_r5_5 ? 1 : 0) << 0xe | 0x2800
    
    if ((arg1:1.b & 0x41) != 0)
        long double temp1_1 = fconvert.t(fconvert.s(x87_r4_2 * fconvert.t(ecx[7])
            + x87_r4 * fconvert.t(ecx[6]) + fconvert.t(ecx[8])))
        x87_r5_5 - temp1_1
        arg1.w = (x87_r5_5 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_5, temp1_1) ? 1 : 0) << 0xa
            | (x87_r5_5 == temp1_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            arg1.b = 1
            return 

arg1.b = 0
