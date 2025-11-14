// 函数: sub_544e80
// 地址: 0x544e80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_6 = *(arg1 + 0x28c)
int32_t edx = *ecx_6
*(arg1 + 0x28c) = &ecx_6[1]
int32_t esi = ecx_6[1]
*(arg1 + 0x28c) = &ecx_6[2]
int32_t edi = ecx_6[2]
*(arg1 + 0x28c) = &ecx_6[3]
int32_t* ecx_3 = *(arg1 + 0x12c4)
int32_t ecx_4

if (ecx_3[1] != 0)
    ecx_4 = *ecx_3
else
    ecx_4 = 0

int32_t ecx_5 = *(ecx_4 + (edx << 2))
int32_t* eax

if (ecx_5 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    eax = *(*(arg1 + 0x1e4) + (ecx_5 << 2))
else
    eax = nullptr

if (eax[1] == 0)
    *(esi << 2) = edi
    return 0

int32_t result = *eax
*(result + (esi << 2)) = edi
return result
