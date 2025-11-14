// 函数: sub_540f00
// 地址: 0x540f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_2 = ecx
*(arg1 + 0x2b0) -= 4
float* ecx_1 = *(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
float* ecx_2 = *(arg1 + 0x2b0)
*ecx_2 = fconvert.s(fconvert.t(*ecx_2) - fconvert.t(fconvert.s(fconvert.t(*ecx_1))))
*(arg1 + 0x2b0) += 4
arg1.b = 1
return arg1
