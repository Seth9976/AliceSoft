// 函数: sub_53f320
// 地址: 0x53f320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_7 = *(arg1 + 0x28c)
int32_t edx = *ecx_7
*(arg1 + 0x28c) = &ecx_7[1]
int32_t esi = ecx_7[1]
*(arg1 + 0x28c) = &ecx_7[2]
int32_t edi = ecx_7[2]
*(arg1 + 0x28c) = &ecx_7[3]
int32_t* ecx_3 = *(arg1 + 0x12c4)
int32_t ecx_4

if (ecx_3[1] != 0)
    ecx_4 = *ecx_3
else
    ecx_4 = 0

if (*(ecx_4 + (edx << 2)) != esi)
    *(arg1 + 0x28c) = *(arg1 + 0x290) + edi
