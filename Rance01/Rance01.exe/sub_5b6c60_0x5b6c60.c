// 函数: sub_5b6c60
// 地址: 0x5b6c60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = 0
int32_t var_10 = 0

if (arg4[2] s> 0)
    int32_t temp0_1 = divs.dp.d(sx.q(arg3), arg6)
    int32_t temp0_2 = divs.dp.d(sx.q(arg8 + arg3), arg6)
    int32_t var_c_1 = temp0_1
    
    if (temp0_1 s< temp0_2)
        int32_t* edi_1 = arg4
        
        do
            int32_t i = edi_1[0xa]
            int32_t eax_7 = sub_5b4c20(arg7, edi_1[9])
            int32_t ebx_4
            int32_t esi_3
            int32_t edi_3
            
            if (eax_7 s< 0)
                edi_3 = edi_1[2]
                esi_3 = 0
            label_5b6cf1:
                int32_t* ebx_9 = arg7
                int32_t eax_9 = sub_5b4c20(ebx_9, i)
                
                if (eax_9 s< 0)
                    while (i s> 1)
                        i -= 1
                        eax_9 = sub_5b4c20(ebx_9, i)
                        
                        if (eax_9 s>= 0)
                            goto label_5b6d21
                    
                    if (eax_9 s< 0)
                        return 0xffffffff
                
            label_5b6d21:
                int32_t eax_10 = sub_5b6410(eax_9)
                int32_t i_1 = edi_3 - esi_3
                
                if (i_1 s> 1)
                    do
                        int32_t edx_8 = i_1 s>> 1
                        int32_t ecx_8 = edx_8 + esi_3
                        int32_t ecx_10 =
                            neg.d(sbb.d(ecx_8, ecx_8, eax_10 u< *(arg4[5] + (ecx_8 << 2))))
                        edi_3 -= neg.d(ecx_10) & edx_8
                        esi_3 += (ecx_10 - 1) & edx_8
                        i_1 = edi_3 - esi_3
                    while (i_1 s> 1)
                    
                    ebx_9 = arg7
                
                int32_t eax_12 = sx.d(*(arg4[7] + esi_3))
                
                if (eax_12 s> i)
                    sub_5b4cd0(i, arg4, ebx_9)
                    return 0xffffffff
                
                sub_5b4cd0(eax_12, arg4, ebx_9)
                edi_1 = arg4
                ebx_4 = esi_3
                esi = var_10
            else
                int32_t ebx_2 = *(edi_1[8] + (eax_7 << 2))
                
                if (ebx_2 s< 0)
                    esi_3 = ebx_2 s>> 0xf & 0x7fff
                    edi_3 = edi_1[2] - (ebx_2 & 0x7fff)
                    goto label_5b6cf1
                
                int32_t edx_4 = edi_1[7]
                sub_5b4cd0(sx.d(*(edx_4 + ebx_2 - 1)), edx_4, arg7)
                ebx_4 = ebx_2 - 1
            
            if (ebx_4 == 0xffffffff)
                return 0xffffffff
            
            int32_t eax_13 = *edi_1
            int32_t edx_12 = edi_1[4] + ((eax_13 * ebx_4) << 2)
            int32_t i_2 = 0
            
            if (eax_13 s> 0)
                do
                    int32_t eax_15 = *(arg5 + (esi << 2))
                    esi += 1
                    var_10 = esi
                    *(eax_15 + (var_c_1 << 2)) = fconvert.s(fconvert.t(*(edx_12 + (i_2 << 2)))
                        + fconvert.t(*(eax_15 + (var_c_1 << 2))))
                    
                    if (esi == arg6)
                        var_c_1 += 1
                        var_10 = 0
                        esi = 0
                    
                    i_2 += 1
                while (i_2 s< *edi_1)
        while (var_c_1 s< temp0_2)

return 0
