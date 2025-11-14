// 函数: sub_5195f0
// 地址: 0x5195f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* ebx = arg2
void* i_1 = *arg1
int32_t edi = arg1[1]
float var_24
float var_20
float var_1c
long double x87_r7

if (i_1 != edi)
    long double x87_r7_1 = fconvert.t(3.40282347e+38f)
    void* i = i_1
    float var_18 = fconvert.s(x87_r7_1)
    long double x87_r6_1 = fconvert.t(-3.40282347e+38f)
    float var_14_1 = fconvert.s(x87_r6_1)
    float var_c_1 = fconvert.s(x87_r6_1)
    float var_4_1 = fconvert.s(x87_r6_1)
    float var_10_1 = fconvert.s(x87_r7_1)
    float var_8_1 = fconvert.s(x87_r7_1)
    
    for (; i != edi; i += 0x10)
        sub_4b7180(i, &var_18)
    
    long double x87_r6_2 = fconvert.t(0.5)
    var_24 = fconvert.s((fconvert.t(var_14_1) + fconvert.t(var_18)) * x87_r6_2)
    var_20 = fconvert.s((fconvert.t(var_c_1) + fconvert.t(var_10_1)) * x87_r6_2)
    var_1c = fconvert.s(x87_r6_2 * (fconvert.t(var_4_1) + fconvert.t(var_8_1)))
    arg2 = fconvert.s(float.t(0))
    
    for (; i_1 != edi; i_1 += 0x10)
        void* i_2 = i
        long double x87_r7_9 = fconvert.t(var_20) - fconvert.t(*(i_1 + 4))
        long double x87_r6_10 = fconvert.t(var_24) - fconvert.t(*i_1)
        long double x87_r5_2 = fconvert.t(var_1c) - fconvert.t(*(i_1 + 8))
        long double st0_1
        st0_1, i = sub_4d9250(fconvert.s(fconvert.t(fconvert.s(x87_r7_9 * x87_r7_9
            + x87_r6_10 * x87_r6_10 + x87_r5_2 * x87_r5_2))))
        long double x87_r7_16 = fconvert.t(arg2)
        long double x87_r6_14 = fconvert.t(fconvert.s(st0_1 + fconvert.t(*(i_1 + 0xc))))
        x87_r6_14 - x87_r7_16
        
        if ((((x87_r6_14 < x87_r7_16 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_14, x87_r7_16) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_16 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
            arg2 = fconvert.s(x87_r7_16)
    
    x87_r7 = fconvert.t(arg2)
else
    x87_r7 = float.t(0)
    var_24 = fconvert.s(x87_r7)
    var_20 = fconvert.s(x87_r7)
    var_1c = fconvert.s(x87_r7)

ebx[3] = fconvert.s(x87_r7)
*ebx = var_24
ebx[1] = var_20
ebx[2] = var_1c
