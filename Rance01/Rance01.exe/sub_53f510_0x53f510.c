// 函数: sub_53f510
// 地址: 0x53f510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_6 = *(arg1 + 0x28c)
int32_t edx = *ecx_6
*(arg1 + 0x28c) = &ecx_6[1]
int32_t esi = ecx_6[1]
*(arg1 + 0x28c) = &ecx_6[2]
int32_t* ecx_2 = *(arg1 + 0x12c8)
int32_t ecx_3

if (ecx_2[1] != 0)
    ecx_3 = *ecx_2
else
    ecx_3 = 0

if (*(ecx_3 + (edx << 2)) == 0)
    *(arg1 + 0x28c) = *(arg1 + 0x290) + esi
