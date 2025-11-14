// 函数: sub_4ef550
// 地址: 0x4ef550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 += 1

if (*arg1 s>= 0x209)
    sub_595240(arg3, arg1)
    *arg1 = 0

int32_t eax = *arg1
int32_t ecx = arg1[eax + 1]
long double x87_r7 = float.t(arg1[eax + 1])

if (ecx s< 0)
    x87_r7 = x87_r7 + fconvert.t(4294967296.0)

long double x87_r6 = fconvert.t(4294967295.0)
*arg1 = eax + 1
long double x87_r5 = fconvert.t(0.5)

if (eax + 1 s>= 0x209)
    ecx = sub_595240(ecx, arg1)
    *arg1 = 0

int32_t eax_2 = *arg1
long double x87_r5_2 = float.t(arg1[eax_2 + 1])

if (arg1[eax_2 + 1] s< 0)
    x87_r5_2 = x87_r5_2 + fconvert.t(4294967296.0)

*arg1 = eax_2 + 1

if (eax_2 + 1 s>= 0x209)
    sub_595240(ecx, arg1)
    *arg1 = 0

int32_t eax_4 = *arg1
int32_t ecx_1 = arg1[eax_4 + 1]
float var_c = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r7 / x87_r6)) - x87_r5)))
float var_8 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r5_2 / x87_r6)) - x87_r5)))
long double x87_r5_8 = float.t(arg1[eax_4 + 1])

if (ecx_1 s< 0)
    x87_r5_8 = x87_r5_8 + fconvert.t(4294967296.0)

float var_4 = fconvert.s(fconvert.t(fconvert.s(x87_r5_8 / x87_r5_8)) - x87_r5)
sub_51e2a0(&var_c, arg3)
return arg3
