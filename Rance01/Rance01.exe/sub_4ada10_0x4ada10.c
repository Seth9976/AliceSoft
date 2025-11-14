// 函数: sub_4ada10
// 地址: 0x4ada10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = *(arg1 + 4)
void* ecx_2 = edi + arg3 * 0x48
int32_t edx = *(ecx_2 + (arg2 << 2) + 0x10)
int32_t ebp = 0
int32_t var_c = 0
int32_t eax_2 = *(ecx_2 + (mods.dp.d(sx.q(arg2 + 1), 3) << 2) + 0x10)
int32_t i
int32_t edx_3
edx_3:i = muls.dp.d(0x38e38e39, *(arg1 + 8) - edi)
int32_t edx_4 = edx_3 s>> 4
int32_t ebx_2 = (edx_4 u>> 0x1f) + edx_4

if (ebx_2 s> 0)
    void* var_14_1 = edi
    int32_t* edi_1 = edi + 0x10
    int32_t* var_8_1 = edi_1
    
    do
        if (ebp != arg3)
            for (i = 0; i s< 3; )
                int32_t esi_1 = *edi_1
                int32_t edx_7 = *(var_14_1 + (mods.dp.d(sx.q(i + 1), 3) << 2) + 0x10)
                int32_t eax_6
                
                if (edx == esi_1 && eax_2 == edx_7)
                    eax_6.b = 1
                    return eax_6
                
                if (edx == edx_7 && eax_2 == esi_1)
                    eax_6.b = 1
                    return eax_6
                
                i += 1
                edi_1 = &edi_1[1]
            
            ebp = var_c
        
        var_14_1 += 0x48
        ebp += 1
        edi_1 = &var_8_1[0x12]
        var_c = ebp
        var_8_1 = edi_1
    while (ebp s< ebx_2)

i.b = 0
return i
