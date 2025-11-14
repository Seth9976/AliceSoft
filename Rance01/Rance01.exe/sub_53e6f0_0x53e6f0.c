// 函数: sub_53e6f0
// 地址: 0x53e6f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t ecx_1 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t edx_1 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t esi_1 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t* edi = *(arg1 + 0x2b0)

if (*edi == edx_1 && esi_1 == ecx_1)
    *edi = 1
    *(arg1 + 0x2b0) += 4
    arg1.b = 1
    return arg1

*edi = 0
*(arg1 + 0x2b0) += 4
arg1.b = 1
return arg1
