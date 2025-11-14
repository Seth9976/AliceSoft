// 函数: sub_4f2110
// 地址: 0x4f2110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** ecx
void** var_4 = ecx
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x4ec4ec4f, *(arg1 + 8) - *(arg1 + 4))
int32_t edx_1 = edx s>> 5
int32_t result = (edx_1 u>> 0x1f) + edx_1
int32_t ebp = 0

if (result s> 0)
    var_4 = 0x20
    
    do
        void** ebx_1 = var_4
        
        for (int32_t i = 0; i s< 3; )
            *(ebx_1 + *(arg1 + 4)) = sub_4f2220(arg1, i, ebp)
            i += 1
            ebx_1 = &ebx_1[1]
        
        var_4 = &var_4[0x1a]
        int32_t eax_5
        int32_t edx_2
        edx_2:eax_5 = muls.dp.d(0x4ec4ec4f, *(arg1 + 8) - *(arg1 + 4))
        int32_t edx_3 = edx_2 s>> 5
        ebp += 1
        result = (edx_3 u>> 0x1f) + edx_3
    while (ebp s< result)

return result
