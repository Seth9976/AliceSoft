// 函数: sub_54ef50
// 地址: 0x54ef50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx_2 = *(arg1 + 4)
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x78787879, *(ecx_2 + 0xec) - *(ecx_2 + 0xe8))
int32_t edx_3 = edx_2 s>> 5

if (arg2 u< (edx_3 u>> 0x1f) + edx_3)
    void* eax_5 = *(ecx_2 + 0xe8) + arg2 * 0x44
    
    if (eax_5 != 0)
        int32_t eax_7
        int32_t edx_7
        edx_7:eax_7 = muls.dp.d(0x2e8ba2e9, *(eax_5 + 0x38) - *(eax_5 + 0x34))
        int32_t edx_8 = edx_7 s>> 3
        return (edx_8 u>> 0x1f) + edx_8

return 0
