// 函数: sub_548a00
// 地址: 0x548a00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** var_4 = arg1
void* eax_1 = *(arg2 + 0x28c) + 4
int32_t edi = *(eax_1 - 4)
*(arg2 + 0x28c) = eax_1
*(arg2 + 0x2b0) -= 4
int32_t ebx = **(arg2 + 0x2b0)
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x66666667, *(arg2 + 0x13c) - *(arg2 + 0x138))
int32_t edx_1 = edx s>> 4
int32_t eax_6 = (edx_1 u>> 0x1f) + edx_1

if (edi u< eax_6)
    edx_1 = *(arg2 + 0x138)
    int32_t ecx_3 = edx_1 + edi * 0x28
    
    if (ecx_3 != 0)
        int32_t eax_10 = (*(arg2 + 0x1e8) - *(arg2 + 0x1e4)) s>> 2
        
        if (ebx u< eax_10)
            edx_1 = *(arg2 + 0x1e4)
            eax_10 = *(edx_1 + (ebx << 2))
            
            if (eax_10 != 0)
                int128_t* eax_12
                
                if (*(eax_10 + 4) != 0)
                    eax_12 = *eax_10
                else
                    eax_12 = nullptr
                
                if (sub_55bc30(eax_12, ecx_3, &var_4) != 0)
                    *(arg2 + 0x28c) = *(arg2 + 0x290) + var_4
                
                int32_t result
                int32_t edx_2
                result, edx_2 = sub_552880(arg2 + 0x1dc, ebx)
                
                if (result.b == 0)
                    return sub_53d1c0(result, edx_2, arg2, 0x7503d0)
                
                result.b = 1
                return result
        
        return sub_53d1c0(eax_10, edx_1, arg2, 0x750394)

return sub_53d1c0(eax_6, edx_1, arg2, 0x75035c)
