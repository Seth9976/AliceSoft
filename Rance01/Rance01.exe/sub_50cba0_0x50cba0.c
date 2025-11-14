// 函数: sub_50cba0
// 地址: 0x50cba0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi
int32_t var_10 = esi

if ((*(*arg1 + 0x24))().b != 0 && (*(*arg1 + 0x18))() == 0x20)
    int32_t ebx
    int32_t var_14 = ebx
    int32_t ebp
    int32_t var_18 = ebp
    int32_t i_4 = (*(*arg1 + 0x10))()
    int32_t i_5 = i_4
    int32_t eax_6 = (*(*arg1 + 0x14))()
    char* eax_8
    
    if (i_4 == (*(*arg2 + 0x10))() && eax_6 == (*(*arg2 + 0x14))())
        char eax_11 = (*(*arg2 + 0x24))()
        int32_t eax_13
        
        if (eax_11 != 0)
            eax_13 = (*(*arg2 + 0x18))()
        
        if (eax_11 != 0 && eax_13 == 0x20)
            if ((*(*arg2 + 0x18))() == 0x20)
                __return_addr = nullptr
                
                if (eax_6 s> 0)
                    void* __return_addr_1
                    
                    do
                        void* eax_16 = (*(*arg1 + 8))(0, __return_addr)
                        char* eax_18 = (*(*arg2 + 8))(0, __return_addr)
                        
                        if (i_4 s> 0)
                            char* ecx_13 = eax_16 + 3
                            int32_t i
                            
                            do
                                char edx_11 = 0xff - *eax_18
                                eax_18 = &eax_18[4]
                                *ecx_13 = edx_11
                                ecx_13 = &ecx_13[4]
                                i = i_4
                                i_4 -= 1
                            while (i != 1)
                            i_4 = i_5
                        
                        __return_addr_1 = __return_addr + 1
                        __return_addr = __return_addr_1
                    while (__return_addr_1 s< eax_6)
                    
                    __return_addr_1.b = 1
                    return __return_addr_1
            
            eax_8.b = 1
            return eax_8
        
        if ((*(*arg2 + 0x28))().b != 0)
            __return_addr = nullptr
            
            if (eax_6 s<= 0)
                eax_8.b = 1
                return eax_8
            
            void* __return_addr_2
            
            do
                void* eax_22 = (*(*arg1 + 8))(0, __return_addr)
                void* eax_24 = (*(*arg2 + 8))(0, __return_addr)
                
                if (i_4 s> 0)
                    void* ecx_19 = eax_22 + 3
                    char* eax_25 = eax_24 + 3
                    int32_t i_1
                    
                    do
                        ecx_19 += 4
                        *(ecx_19 - 4) = 0xff - *eax_25
                        eax_25 = &eax_25[1]
                        i_1 = i_4
                        i_4 -= 1
                    while (i_1 != 1)
                    i_4 = i_5
                
                __return_addr_2 = __return_addr + 1
                __return_addr = __return_addr_2
            while (__return_addr_2 s< eax_6)
            
            __return_addr_2.b = 1
            return __return_addr_2
        
        if ((*(*arg2 + 0x24))() != 0)
            if ((*(*arg2 + 0x18))() != 0x18)
                if ((*(*arg2 + 0x18))() == 8)
                    int32_t ebx_8 = 0
                    
                    if (eax_6 s> 0)
                        char* eax_38
                        
                        do
                            void* eax_36 = (*(*arg1 + 8))(0, ebx_8)
                            eax_38 = (*(*arg2 + 8))(0, ebx_8)
                            
                            if (i_4 s> 0)
                                void* ecx_31 = eax_36 + 3
                                int32_t i_2
                                
                                do
                                    ecx_31 += 4
                                    *(ecx_31 - 4) = 0xff - *eax_38
                                    eax_38 = &eax_38[1]
                                    i_2 = i_4
                                    i_4 -= 1
                                while (i_2 != 1)
                                i_4 = i_5
                            
                            ebx_8 += 1
                        while (ebx_8 s< eax_6)
                        
                        eax_38.b = 1
                        return eax_38
            else
                int32_t ebx_6 = 0
                
                if (eax_6 s> 0)
                    char* eax_33
                    
                    do
                        void* eax_31 = (*(*arg1 + 8))(0, ebx_6)
                        eax_33 = (*(*arg2 + 8))(0, ebx_6)
                        
                        if (i_4 s> 0)
                            void* ecx_26 = eax_31 + 3
                            int32_t i_3
                            
                            do
                                ecx_26 += 4
                                *(ecx_26 - 4) = 0xff - *eax_33
                                eax_33 = &eax_33[3]
                                i_3 = i_4
                                i_4 -= 1
                            while (i_3 != 1)
                            i_4 = i_5
                        
                        ebx_6 += 1
                    while (ebx_6 s< eax_6)
                    
                    eax_33.b = 1
                    return eax_33
            
            eax_8.b = 1
            return eax_8
        
        if ((*(*arg1 + 0x24))().b != 0 && sub_50ce40(arg1, 0).b != 0)
            eax_8.b = 1
            return eax_8
    
    eax_8.b = 0
    return eax_8

int32_t eax_1
eax_1.b = 0
return eax_1
