// 函数: sub_4b5d90
// 地址: 0x4b5d90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *(arg1 + 4)
int32_t edx = *(arg1 + 8)

if (ecx == edx)
    return 

arg1 = ecx + 0x70

do
    ecx += 0xac
    long double x87_r7_2 = fneg(fconvert.t(*(arg1 + 8)))
    arg1 += 0xac
    long double x87_r6_1 = fconvert.t(fconvert.s(x87_r7_2))
    float var_8_1 = fconvert.s(fconvert.t(*(arg1 - 0x8c)) * x87_r6_1)
    float var_4_1 = fconvert.s(x87_r6_1 * fconvert.t(*(arg1 - 0x88)))
    *(arg1 - 0xb0) = fconvert.s(fconvert.t(*(arg1 - 0xb0))
        + fconvert.t(fconvert.s(fconvert.t(*(arg1 - 0x90)) * x87_r6_1)))
    *(arg1 - 0xac) = fconvert.s(fconvert.t(*(arg1 - 0xac)) + fconvert.t(var_8_1))
    *(arg1 - 0xa8) = fconvert.s(fconvert.t(*(arg1 - 0xa8)) + fconvert.t(var_4_1))
while (ecx != edx)
