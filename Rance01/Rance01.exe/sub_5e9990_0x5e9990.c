// 函数: sub_5e9990
// 地址: 0x5e9990
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t* edi = arg1

if (edi[1] != 0)
    arg1 = *edi
    
    if (arg1 != 0xffffffff)
        int32_t edx
        int32_t* esi_1 = sub_40c3c0(arg1, edx, *(data_797d2c + 0x30) + 0x274)
        
        if (esi_1 != 0)
            void* eax_1
            
            if ((*(*esi_1 + 0x28))().b == 0)
                eax_1.b = 1
                return eax_1
            
            int32_t arg_4
            int32_t arg_8
            sub_5e88c0(edi, &arg_4, &arg_8)
            int32_t arg_c
            int32_t arg_10
            sub_5e88c0(edi, &arg_c, &arg_10)
            
            if (sub_5e8940(&arg_c, edi, &arg_4, &arg_8, &arg_10).b != 0)
                int32_t edi_1 = arg_8
                int32_t ebx_1 = arg_10
                int32_t ebp_1 = arg_4
                int32_t ecx_8 = arg_c - ebp_1
                int32_t eax_6 = ebx_1 - edi_1
                int32_t arg_14
                bool cond:0_1 = arg_14 s< 0xff
                arg_4 = 0xff
                arg_10 = eax_6
                arg_8 = 0
                int32_t* edx_2 = &arg_14
                
                if (not(cond:0_1))
                    edx_2 = &arg_4
                
                if (*edx_2 s<= 0)
                    edx_2 = &arg_8
                
                edx_2.b = *edx_2
                arg_4.b = edx_2.b
                
                if (eax_6 == 0)
                    int32_t ecx_9 = arg_c
                    
                    if (ebp_1 s> ecx_9)
                        int32_t eax_7 = ebp_1
                        ebp_1 = ecx_9
                        arg_c = eax_7
                    
                    eax_1 = (*(*esi_1 + 8))(ebp_1, edi_1)
                    int32_t ecx_11 = arg_c
                    
                    if (ebp_1 s<= ecx_11)
                        char* eax_9 = eax_1 + 3
                        int32_t i_3 = ecx_11 - ebp_1 + 1
                        int32_t i
                        
                        do
                            *eax_9 = arg_4.b
                            eax_9 = &eax_9[4]
                            i = i_3
                            i_3 -= 1
                        while (i != 1)
                        eax_9.b = 1
                        return eax_9
                else if (ecx_8 != 0)
                    int32_t eax_14
                    int32_t edx_7
                    edx_7:eax_14 = sx.q(eax_6)
                    arg_8 = (eax_14 ^ edx_7) - edx_7
                    int32_t eax_18
                    int32_t edx_8
                    edx_8:eax_18 = sx.q(ecx_8)
                    
                    if ((eax_18 ^ edx_8) - edx_8 s<= arg_8)
                        if (edi_1 s> ebx_1)
                            ebp_1 = arg_c
                            int32_t eax_29 = edi_1
                            edi_1 = ebx_1
                            ebx_1 = eax_29
                        
                        int32_t ebp_3 = ebp_1 << 8
                        arg_10 = divs.dp.d(sx.q(ecx_8 << 8), arg_10)
                        arg_c = (*(*esi_1 + 8))(0, 0)
                        eax_1 = (*(*esi_1 + 0x1c))()
                        
                        if (edi_1 s<= ebx_1)
                            void* ecx_29 = eax_1 * edi_1
                            int32_t i_5 = ebx_1 - edi_1 + 1
                            int32_t i_1
                            
                            do
                                int32_t ebx_4
                                ebx_4.b = arg_4.b
                                int32_t edx_16 = ebp_3
                                ebp_3 += arg_10
                                void* edx_18 = ecx_29 + (edx_16 s>> 8 << 2)
                                ecx_29 += eax_1
                                i_1 = i_5
                                i_5 -= 1
                                *(edx_18 + arg_c + 3) = ebx_4.b
                            while (i_1 != 1)
                    else
                        int32_t ecx_18 = arg_c
                        
                        if (ebp_1 s> ecx_18)
                            int32_t eax_21 = ebp_1
                            ebp_1 = ecx_18
                            arg_c = eax_21
                            edi_1 = ebx_1
                        
                        int32_t eax_24
                        int32_t edx_9
                        edx_9:eax_24 = sx.q(arg_10 << 8)
                        int32_t edi_2 = edi_1 << 8
                        int32_t eax_27 = (*(*esi_1 + 8))(0, 0)
                        void* edx_11 = *esi_1
                        arg_10 = eax_27
                        eax_1 = (*(edx_11 + 0x1c))()
                        int32_t esi_2 = arg_c
                        
                        if (ebp_1 s<= esi_2)
                            do
                                ebp_1 += 1
                                *((edi_2 s>> 8) * eax_1 + arg_10 + (ebp_1 << 2) - 1) = arg_4.b
                                edi_2 += divs.dp.d(edx_9:eax_24, ecx_8)
                            while (ebp_1 s<= esi_2)
                            
                            eax_1.b = 1
                            return eax_1
                else
                    if (edi_1 s> ebx_1)
                        int32_t eax_10 = edi_1
                        edi_1 = ebx_1
                        ebx_1 = eax_10
                    
                    void* ebp_2 = (*(*esi_1 + 8))(ebp_1, edi_1)
                    eax_1 = (*(*esi_1 + 0x1c))()
                    
                    if (edi_1 s<= ebx_1)
                        int32_t i_4 = ebx_1 - edi_1 + 1
                        int32_t i_2
                        
                        do
                            *(ebp_2 + 3) = arg_4.b
                            ebp_2 += eax_1
                            i_2 = i_4
                            i_4 -= 1
                        while (i_2 != 1)
                        eax_1.b = 1
                        return eax_1
                
                eax_1.b = 1
                return eax_1

arg1.b = 0
return arg1
