// 函数: sub_54eed0
// 地址: 0x54eed0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *(arg2 + 4)
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x6bca1af3, *(ecx + 0xbc) - *(ecx + 0xb8))
int32_t edx_3 = edx_2 s>> 5

if (arg3 u< (edx_3 u>> 0x1f) + edx_3)
    int32_t esi_1 = arg3 * 0x4c
    void* esi_2 = esi_1 + *(ecx + 0xb8)
    
    if (esi_1 != neg.d(*(ecx + 0xb8)) && arg1 s>= 0)
        int32_t eax_4
        int32_t edx_4
        edx_4:eax_4 = muls.dp.d(0x2e8ba2e9, *(esi_2 + 0x40) - *(esi_2 + 0x3c))
        int32_t edx_5 = edx_4 s>> 3
        
        if (arg1 s< (edx_5 u>> 0x1f) + edx_5)
            int32_t* result = arg1 * 0x2c + *(esi_2 + 0x3c)
            
            if (result[5] u< 0x10)
                return result
            
            return *result

return 0
