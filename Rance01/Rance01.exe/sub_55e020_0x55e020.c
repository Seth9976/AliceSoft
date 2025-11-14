// 函数: sub_55e020
// 地址: 0x55e020
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *(*(arg1 + 4) + 4)
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x6bca1af3, *(ecx + 0xbc) - *(ecx + 0xb8))
int32_t edx_3 = edx_2 s>> 5

if (arg2 u< (edx_3 u>> 0x1f) + edx_3)
    int32_t eax_2 = arg2 * 0x4c
    
    if (eax_2 != neg.d(*(ecx + 0xb8)))
        void** result = eax_2 + *(ecx + 0xb8) + 4
        
        if (result[5] u< 0x10)
            return result
        
        return *result

return 0
