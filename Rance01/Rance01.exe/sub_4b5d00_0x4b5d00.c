// 函数: sub_4b5d00
// 地址: 0x4b5d00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *(arg1 + 4)
int32_t edx = *(arg1 + 8)

if (ecx == edx)
    return 

void* eax = ecx + 0x74

do
    ecx += 0xac
    float var_10_1 = fconvert.s(fconvert.t(*(eax + 0x14)))
    eax += 0xac
    long double x87_r5_2 = fconvert.t(var_10_1)
    long double x87_r4_3 = fconvert.t(fconvert.s(x87_r5_2 * float.t(0)))
    *(eax - 0xb4) = fconvert.s(fconvert.t(*(eax - 0xb4)) + fconvert.t(fconvert.s(x87_r4_3)))
    *(eax - 0xb0) = fconvert.s(fconvert.t(*(eax - 0xb0))
        + fconvert.t(fconvert.s(x87_r5_2 * fconvert.t(-9.8000001907348633))))
    *(eax - 0xac) = fconvert.s(fconvert.t(*(eax - 0xac)) + fconvert.t(fconvert.s(x87_r4_3)))
while (ecx != edx)
