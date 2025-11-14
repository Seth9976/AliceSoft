// 函数: sub_411c50
// 地址: 0x411c50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result_2 = divs.dp.d(sx.q(arg2), arg7)
int32_t* ebp = arg6
int32_t* edi = arg3
int32_t result_3 = divs.dp.d(sx.q(arg1), arg8)
int32_t j_3 = divs.dp.d(sx.q(arg2), result_2)
int32_t temp0 = divs.dp.d(sx.q(arg1), result_3)
int32_t* esi_1 = (*(*edi + 8))(arg4, arg5)
int32_t eax_16
int32_t edx_6
edx_6:eax_16 = sx.q((*(*edi + 0x1c))())
int32_t eax_23
int32_t edx_9
edx_9:eax_23 = sx.q((*(*edi + 0x1c))() * result_3)
int32_t eax_29
int32_t edx_12
edx_12:eax_29 = sx.q((*(*edi + 0x1c))() * result_3)
int32_t* ebx_1 = (*(*ebp + 8))(0, 0)
int32_t eax_34
int32_t edx_16
edx_16:eax_34 = sx.q((*(*ebp + 0x1c))())
int32_t j_2 = j_3
int32_t result = ((eax_34 + (edx_16 & 3)) s>> 2) - j_2

if (temp0 s> 0)
    result *= 4
    int32_t result_1 = result
    arg7 = temp0
    int32_t i
    
    do
        if (j_2 s> 0)
            int32_t j_1 = j_2
            int32_t j
            
            do
                result = result_3
                
                if (result s> 0)
                    int32_t edx_18 = result
                    int32_t k
                    
                    do
                        result = result_2
                        
                        if (result s> 0)
                            int32_t result_4
                            
                            do
                                *esi_1 = *ebx_1
                                esi_1 = &esi_1[1]
                                result_4 = result
                                result -= 1
                            while (result_4 != 1)
                        
                        esi_1 = &esi_1[((eax_16 + (edx_6 & 3)) s>> 2) - result_2]
                        k = edx_18
                        edx_18 -= 1
                    while (k != 1)
                
                esi_1 = &esi_1[result_2 - (((edx_9 & 3) + eax_23) s>> 2)]
                ebx_1 = &ebx_1[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            j_2 = j_3
        
        esi_1 = &esi_1[(((edx_12 & 3) + eax_29) s>> 2) - j_3 * result_2]
        ebx_1 += result_1
        i = arg7
        arg7 -= 1
    while (i != 1)

return result
