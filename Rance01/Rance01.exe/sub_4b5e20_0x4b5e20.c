// 函数: sub_4b5e20
// 地址: 0x4b5e20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *(arg1 + 4)
int32_t edx = *(arg1 + 8)

if (ecx == edx)
    return 

long double x87_r7_1 = fconvert.t(arg2)
void* eax = ecx + 0x90

do
    ecx += 0xac
    long double x87_r6_2 = fconvert.t(*(eax - 0x14)) * x87_r7_1
    eax += 0xac
    float var_8_1 = fconvert.s(fconvert.t(*(eax - 0xbc)) * x87_r7_1)
    float var_4_1 = fconvert.s(fconvert.t(*(eax - 0xb8)) * x87_r7_1)
    *(eax - 0xb0) = fconvert.s(fconvert.t(*(eax - 0xb0)) + fconvert.t(fconvert.s(x87_r6_2)))
    *(eax - 0xac) = fconvert.s(fconvert.t(*(eax - 0xac)) + fconvert.t(var_8_1))
    *(eax - 0xa8) = fconvert.s(fconvert.t(*(eax - 0xa8)) + fconvert.t(var_4_1))
while (ecx != edx)
