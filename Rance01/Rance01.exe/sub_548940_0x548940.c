// 函数: sub_548940
// 地址: 0x548940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = *(arg1 + 0x28c) + 4
int32_t edi = *(eax - 4)
*(arg1 + 0x28c) = eax
*(arg1 + 0x2b0) -= 4
int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x66666667, *(arg1 + 0x13c) - *(arg1 + 0x138))
int32_t edx_1 = edx s>> 4
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (edi u< result)
    edx_1 = *(arg1 + 0x138)
    int32_t edi_1 = edx_1 + edi * 0x28
    
    if (edi_1 != 0)
        bool cond:0 = *(edi_1 + 0x24) != 2
        int32_t var_8 = **(arg1 + 0x2b0)
        
        if (not(cond:0))
            int32_t* var_4
            sub_42e070(edi_1, &var_4, &var_8)
            int32_t* eax_7 = var_4
            
            if (eax_7 == *(edi_1 + 4))
                result = *(edi_1 + 0x20)
                
                if (result != 0xffffffff)
                    *(arg1 + 0x28c) = *(arg1 + 0x290) + result
            else
                *(arg1 + 0x28c) = *(arg1 + 0x290) + eax_7[4]
        
        result.b = 1
        return result

return sub_53d1c0(result, edx_1, arg1, 0x750324)
