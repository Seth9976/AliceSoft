// 函数: sub_42bc90
// 地址: 0x42bc90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
long double x87_r7 = fconvert.t(4294967295.0)
float* ebx = arg3
int32_t ebp = arg2
int32_t eax = *(ebp + 0x24)

if (eax == 1)
    *arg1 += 1
    
    if (*arg1 s>= 0x209)
        sub_595240(ecx, arg1)
        *arg1 = 0
    
    int32_t eax_1 = *arg1
    int32_t ecx_1 = arg1[eax_1 + 1]
    arg2 = ecx_1
    *arg1 = eax_1 + 1
    
    if (eax_1 + 1 s>= 0x209)
        ecx_1 = sub_595240(ecx_1, arg1)
        *arg1 = 0
    
    int32_t eax_3 = *arg1
    float esi_1 = arg1[eax_3 + 1]
    *arg1 = eax_3 + 1
    
    if (eax_3 + 1 s>= 0x209)
        sub_595240(ecx_1, arg1)
        *arg1 = 0
    
    int32_t edx_4 = *arg1
    long double x87_r6_1 = float.t(arg1[edx_4 + 1])
    
    if (arg1[edx_4 + 1] s< 0)
        x87_r6_1 = x87_r6_1 + fconvert.t(4294967296.0)
    
    long double x87_r5_1 = fconvert.t(0.5)
    *ebx = fconvert.s(fconvert.t(fconvert.s(x87_r6_1 / x87_r7)) - x87_r5_1)
    long double x87_r5_3 = float.t(esi_1)
    
    if (esi_1 s< 0)
        x87_r5_3 = x87_r5_3 + fconvert.t(4294967296.0)
    
    ebx[1] = fconvert.s(fconvert.t(fconvert.s(x87_r5_3 / x87_r7)) - x87_r5_1)
    long double x87_r5_7 = float.t(arg2)
    
    if (arg2 s< 0)
        x87_r5_7 = x87_r5_7 + fconvert.t(4294967296.0)
    
    ebx[2] = fconvert.s(fconvert.t(fconvert.s(x87_r5_7 / x87_r5_7)) - x87_r5_1)
else if (eax == 2)
    arg3 = fconvert.s(sub_595410(arg1) - fconvert.t(0.5))
    arg2 = fconvert.s(sub_595410(arg1) - fconvert.t(0.5))
    *ebx = fconvert.s(fconvert.t(arg3))
    ebx[1] = fconvert.s(fconvert.t(arg2))
    ebx[2] = fconvert.s(float.t(0))

int32_t ecx_3 = sub_660160(ebx)
arg2 = fconvert.s(fconvert.t(*(ebp + 0x28)))
long double x87_r7_11 = fconvert.t(*(ebp + 0x2c))
*arg1 += 1

if (*arg1 s>= 0x209)
    sub_595240(ecx_3, arg1)
    *arg1 = 0

int32_t edx_6 = *arg1
long double x87_r7_12 = float.t(arg1[edx_6 + 1])

if (arg1[edx_6 + 1] s< 0)
    x87_r7_12 = x87_r7_12 + fconvert.t(4294967296.0)

long double x87_r6_7 = fconvert.t(fconvert.s(x87_r7_11))
long double x87_r6_10 = fconvert.t(fconvert.s(x87_r6_7 + (fconvert.t(arg2) - x87_r6_7)
    * fconvert.t(fconvert.s(x87_r7_12 / fconvert.t(4294967295.0)))))
*ebx = fconvert.s(fconvert.t(*ebx) * x87_r6_10)
ebx[1] = fconvert.s(fconvert.t(ebx[1]) * x87_r6_10)
ebx[2] = fconvert.s(x87_r6_10 * fconvert.t(ebx[2]))
