// 函数: sub_55e070
// 地址: 0x55e070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *(*(arg1 + 4) + 4)
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x78787879, *(ecx + 0xec) - *(ecx + 0xe8))
int32_t edx_3 = edx_2 s>> 5

if (arg2 u< (edx_3 u>> 0x1f) + edx_3)
    void* eax_3 = *(ecx + 0xe8) + arg2 * 0x44
    
    if (eax_3 != 0)
        void** result = eax_3 + 0x10
        
        if (result[5] u< 0x10)
            return result
        
        return *result

return 0
