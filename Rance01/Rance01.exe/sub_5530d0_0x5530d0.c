// 函数: sub_5530d0
// 地址: 0x5530d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = arg5
int32_t* ebx = arg4
int32_t ebp = ebx[0xd]

while (true)
    if (ecx s< 0)
        *arg2 += ecx
        arg3 -= ecx
        ecx = 0
        
        if (arg3 s>= 0)
            continue
    else if (arg3 s>= 0)
        int32_t edi = *arg2
        
        if (edi s> 0)
            int32_t* arg_c
            uint32_t esi_3 = arg_c[1] u>> 2
            
            if (edi + ecx s> esi_3)
                *arg2 = esi_3 - ecx
            
            uint32_t esi_6 = ebx[1] u>> 2
            
            if (*arg2 + arg3 s> esi_6)
                *arg2 = esi_6 - arg3
            
            int32_t ebx_1 = *arg2
            
            if (ebx_1 s> 0)
                int32_t var_8
                float arg_4
                
                if (arg4 != arg_c || arg3 s<= ecx || arg3 s>= ebx_1 + ecx)
                    if (ebp - 0xe u> 0x26)
                    label_553505:
                        arg3.b = 0
                        return arg3
                    
                    int32_t var_4
                    
                    switch (ebp + &jump_table_55354c[1]:2)
                        case &lookup_table_553560, &lookup_table_553560[8], 
                                &lookup_table_553560[0x10], &lookup_table_553560[0x12], 
                                &lookup_table_553560[0x24], &lookup_table_553560[0x26]
                            int32_t ebp_6 = 0
                            
                            if (ebx_1 s> 0)
                                int32_t edi_8 = ecx << 2
                                float ecx_15 = ecx - arg3
                                arg_4 = ecx_15
                                
                                while (true)
                                    int32_t edx_17 = arg_c[1]
                                    
                                    if (ecx_15 i+ arg3 u>= edx_17 u>> 2)
                                        goto label_553505
                                    
                                    if (edx_17 != 0)
                                        edx_17 = *arg_c
                                    
                                    int32_t edx_19 = arg4[1]
                                    
                                    if (arg3 u>= edx_19 u>> 2)
                                        goto label_553505
                                    
                                    if (edx_19 != 0)
                                        edx_19 = *arg4
                                    
                                    *(edx_19 + (arg3 << 2)) = *(edi_8 + edx_17)
                                    ebp_6 += 1
                                    edi_8 += 4
                                    arg3 += 1
                                    
                                    if (ebp_6 s>= ebx_1)
                                        break
                                    
                                    ecx_15 = arg_4
                            
                            arg3.b = 1
                            return arg3
                        case &lookup_table_553560[1], &lookup_table_553560[9]
                            int32_t edi_9 = 0
                            
                            if (ebx_1 s<= 0)
                                arg3.b = 1
                                return arg3
                            
                            uint32_t esi_15 = arg3
                            int32_t ebp_8 = ecx - arg3
                            
                            while (true)
                                int32_t ecx_21
                                arg3, ecx_21 = sub_54f9d0(esi_15 + ebp_8, arg_c, &arg_4)
                                
                                if (arg3.b == 0)
                                    break
                                
                                int32_t var_1c_13 = ecx_21
                                
                                if (sub_54f950(arg4, esi_15, fconvert.s(fconvert.t(arg_4))).b == 0)
                                    break
                                
                                edi_9 += 1
                                esi_15 += 1
                                
                                if (edi_9 s>= ebx_1)
                                    arg3.b = 1
                                    return arg3
                            
                            goto label_553505
                        case &lookup_table_553560[2], &lookup_table_553560[0xa]
                            int32_t ebp_9 = 0
                            
                            if (ebx_1 s<= 0)
                                arg3.b = 1
                                return arg3
                            
                            int32_t eax_4 = arg3 - ecx
                            int32_t edi_10 = ecx
                            arg5 = eax_4
                            
                            while (sub_54f990(arg4, edi_10 + eax_4, &var_8).b != 0)
                                if (sub_54f990(arg_c, edi_10, &var_4).b == 0)
                                    break
                                
                                int32_t* eax_6
                                int32_t edx_25
                                eax_6, edx_25 = sub_5529f0(arg_4, edi_10, var_8)
                                arg3 = sub_5529f0(arg_4, edx_25, var_4)
                                
                                if (eax_6 == 0)
                                    break
                                
                                if (arg3 == 0)
                                    break
                                
                                if (sub_5506c0(eax_6, arg3).b == 0)
                                    break
                                
                                ebp_9 += 1
                                edi_10 += 1
                                
                                if (ebp_9 s>= ebx_1)
                                    arg3.b = 1
                                    return arg3
                                
                                eax_4 = arg5
                            
                            goto label_553505
                        case &lookup_table_553560[3], &lookup_table_553560[0xb]
                            int32_t edi_11 = 0
                            
                            if (ebx_1 s> 0)
                                int32_t esi_17 = ecx
                                
                                do
                                    if (sub_54f990(arg4, esi_17 + arg3 - ecx, &var_4).b == 0)
                                        goto label_553505
                                    
                                    if (sub_54f990(arg_c, esi_17, &arg5).b == 0)
                                        goto label_553505
                                    
                                    if (sub_553d70(arg_4, var_4, arg5).b == 0)
                                        goto label_553505
                                    
                                    edi_11 += 1
                                    esi_17 += 1
                                while (edi_11 s< ebx_1)
                            
                            arg3.b = 1
                            return arg3
                        case &lookup_table_553560[4], &lookup_table_553560[5], 
                                &lookup_table_553560[6], &lookup_table_553560[7], 
                                &lookup_table_553560[0xc], &lookup_table_553560[0xd], 
                                &lookup_table_553560[0xe], &lookup_table_553560[0xf], 
                                &lookup_table_553560[0x11], &lookup_table_553560[0x13], 
                                &lookup_table_553560[0x14], &lookup_table_553560[0x15], 
                                &lookup_table_553560[0x16], &lookup_table_553560[0x17], 
                                &lookup_table_553560[0x18], &lookup_table_553560[0x19], 
                                &lookup_table_553560[0x1a], &lookup_table_553560[0x1b], 
                                &lookup_table_553560[0x1c], &lookup_table_553560[0x1d], 
                                &lookup_table_553560[0x1e], &lookup_table_553560[0x1f], 
                                &lookup_table_553560[0x20], &lookup_table_553560[0x21], 
                                &lookup_table_553560[0x22], &lookup_table_553560[0x23], 
                                &lookup_table_553560[0x25]
                            goto label_553505
                else
                    if (ebp - 0xe u> 0x26)
                        goto label_553505
                    
                    switch (ebp + &jump_table_553510[1]:2)
                        case &lookup_table_553524, &lookup_table_553524[8], 
                                &lookup_table_553524[0x10], &lookup_table_553524[0x12], 
                                &lookup_table_553524[0x24], &lookup_table_553524[0x26]
                            int32_t edi_4 = ebx_1 - 1
                            
                            if (edi_4 s< 0)
                                arg3.b = 1
                                return arg3
                            
                            int32_t* ebp_1 = arg_c
                            int32_t esi_8 = edi_4 + arg3
                            
                            while (sub_54f990(ebp_1, esi_8 + ecx - arg3, &arg_c).b != 0)
                                if (sub_54f950(arg4, esi_8, arg_c).b == 0)
                                    break
                                
                                esi_8 -= 1
                                int32_t temp2_1 = edi_4
                                edi_4 -= 1
                                
                                if (temp2_1 - 1 s< 0)
                                    arg3.b = 1
                                    return arg3
                            
                            goto label_553505
                        case &lookup_table_553524[1], &lookup_table_553524[9]
                            int32_t edi_5 = ebx_1 - 1
                            
                            if (edi_5 s< 0)
                                arg3.b = 1
                                return arg3
                            
                            int32_t* ebp_2 = arg_c
                            int32_t esi_9 = edi_5 + arg3
                            int32_t ebx_5 = ecx - arg3
                            
                            while (true)
                                int32_t ecx_5
                                arg3, ecx_5 = sub_54f9d0(esi_9 + ebx_5, ebp_2, &arg_c)
                                
                                if (arg3.b == 0)
                                    break
                                
                                int32_t var_1c_4 = ecx_5
                                
                                if (sub_54f950(arg4, esi_9, fconvert.s(fconvert.t(arg_c))).b == 0)
                                    break
                                
                                esi_9 -= 1
                                int32_t temp3_1 = edi_5
                                edi_5 -= 1
                                
                                if (temp3_1 - 1 s< 0)
                                    arg3.b = 1
                                    return arg3
                            
                            goto label_553505
                        case &lookup_table_553524[2], &lookup_table_553524[0xa]
                            int32_t ebx_6 = ebx_1 - 1
                            
                            if (ebx_1 - 1 s< 0)
                                arg3.b = 1
                                return arg3
                            
                            int32_t edi_6 = ebx_6 + ecx
                            int32_t ebp_4 = arg3 - ecx
                            
                            while (sub_54f990(arg4, edi_6 + ebp_4, &arg5).b != 0)
                                if (sub_54f990(arg_c, edi_6, &var_8).b == 0)
                                    break
                                
                                int32_t* eax_1
                                int32_t edx_10
                                eax_1, edx_10 = sub_5529f0(arg_4, edi_6, arg5)
                                arg3 = sub_5529f0(arg_4, edx_10, var_8)
                                
                                if (eax_1 == 0)
                                    break
                                
                                if (arg3 == 0)
                                    break
                                
                                if (sub_5506c0(eax_1, arg3).b == 0)
                                    break
                                
                                edi_6 -= 1
                                int32_t temp5_1 = ebx_6
                                ebx_6 -= 1
                                
                                if (temp5_1 - 1 s< 0)
                                    arg3.b = 1
                                    return arg3
                            
                            goto label_553505
                        case &lookup_table_553524[3], &lookup_table_553524[0xb]
                            int32_t edi_7 = ebx_1 - 1
                            
                            if (edi_7 s< 0)
                                arg3.b = 1
                                return arg3
                            
                            int32_t* ebp_5 = arg4
                            int32_t esi_11 = edi_7 + ecx
                            
                            while (sub_54f990(ebp_5, esi_11 + arg3 - ecx, &arg5).b != 0)
                                if (sub_54f990(arg_c, esi_11, &arg4).b == 0)
                                    break
                                
                                if (sub_553d70(arg_4, arg5, arg4).b == 0)
                                    break
                                
                                esi_11 -= 1
                                int32_t temp4_1 = edi_7
                                edi_7 -= 1
                                
                                if (temp4_1 - 1 s< 0)
                                    arg3.b = 1
                                    return arg3
                            
                            goto label_553505
                        case &lookup_table_553524[4], &lookup_table_553524[5], 
                                &lookup_table_553524[6], &lookup_table_553524[7], 
                                &lookup_table_553524[0xc], &lookup_table_553524[0xd], 
                                &lookup_table_553524[0xe], &lookup_table_553524[0xf], 
                                &lookup_table_553524[0x11], &lookup_table_553524[0x13], 
                                &lookup_table_553524[0x14], &lookup_table_553524[0x15], 
                                &lookup_table_553524[0x16], &lookup_table_553524[0x17], 
                                &lookup_table_553524[0x18], &lookup_table_553524[0x19], 
                                &lookup_table_553524[0x1a], &lookup_table_553524[0x1b], 
                                &lookup_table_553524[0x1c], &lookup_table_553524[0x1d], 
                                &lookup_table_553524[0x1e], &lookup_table_553524[0x1f], 
                                &lookup_table_553524[0x20], &lookup_table_553524[0x21], 
                                &lookup_table_553524[0x22], &lookup_table_553524[0x23], 
                                &lookup_table_553524[0x25]
                            goto label_553505
        
        *arg2 = 0
        arg3.b = 1
        return arg3
    
    *arg2 += arg3
    ecx -= arg3
    arg3 = 0
