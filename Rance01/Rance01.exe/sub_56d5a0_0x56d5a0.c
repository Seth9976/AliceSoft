// 函数: sub_56d5a0
// 地址: 0x56d5a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_14
long double x87_r7_1

if (*(arg1 + 0x48) == 0)
    var_14 = fconvert.s(float.t(*(arg1 + 0x1c)))
    x87_r7_1 = float.t(*(arg1 + 0x20))
else
    var_14 = fconvert.s(float.t(*(arg1 + 0x34)))
    x87_r7_1 = float.t(*(arg1 + 0x38))

float var_10 = fconvert.s(x87_r7_1)
int32_t var_1c
int32_t var_18_1

if (*(arg1 + 0x3c) == 0)
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = sx.q(*(arg1 + 0x2c) - *(arg1 + 0x34))
    int32_t ecx_2 = (eax_3 - edx_1) s>> 1
    int32_t eax_7
    int32_t edx_2
    edx_2:eax_7 = sx.q(*(arg1 + 0x30) - *(arg1 + 0x38))
    int32_t eax_9 = (eax_7 - edx_2) s>> 1
    var_1c = ecx_2
    var_18_1 = eax_9
    
    if (ecx_2 s< 0)
        var_1c = 0
    
    if (eax_9 s< 0)
        var_18_1 = 0
else
    var_1c = 0
    var_18_1 = 0

long double x87_r6 = fconvert.t(0.5)
float var_1c_1 = fconvert.s(float.t(*(arg1 + 0x1c)) / float.t(*(arg1 + 0x24)))
float var_4 = fconvert.s(float.t(*(arg1 + 0x20)) / float.t(*(arg1 + 0x28)))
float* result = (*(**(arg1 + 0x40) + 0x14))()

if (result == 0)
    result.b = 0
    return result

long double x87_r7_11 = fconvert.t(fconvert.s(float.t(var_1c) - x87_r6))
long double x87_r5 = float.t(0)
float var_c_1 = fconvert.s(x87_r7_11 + x87_r5)
long double x87_r5_2 = fconvert.t(var_c_1)
*result = fconvert.s(x87_r5_2)
long double x87_r4 = fconvert.t(fconvert.s(float.t(var_18_1) - x87_r6))
float var_18_3 = fconvert.s(x87_r5 + x87_r4)
result[1] = fconvert.s(fconvert.t(var_18_3))
long double x87_r4_3 = fconvert.t(0.5f)
result[2] = fconvert.s(x87_r4_3)
long double x87_r3_1 = float.t(1)
result[3] = fconvert.s(x87_r3_1)
long double x87_r2 = fconvert.t(-nanf)
result[4] = fconvert.s(x87_r2)
long double x87_r1 = float.t(0)
result[5] = fconvert.s(x87_r1)
result[6] = fconvert.s(x87_r1)
long double x87_r1_2 = fconvert.t(fconvert.s(x87_r7_11 + fconvert.t(var_14)))
result[7] = fconvert.s(x87_r1_2)
result[8] = fconvert.s(fconvert.t(var_18_3))
result[9] = fconvert.s(x87_r4_3)
result[0xa] = fconvert.s(x87_r3_1)
result[0xb] = fconvert.s(x87_r2)
result[0xc] = fconvert.s(fconvert.t(var_1c_1))
result[0xd] = fconvert.s(x87_r1)
result[0xe] = fconvert.s(x87_r5_2)
float var_8_1 = fconvert.s(x87_r4 + fconvert.t(var_10))
long double x87_r2_3 = fconvert.t(var_8_1)
result[0xf] = fconvert.s(x87_r2_3)
result[0x10] = fconvert.s(x87_r4_3)
result[0x11] = fconvert.s(x87_r3_1)
result[0x12] = fconvert.s(x87_r2)
result[0x13] = fconvert.s(x87_r1)
long double x87_r2_8 = fconvert.t(var_4)
result[0x14] = fconvert.s(x87_r2_8)
result[0x15] = fconvert.s(x87_r1_2)
result[0x16] = fconvert.s(x87_r2_3)
result[0x17] = fconvert.s(x87_r4_3)
result[0x18] = fconvert.s(x87_r3_1)
result[0x19] = fconvert.s(x87_r2)
result[0x1a] = fconvert.s(fconvert.t(var_1c_1))
result[0x1b] = fconvert.s(x87_r2_8)
return (*(**(arg1 + 0x40) + 0x18))(var_1c_1, var_18_3, var_14, var_10, var_c_1, var_8_1, var_4) != 0
