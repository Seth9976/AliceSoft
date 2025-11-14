// 函数: sub_544d30
// 地址: 0x544d30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *(arg1 + 0x28c) + 4
int32_t esi = ecx[-1]
*(arg1 + 0x28c) = ecx
int32_t edx = *ecx
*(arg1 + 0x28c) = &ecx[1]
int32_t* ecx_2 = *(arg1 + 0x12c4)
int32_t ecx_3

if (ecx_2[1] != 0)
    ecx_3 = *ecx_2
else
    ecx_3 = 0

int32_t* eax = *(arg1 + 0x12c8)
int32_t ecx_4 = *(ecx_3 + (edx << 2))

if (eax[1] == 0)
    int32_t edx_1
    edx_1.b = ecx_4 != 0
    *(esi << 2) = edx_1
    return 0

int32_t result = *eax
int32_t edx_2
edx_2.b = ecx_4 != 0
*(result + (esi << 2)) = edx_2
return result
