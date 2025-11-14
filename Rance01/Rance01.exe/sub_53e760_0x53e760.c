// 函数: sub_53e760
// 地址: 0x53e760
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t edi = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t edx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t ebx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t ecx_4 = **(arg1 + 0x2b0)

if (ecx_4 == edx)
    if (ecx_4 == 0xffffffff)
        **(arg1 + 0x2b0) = 0
        *(arg1 + 0x2b0) += 4
        arg1.b = 1
        return arg1
    
    if (ebx == edi)
        **(arg1 + 0x2b0) = 0
        *(arg1 + 0x2b0) += 4
        arg1.b = 1
        return arg1

**(arg1 + 0x2b0) = 1
*(arg1 + 0x2b0) += 4
arg1.b = 1
return arg1
