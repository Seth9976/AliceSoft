// 函数: sub_543710
// 地址: 0x543710
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_7 = *(arg1 + 0x28c)
int32_t edx = *ecx_7
*(arg1 + 0x28c) = &ecx_7[1]
int32_t* ecx_1 = *(arg1 + 0x12c8)
int32_t ecx_2

if (ecx_1[1] != 0)
    ecx_2 = *ecx_1
else
    ecx_2 = 0

int32_t ecx_3 = *(ecx_2 + (edx << 2))
int32_t* ecx_4

if (ecx_3 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    ecx_4 = *(*(arg1 + 0x1e4) + (ecx_3 << 2))
else
    ecx_4 = nullptr

if (ecx_4[1] != 0)
    char* ecx_5 = *ecx_4
    
    if (ecx_5 != 0)
        int32_t edx_6
        edx_6.b = *ecx_5 == 0
        **(arg1 + 0x2b0) = edx_6
        *(arg1 + 0x2b0) += 4
        return 

**(arg1 + 0x2b0) = 0
*(arg1 + 0x2b0) += 4
