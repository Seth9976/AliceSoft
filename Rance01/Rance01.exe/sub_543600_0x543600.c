// 函数: sub_543600
// 地址: 0x543600
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t* ecx = *(arg1 + 0x2b0)
int32_t ecx_1 = ecx[-1]
int32_t* ecx_2

if (ecx_1 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    ecx_2 = *(*(arg1 + 0x1e4) + (ecx_1 << 2))
else
    ecx_2 = nullptr

int32_t ecx_3

if (ecx_2[1] != 0)
    ecx_3 = *ecx_2
else
    ecx_3 = 0

int32_t ecx_4 = *(ecx_3 + (*ecx << 2))
int32_t* ecx_5

if (ecx_4 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    ecx_5 = *(*(arg1 + 0x1e4) + (ecx_4 << 2))
else
    ecx_5 = nullptr

if (ecx_5[1] != 0)
    char* eax_1 = *ecx_5
    
    if (eax_1 != 0)
        int32_t result
        result.b = *eax_1 == 0
        ecx[-1] = result
        return result

ecx[-1] = 0
return 0
