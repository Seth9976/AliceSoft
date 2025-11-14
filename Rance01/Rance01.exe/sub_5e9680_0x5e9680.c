// 函数: sub_5e9680
// 地址: 0x5e9680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg1

if (edi[1] != 0)
    arg1 = *edi
    
    if (arg1 != 0xffffffff)
        int32_t edx
        int32_t* esi_1 = sub_40c3c0(arg1, edx, *(data_797d2c + 0x30) + 0x274)
        
        if (esi_1 != 0)
            int32_t arg_4
            int32_t arg_8
            sub_5e88c0(edi, &arg_4, &arg_8)
            int32_t arg_c
            uint32_t arg_10
            sub_5e88c0(edi, &arg_c, &arg_10)
            
            if (sub_5e8940(&arg_c, edi, &arg_4, &arg_8, &arg_10).b != 0)
                uint32_t edi_1 = arg_8
                int32_t ebx = arg_c
                int32_t ebp = arg_4
                int32_t ecx_6 = ebx - ebp
                uint32_t eax_4 = arg_10 - edi_1
                int32_t arg_1c
                bool cond:0 = arg_1c s< 0xff
                arg_c = 0xff
                arg_4 = 0
                int32_t* edx_1 = &arg_1c
                
                if (not(cond:0))
                    edx_1 = &arg_c
                
                if (*edx_1 s<= 0)
                    edx_1 = &arg_4
                
                edx_1.b = *edx_1
                arg_c.b = edx_1.b
                int32_t arg_18
                bool cond:1 = arg_18 s< 0xff
                arg_4 = 0xff
                arg_8 = 0
                int32_t* edx_2 = &arg_18
                
                if (not(cond:1))
                    edx_2 = &arg_4
                
                if (*edx_2 s<= 0)
                    edx_2 = &arg_8
                
                edx_2.b = *edx_2
                arg_4.b = edx_2.b
                int32_t arg_14
                bool cond:2 = arg_14 s< 0xff
                arg_8 = 0xff
                arg_1c = 0
                int32_t* edx_3 = &arg_14
                
                if (not(cond:2))
                    edx_3 = &arg_8
                
                if (*edx_3 s<= 0)
                    edx_3 = &arg_1c
                
                edx_3.b = *edx_3
                arg_8.b = edx_3.b
                uint32_t eax_7
                
                if (eax_4 == 0)
                    if (ebp s> ebx)
                        int32_t eax_5 = ebp
                        ebp = ebx
                        ebx = eax_5
                    
                    eax_7 = (*(*esi_1 + 8))(ebp, edi_1)
                    
                    if (ebp s<= ebx)
                        void* eax_8 = eax_7 + 2
                        int32_t i_4 = ebx - ebp + 1
                        int32_t i
                        
                        do
                            char edx_5 = arg_4.b
                            *(eax_8 - 2) = arg_c.b
                            char ecx_9 = arg_8.b
                            *(eax_8 - 1) = edx_5
                            *eax_8 = ecx_9
                            eax_8 += 4
                            i = i_4
                            i_4 -= 1
                        while (i != 1)
                        eax_8.b = 1
                        return eax_8
                else if (ecx_6 != 0)
                    int32_t eax_13
                    int32_t edx_10
                    edx_10:eax_13 = sx.q(eax_4)
                    arg_1c = (eax_13 ^ edx_10) - edx_10
                    int32_t eax_17
                    int32_t edx_11
                    edx_11:eax_17 = sx.q(ecx_6)
                    
                    if ((eax_17 ^ edx_11) - edx_11 s<= arg_1c)
                        uint32_t ecx_18 = arg_10
                        
                        if (edi_1 s> ecx_18)
                            uint32_t eax_35 = edi_1
                            edi_1 = ecx_18
                            arg_10 = eax_35
                            ebp = ebx
                        
                        int32_t ebp_1 = ebp << 8
                        int32_t eax_41 = (*(*esi_1 + 8))(0, 0)
                        void* edx_18 = *esi_1
                        arg_1c = eax_41
                        int32_t eax_43 = (*(edx_18 + 0x1c))()
                        eax_7 = arg_10
                        
                        if (edi_1 s<= eax_7)
                            int32_t edx_20 = eax_43 * edi_1
                            int32_t i_5 = eax_7 - edi_1 + 1
                            int32_t i_1
                            
                            do
                                char* ecx_24 = edx_20 + (ebp_1 s>> 8 << 2) + arg_1c
                                ebp_1 += divs.dp.d(sx.q(ecx_6 << 8), eax_4)
                                *ecx_24 = arg_c.b
                                ecx_24[1] = arg_4.b
                                edx_20 += eax_43
                                i_1 = i_5
                                i_5 -= 1
                                ecx_24[2] = arg_8.b
                            while (i_1 != 1)
                    else
                        if (ebp s> ebx)
                            edi_1 = arg_10
                            int32_t eax_20 = ebp
                            ebp = ebx
                            ebx = eax_20
                        
                        uint32_t edi_2 = edi_1 << 8
                        arg_1c = divs.dp.d(sx.q(eax_4 << 8), ecx_6)
                        arg_10 = (*(*esi_1 + 8))(0, 0)
                        eax_7 = (*(*esi_1 + 0x1c))()
                        int32_t edx_15 = ebp
                        
                        if (ebp s<= ebx)
                            do
                                int32_t eax_29 = edi_2 s>> 8
                                edi_2 += arg_1c
                                char* ecx_17 = eax_29 * eax_7 + arg_10 + (edx_15 << 2)
                                *ecx_17 = arg_c.b
                                ecx_17[1] = arg_4.b
                                edx_15 += 1
                                ecx_17[2] = arg_8.b
                            while (edx_15 s<= ebx)
                            
                            return 1
                else
                    uint32_t ecx_10 = arg_10
                    
                    if (edi_1 s> ecx_10)
                        uint32_t eax_9 = edi_1
                        edi_1 = ecx_10
                        arg_10 = eax_9
                    
                    void* ebx_2 = (*(*esi_1 + 8))(ebp, edi_1)
                    eax_7 = (*(*esi_1 + 0x1c))()
                    uint32_t ecx_13 = arg_10
                    uint32_t esi_2 = eax_7
                    
                    if (edi_1 s<= ecx_13)
                        int32_t i_3 = ecx_13 - edi_1 + 1
                        int32_t i_2
                        
                        do
                            eax_7.b = arg_4.b
                            *ebx_2 = arg_c.b
                            char edx_9 = arg_8.b
                            *(ebx_2 + 1) = eax_7.b
                            *(ebx_2 + 2) = edx_9
                            ebx_2 += esi_2
                            i_2 = i_3
                            i_3 -= 1
                        while (i_2 != 1)
                        eax_7.b = 1
                        return eax_7
                
                eax_7.b = 1
                return eax_7

arg1.b = 0
return arg1
