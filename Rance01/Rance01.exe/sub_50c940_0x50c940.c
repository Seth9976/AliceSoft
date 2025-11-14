// 函数: sub_50c940
// 地址: 0x50c940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if ((*(*arg1 + 0x24))().b != 0 && (*(*arg1 + 0x18))() == 0x20)
    int32_t i_8 = (*(*arg1 + 0x10))()
    int32_t eax_5 = (*(*arg1 + 0x14))()
    char* eax_7
    
    if (i_8 == (*(*arg2 + 0x10))() && eax_5 == (*(*arg2 + 0x14))())
        if ((*(*arg2 + 0x28))().b != 0)
            int32_t ebx_1 = 0
            int32_t var_8_1 = 0
            
            if (eax_5 s<= 0)
                eax_7.b = 1
                return eax_7
            
            char* eax_13
            
            do
                void* eax_11 = (*(*arg1 + 8))(0, ebx_1)
                eax_13 = (*(*arg2 + 8))(0, ebx_1)
                
                if (i_8 s> 0)
                    char* ecx_10 = eax_11 + 3
                    eax_13 = &eax_13[3]
                    int32_t i_5 = i_8
                    int32_t i
                    
                    do
                        ebx_1.b = *eax_13
                        *ecx_10 = ebx_1.b
                        eax_13 = &eax_13[4]
                        ecx_10 = &ecx_10[4]
                        i = i_5
                        i_5 -= 1
                    while (i != 1)
                    ebx_1 = var_8_1
                
                ebx_1 += 1
                var_8_1 = ebx_1
            while (ebx_1 s< eax_5)
            
            eax_13.b = 1
            return eax_13
        
        if ((*(*arg2 + 0x24))() != 0)
            if ((*(*arg2 + 0x18))() != 0x20)
                if ((*(*arg2 + 0x18))() != 0x18)
                    if ((*(*arg2 + 0x18))() == 8)
                        int32_t ebx_4 = 0
                        
                        if (eax_5 s> 0)
                            char* eax_31
                            
                            do
                                void* eax_29 = (*(*arg1 + 8))(0, ebx_4)
                                eax_31 = (*(*arg2 + 8))(0, ebx_4)
                                
                                if (i_8 s> 0)
                                    char* ecx_25 = eax_29 + 3
                                    int32_t i_4 = i_8
                                    int32_t i_1
                                    
                                    do
                                        *ecx_25 = *eax_31
                                        ecx_25 = &ecx_25[4]
                                        eax_31 = &eax_31[1]
                                        i_1 = i_4
                                        i_4 -= 1
                                    while (i_1 != 1)
                                
                                ebx_4 += 1
                            while (ebx_4 s< eax_5)
                            
                            eax_31.b = 1
                            return eax_31
                else
                    int32_t ebx_3 = 0
                    int32_t var_8_3 = 0
                    
                    if (eax_5 s> 0)
                        char* eax_26
                        
                        do
                            void* eax_24 = (*(*arg1 + 8))(0, ebx_3)
                            eax_26 = (*(*arg2 + 8))(0, ebx_3)
                            
                            if (i_8 s> 0)
                                char* ecx_20 = eax_24 + 3
                                int32_t i_7 = i_8
                                int32_t i_2
                                
                                do
                                    ebx_3.b = *eax_26
                                    *ecx_20 = ebx_3.b
                                    ecx_20 = &ecx_20[4]
                                    eax_26 = &eax_26[3]
                                    i_2 = i_7
                                    i_7 -= 1
                                while (i_2 != 1)
                                ebx_3 = var_8_3
                            
                            ebx_3 += 1
                            var_8_3 = ebx_3
                        while (ebx_3 s< eax_5)
                        
                        eax_26.b = 1
                        return eax_26
            else
                int32_t ebx_2 = 0
                int32_t var_8_2 = 0
                
                if (eax_5 s> 0)
                    char* eax_20
                    
                    do
                        void* eax_18 = (*(*arg1 + 8))(0, ebx_2)
                        eax_20 = (*(*arg2 + 8))(0, ebx_2)
                        
                        if (i_8 s> 0)
                            char* ecx_15 = eax_20
                            eax_20 = eax_18 + 3
                            int32_t i_6 = i_8
                            int32_t i_3
                            
                            do
                                ebx_2.b = *ecx_15
                                *eax_20 = ebx_2.b
                                eax_20 = &eax_20[4]
                                ecx_15 = &ecx_15[4]
                                i_3 = i_6
                                i_6 -= 1
                            while (i_3 != 1)
                            ebx_2 = var_8_2
                        
                        ebx_2 += 1
                        var_8_2 = ebx_2
                    while (ebx_2 s< eax_5)
                    
                    eax_20.b = 1
                    return eax_20
            
            eax_7.b = 1
            return eax_7
        
        if ((*(*arg1 + 0x24))().b != 0 && sub_50ce40(arg1, 0xff).b != 0)
            eax_7.b = 1
            return eax_7
    
    eax_7.b = 0
    return eax_7

int32_t eax_1
eax_1.b = 0
return eax_1
