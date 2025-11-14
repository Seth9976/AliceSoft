// 函数: sub_4ad990
// 地址: 0x4ad990
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x38e38e39, *(arg1 + 8) - *(arg1 + 4))
int32_t edx_1 = edx s>> 4
int32_t result = (edx_1 u>> 0x1f) + edx_1
int32_t ebp = 0

if (result s> 0)
    var_4 = 0x1c
    
    do
        int32_t ebx_1 = var_4
        
        for (int32_t i = 0; i s< 3; )
            int32_t ecx_4
            ecx_4.b = sub_4ada10(arg1, i, ebp) != 0
            i += 1
            ebx_1 += 4
            *(ebx_1 + *(arg1 + 4) - 4) = ecx_4
        
        var_4 += 0x48
        int32_t eax_5
        int32_t edx_3
        edx_3:eax_5 = muls.dp.d(0x38e38e39, *(arg1 + 8) - *(arg1 + 4))
        int32_t edx_4 = edx_3 s>> 4
        ebp += 1
        result = (edx_4 u>> 0x1f) + edx_4
    while (ebp s< result)

return result
