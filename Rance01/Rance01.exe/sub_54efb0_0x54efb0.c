// 函数: sub_54efb0
// 地址: 0x54efb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *(arg1 + 4)
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x78787879, *(ecx + 0xec) - *(ecx + 0xe8))
int32_t edx_3 = edx_2 s>> 5

if (arg4 u< (edx_3 u>> 0x1f) + edx_3)
    void* ecx_1 = *(ecx + 0xe8) + arg4 * 0x44
    
    if (ecx_1 != 0 && arg3 s>= 0)
        int32_t eax_5
        int32_t edx_9
        edx_9:eax_5 = muls.dp.d(0x2e8ba2e9, *(ecx_1 + 0x38) - *(ecx_1 + 0x34))
        int32_t edx_10 = edx_9 s>> 3
        
        if (arg3 s< (edx_10 u>> 0x1f) + edx_10)
            return *(arg3 * 0x2c + *(ecx_1 + 0x34) + 0x1c)

return 0xffffffff
