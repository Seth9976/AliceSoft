// 函数: sub_4bda50
// 地址: 0x4bda50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx = 1
int32_t var_10 = 1
int32_t eax = 1

if (arg1 s>= 1)
    do
        edx *= eax
        eax += 1
    while (eax s<= arg1)
    
    var_10 = edx

int32_t edx_1 = 1
int32_t var_8 = 1
int32_t eax_1 = 1

if (arg2 s>= 1)
    do
        edx_1 *= eax_1
        eax_1 += 1
    while (eax_1 s<= arg2)
    
    var_8 = edx_1

int32_t edx_2 = 1
int32_t ecx = arg1 - arg2
int32_t var_c = 1
int32_t eax_2 = 1

if (ecx s>= 1)
    do
        edx_2 *= eax_2
        eax_2 += 1
    while (eax_2 s<= ecx)
    
    var_c = edx_2

long double x87_r7 = fconvert.t(arg3)
int32_t eax_3 = arg2
float var_14 = fconvert.s(x87_r7)

if (arg2 s< 0)
    eax_3 = neg.d(eax_3)

arg3 = fconvert.s(float.t(1))
long double x87_r5_2

while (true)
    x87_r5_2 = fconvert.t(var_14)
    
    if ((eax_3.b & 1) != 0)
        arg3 = fconvert.s(fconvert.t(arg3) * x87_r5_2)
    
    eax_3 u>>= 1
    
    if (eax_3 == 0)
        break
    
    var_14 = fconvert.s(x87_r5_2 * x87_r5_2)

long double x87_r5_3 = float.t(1)
long double x87_r4_3 = fconvert.t(arg3)

if (arg2 s< 0)
    x87_r4_3 = x87_r5_3 / x87_r4_3

int32_t eax_4 = ecx
float var_14_1 = fconvert.s(x87_r5_3 - x87_r7)

if (ecx s< 0)
    eax_4 = neg.d(eax_4)

arg3 = fconvert.s(x87_r5_2)
long double x87_r6_3

while (true)
    x87_r6_3 = fconvert.t(var_14_1)
    
    if ((eax_4.b & 1) != 0)
        arg3 = fconvert.s(fconvert.t(arg3) * x87_r6_3)
    
    eax_4 u>>= 1
    
    if (eax_4 == 0)
        break
    
    var_14_1 = fconvert.s(x87_r6_3 * x87_r6_3)

long double x87_r7_4

if (ecx s>= 0)
    x87_r7_4 = fconvert.t(arg3)
else
    x87_r7_4 = x87_r6_3 / fconvert.t(arg3)

return fconvert.t(fconvert.s(float.t(var_10) / (float.t(var_c) * float.t(var_8))
    * fconvert.t(fconvert.s(x87_r4_3)) * fconvert.t(fconvert.s(x87_r7_4))))
