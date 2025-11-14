// 函数: sub_52c950
// 地址: 0x52c950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
uint32_t edx_1
eax, edx_1 = __allmul(*(arg1 + 0x30), *(arg1 + 0x34), 0x3e8, 0)
uint32_t edi = data_797dec
int32_t ebx = data_797de8
uint32_t eax_1
int32_t edx_2
eax_1, edx_2 = __alldiv(eax, edx_1, ebx, edi)
int32_t eax_3
uint32_t edx_3
eax_3, edx_3 = __allmul(*(arg2 + 0x30), *(arg2 + 0x34), 0x3e8, 0)
uint32_t eax_4
int32_t edx_4
eax_4, edx_4 = __alldiv(eax_3, edx_3, ebx, edi)

if (edx_2 s>= edx_4 && (edx_2 s> edx_4 || eax_1 u> eax_4))
    return 1

return 0
