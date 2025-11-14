// 函数: sub_5e01a0
// 地址: 0x5e01a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *(arg1 + 4)
int32_t eax_1 = ebx & 0x80000001
bool cond:1 = eax_1 == 0

if (eax_1 s< 0)
    cond:1 = ((eax_1 - 1) | 0xfffffffe) == 0xffffffff

if (not(cond:1))
    ebx += 1

float var_48 = fconvert.s(fconvert.t(*(arg1 + 0x1c)))
int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0
st0, x87control_1 = sub_6b4ef0(mxcsr, x87control, fconvert.d(fconvert.t(var_48)))
var_48 = fconvert.s(st0)
float eax_5 = sub_70c710(fconvert.t(var_48))
var_48 = fconvert.s(fconvert.t(*(arg1 + 0x18)))
long double x87_r7_5 = fconvert.t(var_48)
float var_44 = eax_5
var_48 = fconvert.s(sub_6b4ef0(mxcsr, x87control_1, fconvert.d(x87_r7_5)))
int32_t eax_6 = sub_70c710(fconvert.t(var_48))
var_48 = eax_6
float* eax_7 = &var_44

if (eax_6 s>= eax_5)
    eax_7 = &var_48

return ebx + (*eax_7 << 1)
