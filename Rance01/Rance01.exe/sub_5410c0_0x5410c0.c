// 函数: sub_5410c0
// 地址: 0x5410c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4_1 = arg1
*(arg1 + 0x2b0) -= 4
long double x87_r7 = fconvert.t(**(arg1 + 0x2b0))
*(arg1 + 0x2b0) -= 4
long double x87_r7_1 = fconvert.t(**(arg1 + 0x2b0))
long double x87_r6 = fconvert.t(fconvert.s(x87_r7))
x87_r6 - x87_r7_1
float* eax_1
eax_1.w = (x87_r6 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_1) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7_1 ? 1 : 0) << 0xe

if ((eax_1:1.b & 1) != 0)
    **(arg1 + 0x2b0) = 0
    *(arg1 + 0x2b0) += 4
    int32_t eax_3
    eax_3.b = 1
    return 1

**(arg1 + 0x2b0) = 1
*(arg1 + 0x2b0) += 4
int32_t eax_2
eax_2.b = 1
return 1
