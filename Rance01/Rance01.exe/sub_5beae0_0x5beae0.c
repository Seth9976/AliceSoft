// 函数: sub_5beae0
// 地址: 0x5beae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx = 0

if (arg9 s<= 0)
    return 

long double x87_r7_1 = fconvert.t(arg6)
long double x87_r6_1 = fconvert.t(arg5)
void* edi_2 = arg1 - arg3

while (true)
    float var_10_1
    long double x87_r6_2
    long double x87_r7_2
    
    if (edx s< arg4 - arg8)
        var_10_1 = fconvert.s(x87_r6_1)
        x87_r6_2 = x87_r7_1
        x87_r7_2 = x87_r6_1
    else
        x87_r6_2 = x87_r7_1
        x87_r7_2 = x87_r6_1
        var_10_1 = fconvert.s(x87_r6_2)
    
    float* eax = edi_2 + arg3
    long double x87_r5_4 =
        fconvert.t(fconvert.s(fabs(fconvert.t(*(eax + arg7 - arg1))) / fconvert.t(*eax)))
    long double x87_r4_1 = fconvert.t(var_10_1)
    x87_r4_1 - x87_r5_4
    eax.w = (x87_r4_1 < x87_r5_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_1, x87_r5_4) ? 1 : 0) << 0xa
        | (x87_r4_1 == x87_r5_4 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax:1.b & 0x41) != 0)
        *arg3 = 1
    else
        *arg3 = 0
    
    edx += 1
    arg3 = &arg3[1]
    
    if (edx s>= arg9)
        break
    
    x87_r6_1 = x87_r7_2
    x87_r7_1 = x87_r6_2
