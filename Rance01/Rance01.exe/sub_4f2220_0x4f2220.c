// 函数: sub_4f2220
// 地址: 0x4f2220
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result_2 = *(arg1 + 4)
void* ecx_2 = arg3 * 0x68 + result_2
int32_t edx = *(ecx_2 + (arg2 << 2) + 0x14)
int32_t ebx = 0
int32_t var_10 = 0
int32_t eax_2 = *(ecx_2 + (mods.dp.d(sx.q(arg2 + 1), 3) << 2) + 0x14)
int32_t eax_3
int32_t edx_5
edx_5:eax_3 = muls.dp.d(0x4ec4ec4f, *(arg1 + 8) - result_2)
int32_t edx_6 = edx_5 s>> 5
int32_t ecx_5 = (edx_6 u>> 0x1f) + edx_6

if (ecx_5 s> 0)
    void* result = result_2
    int32_t* edi = result_2 + 0x14
    void* result_1 = result
    int32_t* var_8_1 = edi
    
    do
        if (ebx != arg3)
            int32_t i = 0
            int32_t* ebx_2 = edi
            
            do
                int32_t edi_1 = *ebx_2
                result = result_1
                int32_t edx_9 = *(result + (mods.dp.d(sx.q(i + 1), 3) << 2) + 0x14)
                
                if (edx == edi_1 && eax_2 == edx_9)
                    return result
                
                if (edx == edx_9 && eax_2 == edi_1)
                    return result
                
                i += 1
                ebx_2 = &ebx_2[1]
            while (i s< 3)
            
            ebx = var_10
        
        ebx += 1
        result += 0x68
        edi = &var_8_1[0x1a]
        var_10 = ebx
        result_1 = result
        var_8_1 = edi
    while (ebx s< ecx_5)

return 0
