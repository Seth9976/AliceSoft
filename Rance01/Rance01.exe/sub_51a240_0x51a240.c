// 函数: sub_51a240
// 地址: 0x51a240
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r6 = fconvert.t(arg4)
void* var_30 = arg1
float var_20 = fconvert.s((fconvert.t(*(arg1 + 0x14)) - fconvert.t(*(arg2 + 0x14))) * x87_r6
    + fconvert.t(*(arg2 + 0x14)))
float var_1c = fconvert.s((fconvert.t(*(arg1 + 0x18)) - fconvert.t(*(arg2 + 0x18))) * x87_r6
    + fconvert.t(*(arg2 + 0x18)))
float var_18 = fconvert.s((fconvert.t(*(arg1 + 0x1c)) - fconvert.t(*(arg2 + 0x1c))) * x87_r6
    + fconvert.t(*(arg2 + 0x1c)))
float var_14[0x5]
float* eax = sub_52a520(arg1 + 4, arg2 + 4, &var_14, fconvert.s(x87_r6))
int32_t edx = eax[1]
arg3[1] = *eax
int32_t ecx_2 = eax[2]
arg3[2] = edx
int32_t edx_1 = eax[3]
arg3[3] = ecx_2
arg3[5] = var_20
arg3[4] = edx_1
arg3[6] = var_1c
*arg3 = &sealengine::CSQT::`vftable'
arg3[7] = var_18
return arg3
