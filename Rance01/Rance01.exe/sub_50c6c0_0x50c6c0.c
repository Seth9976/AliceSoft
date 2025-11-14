// 函数: sub_50c6c0
// 地址: 0x50c6c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i_6 = (*(*arg1 + 0x10))()
int32_t i_7 = i_6
int32_t* eax_3 = (*(*arg1 + 0x14))()

if (i_6 == (*(*arg2 + 0x10))() && eax_3 == (*(*arg2 + 0x14))() && (*(*arg1 + 0x24))().b != 0
        && (*(*arg1 + 0x18))() == 0x20)
    if ((*(*arg2 + 0x24))().b == 0)
        int32_t edi_5 = 0
        
        if (eax_3 s> 0)
            do
                int32_t eax_30 = (*(*arg1 + 0x18))()
                int32_t eax_34
                int32_t edx_25
                edx_25:eax_34 = sx.q((*(*arg1 + 0x10))() * eax_30)
                sub_6bc670((*(*arg1 + 8))(0, edi_5), 0xff, (eax_34 + (edx_25 & 7)) s>> 3)
                edi_5 += 1
            while (edi_5 s< eax_3)
    else if ((*(*arg2 + 0x18))() != 0x18)
        if ((*(*arg2 + 0x18))() != 0x20)
            if ((*(*arg2 + 0x18))() == 8)
                int32_t edi_4 = 0
                
                if (eax_3 s> 0)
                    char* eax_28
                    
                    do
                        void* eax_26 = (*(*arg1 + 8))(0, edi_4)
                        eax_28 = (*(*arg2 + 8))(0, edi_4)
                        
                        if (i_6 s> 0)
                            void* ecx_23 = eax_26 + 2
                            int32_t i_3 = i_6
                            int32_t i
                            
                            do
                                *(ecx_23 - 2) = *eax_28
                                *(ecx_23 - 1) = *eax_28
                                *ecx_23 = *eax_28
                                ecx_23 += 4
                                eax_28 = &eax_28[1]
                                i = i_3
                                i_3 -= 1
                            while (i != 1)
                        
                        edi_4 += 1
                    while (edi_4 s< eax_3)
                    
                    eax_28.b = 1
                    return eax_28
        else
            int32_t var_8_2 = 0
            
            if (eax_3 s> 0)
                int32_t eax_23
                
                do
                    void* eax_18 = (*(*arg1 + 8))(0, var_8_2)
                    void* eax_20 = (*(*arg2 + 8))(0, var_8_2)
                    
                    if (i_6 s> 0)
                        void* edx_16 = eax_18 + 2
                        void* ecx_18 = eax_20 + 2
                        int32_t i_5 = i_6
                        int32_t i_1
                        
                        do
                            *(eax_18 - eax_20 - 2 + ecx_18) = *(ecx_18 - 2)
                            *(edx_16 - 1) = *(ecx_18 - 1)
                            *edx_16 = *ecx_18
                            *(edx_16 + 1) = *(ecx_18 + 1)
                            edx_16 += 4
                            ecx_18 += 4
                            i_1 = i_5
                            i_5 -= 1
                        while (i_1 != 1)
                        i_6 = i_7
                    
                    eax_23 = var_8_2 + 1
                    var_8_2 = eax_23
                while (eax_23 s< eax_3)
                
                eax_23.b = 1
                return eax_23
    else
        int32_t edi_1 = 0
        int32_t var_8_1 = 0
        
        if (eax_3 s> 0)
            void* eax_15
            
            do
                void* eax_13 = (*(*arg1 + 8))(0, edi_1)
                eax_15 = (*(*arg2 + 8))(0, edi_1)
                
                if (i_6 s> 0)
                    eax_15 += 2
                    int32_t i_4 = i_6
                    void* ecx_12 = eax_13 + 2
                    int32_t i_2
                    
                    do
                        *(ecx_12 - 2) = *(eax_15 - 2)
                        *(ecx_12 - 1) = *(eax_15 - 1)
                        *ecx_12 = *eax_15
                        ecx_12 += 4
                        eax_15 += 3
                        i_2 = i_4
                        i_4 -= 1
                    while (i_2 != 1)
                    edi_1 = var_8_1
                
                edi_1 += 1
                var_8_1 = edi_1
            while (edi_1 s< eax_3)
            
            eax_15.b = 1
            return eax_15
    
    int128_t* eax_10
    eax_10.b = 1
    return eax_10

int32_t eax_5
eax_5.b = 0
return eax_5
