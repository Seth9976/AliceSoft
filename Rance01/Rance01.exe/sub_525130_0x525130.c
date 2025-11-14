// 函数: sub_525130
// 地址: 0x525130
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result

if (arg1 s>= 0)
    result = data_797d4c
    
    if (arg1 s< (*(result + 0x44) - *(result + 0x40)) s>> 2)
        result = *(*(result + 0x40) + (arg1 << 2))
        
        if (result != 0 && arg2 s>= 0)
            int32_t ecx = *(result + 0x10)
            
            if (arg2 s< (*(result + 0x14) - ecx) s>> 2)
                void* ecx_1 = *(ecx + (arg2 << 2))
                
                if (ecx_1 != 0)
                    if (arg3 s>= 0)
                        int32_t eax_3
                        int32_t edx_7
                        edx_7:eax_3 = muls.dp.d(0x2fa0be83, *(ecx_1 + 0xd4) - *(ecx_1 + 0xd0))
                        int32_t edx_8 = edx_7 s>> 5
                        
                        if (arg3 s< (edx_8 u>> 0x1f) + edx_8)
                            result.b = 1
                            *(arg3 * 0xac + *(ecx_1 + 0xd0) + 0x9c) = fconvert.s(fconvert.t(arg4))
                            return result
                    
                    result.b = 0
                    return result

result.b = 0
return result
