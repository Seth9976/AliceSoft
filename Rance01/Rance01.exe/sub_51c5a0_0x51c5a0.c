// 函数: sub_51c5a0
// 地址: 0x51c5a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* ecx = *arg1
int32_t edx = arg1[1]

if (ecx != edx)
    long double x87_r7_1 = float.t(0)
    
    do
        long double x87_r6_5 = fconvert.t(ecx[1]) * fconvert.t(arg2[1])
            + fconvert.t(*ecx) * fconvert.t(*arg2) + fconvert.t(ecx[2]) * fconvert.t(arg2[2])
            + fconvert.t(ecx[3])
        x87_r6_5 - x87_r7_1
        arg1.w = (x87_r6_5 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_5, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_5 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
        
        if ((arg1:1.b & 1) != 0)
            arg1.b = 0
            return 
        
        ecx = &ecx[4]
    while (ecx != edx)

arg1.b = 1
