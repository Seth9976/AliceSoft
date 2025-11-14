// 函数: sub_53df00
// 地址: 0x53df00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_4 = *(arg1 + 0x28c)
int32_t edx = *ecx_4
*(arg1 + 0x28c) = &ecx_4[1]
int32_t* ecx_1 = *(arg1 + 0x12cc)
int32_t ecx_2

if (ecx_1[1] != 0)
    ecx_2 = *ecx_1
else
    ecx_2 = 0

**(arg1 + 0x2b0) = *(ecx_2 + (edx << 2))
*(arg1 + 0x2b0) += 4
