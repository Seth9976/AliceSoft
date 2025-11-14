// 函数: sub_55cfe0
// 地址: 0x55cfe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_8 = *(arg1 + 4)

if (*(eax_8 + 0x34) != 0x11)
    return 0

void* ecx_1 = *(*(eax_8 + 0x14) + 4)
int32_t esi = *(eax_8 + 0x38)
int32_t eax_1
int32_t edx_2
edx_2:eax_1 = muls.dp.d(0x78787879, *(ecx_1 + 0xec) - *(ecx_1 + 0xe8))
int32_t edx_3 = edx_2 s>> 5

if (esi u< (edx_3 u>> 0x1f) + edx_3)
    void* eax_6 = *(ecx_1 + 0xe8) + esi * 0x44
    
    if (eax_6 != 0)
        void** result = eax_6 + 0x10
        
        if (result[5] u< 0x10)
            return result
        
        return *result

return 0
