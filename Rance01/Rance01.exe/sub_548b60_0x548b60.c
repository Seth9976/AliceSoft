// 函数: sub_548b60
// 地址: 0x548b60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = *(arg1 + 0x28c) + 4
int32_t esi = *(eax - 4)
*(arg1 + 0x28c) = eax
int32_t eax_1
int32_t edx_2
edx_2:eax_1 = muls.dp.d(0x6bca1af3, *(arg1 + 0xbc) - *(arg1 + 0xb8))
int32_t edx_3 = edx_2 s>> 5

if (esi u< (edx_3 u>> 0x1f) + edx_3)
    int32_t esi_1 = esi * 0x4c
    void* esi_2 = esi_1 + *(arg1 + 0xb8)
    
    if (esi_1 != neg.d(*(arg1 + 0xb8)))
        int32_t* eax_4 = esi_2 + 4
        
        if (*(esi_2 + 0x18) u>= 0x10)
            eax_4 = *eax_4
        
        int32_t* var_8 = eax_4
        return sub_53d1c0(eax_4, edx_3, arg1, 0x750440)

int32_t result
result.b = 0
return result
