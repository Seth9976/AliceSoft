// 函数: sub_4f50b0
// 地址: 0x4f50b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x78787879, *(arg1 + 0x2c) - *(arg1 + 0x28))
int32_t edx_1 = edx s>> 5
int32_t eax_3 = (edx_1 u>> 0x1f) + edx_1
int32_t result = 0

if (eax_3 s> 0)
    int32_t* ecx_2 = *(arg1 + 0x28) + 0x1c
    
    do
        if (*ecx_2 == arg2)
            return result
        
        result += 1
        ecx_2 = &ecx_2[0x11]
    while (result s< eax_3)

return 0xffffffff
