// 函数: sub_6b2ba0
// 地址: 0x6b2ba0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_10 = 0x7fffffff
int32_t var_c = 0x7fffffff
int32_t var_8 = 0x7fffffff
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 8) - *(arg1 + 4))
int32_t edx_1 = edx s>> 1
int32_t ecx_4 = (edx_1 u>> 0x1f) + edx_1
int32_t result_1 = 0
int32_t result = 0xffffffff

if (ecx_4 s<= 0)
    return 0xffffffff

int32_t* edx_2 = nullptr
int32_t* var_14 = *(arg1 + 4) + 8

do
    int32_t eax_4 = *(edx_2 + *(arg1 + 4))
    
    if (eax_4 s>= arg2 && var_14[-1] s>= arg3)
        int32_t ebx_4 = *var_14
        
        if (ebx_4 s>= arg4 && eax_4 s<= var_10 && var_14[-1] s<= var_c && ebx_4 s<= var_8)
            int32_t* eax_7 = *(arg1 + 4)
            var_10 = *(eax_7 + edx_2)
            result = result_1
            var_c = *(eax_7 + edx_2 + 4)
            var_8 = *(eax_7 + edx_2 + 8)
    
    var_14 = &var_14[3]
    result_1 += 1
    edx_2 = &edx_2[3]
while (result_1 s< ecx_4)

return result
