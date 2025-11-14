// 函数: sub_40e6d0
// 地址: 0x40e6d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = data_797d34
int32_t* eax = sub_40dc10(esi)

if (eax.b != 0)
    int32_t* esi_1
    
    if (*(esi + 0x10) != 0)
        esi_1 = (***(esi + 0x10))(arg1)
    else if (*(esi + 0xc) == 0)
        esi_1 = nullptr
    else
        esi_1 = (***(esi + 0xc))(arg1)
    
    int32_t arg_4
    int32_t* arg_8
    int32_t arg_c
    int32_t* arg_10
    eax = sub_40e030(&arg_4, &arg_c, esi_1, &arg_8, &arg_10)
    
    if (eax.b != 0)
        eax = (*(*esi_1 + 0x24))()
        
        if (eax.b != 0)
            if (arg2 s< 0)
                arg2 = 0
            else if (arg2 s> 0xff)
                arg2 = 0xff
            
            if (arg3 s< 0)
                arg3 = 0
            else if (arg3 s> 0xff)
                arg3 = 0xff
            
            if (arg4 s< 0)
                arg4 = 0
            else if (arg4 s> 0xff)
                arg4 = 0xff
            
            int32_t ebx_1 = arg_c
            int32_t* edx_4 = arg_10
            int32_t* edi_1 = arg_8
            int32_t ebp_1 = arg_4
            int32_t ecx_6 = ebx_1 - ebp_1
            int32_t eax_11 = edx_4 - edi_1
            arg_c = ecx_6
            arg_4 = eax_11
            
            if (edx_4 == edi_1)
                if (ebp_1 s> ebx_1)
                    int32_t eax_12 = ebp_1
                    ebp_1 = ebx_1
                    ebx_1 = eax_12
                
                eax = (*(*esi_1 + 8))(ebp_1, edi_1)
                
                if (ebp_1 s<= ebx_1)
                    void* eax_14 = eax + 2
                    int32_t i_4 = ebx_1 - ebp_1 + 1
                    int32_t i
                    
                    do
                        *(eax_14 - 2) = arg4.b
                        *(eax_14 - 1) = arg3.b
                        *eax_14 = arg2.b
                        eax_14 += 4
                        i = i_4
                        i_4 -= 1
                    while (i != 1)
                    return eax_14
            else if (ecx_6 != 0)
                int32_t eax_19
                int32_t edx_10
                edx_10:eax_19 = sx.q(eax_11)
                arg_8 = (eax_19 ^ edx_10) - edx_10
                int32_t eax_23
                int32_t edx_11
                edx_11:eax_23 = sx.q(ecx_6)
                
                if ((eax_23 ^ edx_11) - edx_11 s<= arg_8)
                    int32_t* ecx_16 = arg_10
                    
                    if (edi_1 s> ecx_16)
                        int32_t* eax_38 = edi_1
                        edi_1 = ecx_16
                        arg_10 = eax_38
                        ebp_1 = ebx_1
                    
                    int32_t temp0_2 = divs.dp.d(sx.q(arg_c << 8), arg_4)
                    int32_t ebp_2 = ebp_1 << 8
                    arg_c = (*(*esi_1 + 8))(0, 0)
                    int32_t eax_46 = (*(*esi_1 + 0x1c))()
                    eax = arg_10
                    
                    if (edi_1 s<= eax)
                        int32_t edx_20 = eax_46 * edi_1
                        void* i_5 = eax - edi_1 + 1
                        void* i_1
                        
                        do
                            char* ecx_20 = edx_20 + (ebp_2 s>> 8 << 2) + arg_c
                            eax.b = arg4.b
                            *ecx_20 = eax.b
                            eax.b = arg3.b
                            ecx_20[1] = eax.b
                            eax.b = arg2.b
                            ebp_2 += temp0_2
                            edx_20 += eax_46
                            i_1 = i_5
                            i_5 -= 1
                            ecx_20[2] = eax.b
                        while (i_1 != 1)
                else
                    if (ebp_1 s> ebx_1)
                        edi_1 = arg_10
                        int32_t eax_26 = ebp_1
                        ebp_1 = ebx_1
                        ebx_1 = eax_26
                    
                    int32_t edi_2 = edi_1 << 8
                    arg_c = divs.dp.d(sx.q(arg_4 << 8), ecx_6)
                    arg_10 = (*(*esi_1 + 8))(0, 0)
                    eax = (*(*esi_1 + 0x1c))()
                    
                    if (ebp_1 s<= ebx_1)
                        void* eax_37
                        
                        do
                            int32_t eax_34 = edi_2
                            edi_2 += arg_c
                            eax_37 = (eax_34 s>> 8) * eax + arg_10
                            *(eax_37 + (ebp_1 << 2)) = arg4.b
                            void* ecx_15 = eax_37 + (ebp_1 << 2)
                            eax_37.b = arg3.b
                            ebp_1 += 1
                            *(ecx_15 + 1) = eax_37.b
                            *(ecx_15 + 2) = arg2.b
                        while (ebp_1 s<= ebx_1)
                        
                        return eax_37
            else
                if (edi_1 s> edx_4)
                    int32_t* eax_15 = edi_1
                    edi_1 = edx_4
                    arg_10 = eax_15
                
                void* ebx_3 = (*(*esi_1 + 8))(ebp_1, edi_1)
                eax = (*(*esi_1 + 0x1c))()
                int32_t* ecx_11 = arg_10
                int32_t* esi_2 = eax
                
                if (edi_1 s<= ecx_11)
                    void* i_3 = ecx_11 - edi_1 + 1
                    void* i_2
                    
                    do
                        eax.b = arg3.b
                        *ebx_3 = arg4.b
                        *(ebx_3 + 1) = eax.b
                        *(ebx_3 + 2) = arg2.b
                        ebx_3 += esi_2
                        i_2 = i_3
                        i_3 -= 1
                    while (i_2 != 1)

return eax
