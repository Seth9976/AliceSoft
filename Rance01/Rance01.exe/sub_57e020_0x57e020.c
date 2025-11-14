// 函数: sub_57e020
// 地址: 0x57e020
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg3
char* esi = (*(*arg1 + 8))(0, 0)
(*(*ebx + 8))(0, 0)
(*(*arg4 + 8))(0, 0)
int32_t eax_5 = (*(*arg1 + 0x1c))()
int32_t eax_7 = *(arg2 + 4)
int32_t edx_4 = *(eax_7 + ((0xff - arg8) << 2))
int32_t eax_8 = *(eax_7 + (arg8 << 2))
int32_t eax_10
int32_t edx_5
edx_5:eax_10 = sx.q(arg5)
int32_t j_4 = mods.dp.d(sx.q((eax_10 - edx_5) s>> 1), arg7)
int32_t eax_15
int32_t edx_8
edx_8:eax_15 = sx.q(arg6)
int32_t i_5 = mods.dp.d(sx.q((eax_15 - edx_8) s>> 1), arg7)
int32_t ebp_2 = neg.d(j_4)
int32_t ebp_5 = (sbb.d(ebp_2, ebp_2, j_4 != 0) & 2) + divs.dp.d(sx.q(arg5), arg7)
int32_t edi_3 = neg.d(i_5)
int32_t var_10 = ebp_5
int32_t edi_6 = (sbb.d(edi_3, edi_3, i_5 != 0) & 2) + divs.dp.d(sx.q(arg6), arg7)
int32_t result = 0
int32_t var_8 = edi_6
arg8 = 0
int32_t result_1 = 0

if (edi_6 s> 0)
    while (true)
        char* ebx_1 = (*(*ebx + 8))(0, arg8)
        char* var_30_1 = ebx_1
        arg2 = (*(*arg4 + 8))(0, arg8)
        int32_t j_3 = arg7
        int32_t i_3 = j_3
        int32_t i_4
        
        if (result_1 == 0)
            i_4 = i_5
        
        if (result_1 == 0 && i_4 != 0)
            i_3 = i_4
        else if (arg8 + j_3 s> arg6)
            i_4 = arg6 - arg8
            i_3 = i_4
        
        int32_t edx_20 = arg8 + i_3
        arg8 = edx_20
        
        if (edx_20 s>= arg6)
            arg8 = arg6 - 1
        
        int32_t edx_21 = 0
        int32_t ecx_11 = 0
        int32_t var_14_1 = 0
        
        if (ebp_5 s> 0)
            while (true)
                int32_t j_2 = j_3
                
                if (edx_21 == 0 && j_4 != 0)
                    j_2 = j_4
                    j_3 = j_4
                else if (ecx_11 + j_3 s> arg5)
                    j_3 = arg5 - ecx_11
                    j_2 = j_3
                
                ecx_11 += j_3
                int32_t ebp_6 = j_3 << 2
                
                if (j_3 s<= 0 || i_3 s<= 0)
                    esi = &esi[ebp_6]
                    ebx_1 = &ebx_1[ebp_6]
                    var_30_1 = ebx_1
                else
                    uint32_t ecx_12
                    ecx_12.b = *(zx.d(*arg2) + eax_8)
                    ecx_12.b += *(zx.d(*ebx_1) + edx_4)
                    int32_t edx_24
                    edx_24.b = *(zx.d(arg2[1]) + eax_8)
                    edx_24.b += *(zx.d(ebx_1[1]) + edx_4)
                    int32_t ebx_2
                    ebx_2.b = *(zx.d(arg2[2]) + eax_8)
                    ebx_2.b += *(zx.d(ebx_1[2]) + edx_4)
                    int32_t i_2 = i_3
                    
                    if (i_2 s> 0)
                        int32_t i_1 = i_2
                        int32_t i
                        
                        do
                            int32_t j_1 = j_2
                            
                            if (j_1 s> 0)
                                int32_t j
                                
                                do
                                    *esi = ecx_12.b
                                    esi[1] = edx_24.b
                                    esi[2] = ebx_2.b
                                    esi = &esi[4]
                                    j = j_1
                                    j_1 -= 1
                                while (j != 1)
                            
                            esi = &esi[eax_5 - ebp_6]
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                        i_2 = i_3
                    
                    edi_6 = var_8
                    esi = &esi[ebp_6 - i_2 * eax_5]
                    var_30_1 = &var_30_1[ebp_6]
                    ebx_1 = var_30_1
                
                arg2 = &arg2[ebp_6]
                edx_21 = var_14_1 + 1
                var_14_1 = edx_21
                
                if (edx_21 s>= var_10)
                    break
                
                j_3 = arg7
            
            ebp_5 = var_10
        
        esi = &esi[i_3 * eax_5 - (ecx_11 << 2)]
        result = result_1 + 1
        result_1 = result
        
        if (result s>= edi_6)
            break
        
        ebx = arg3

return result
