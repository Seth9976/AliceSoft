// 函数: sub_544f00
// 地址: 0x544f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_5 = *(arg1 + 0x28c)
int32_t edx = *ecx_5
*(arg1 + 0x28c) = &ecx_5[1]
int32_t esi = ecx_5[1]
*(arg1 + 0x28c) = &ecx_5[2]
int32_t edi = ecx_5[2]
*(arg1 + 0x28c) = &ecx_5[3]
int32_t* ecx_3 = *(arg1 + 0x12c4)
int32_t ecx_4

if (ecx_3[1] != 0)
    ecx_4 = *ecx_3
else
    ecx_4 = 0

int32_t edx_1 = *(ecx_4 + (edx << 2))

if (edx_1 s>= esi && edx_1 s< edi)
    **(arg1 + 0x2b0) = 0
    *(arg1 + 0x2b0) += 4
    return 

**(arg1 + 0x2b0) = 1
*(arg1 + 0x2b0) += 4
