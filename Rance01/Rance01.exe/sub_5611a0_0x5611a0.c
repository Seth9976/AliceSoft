// 函数: sub_5611a0
// 地址: 0x5611a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg3
int32_t* eax = arg2[4]

if (*ebx s< eax)
    while (true)
        int32_t edx_1 = arg2[5]
        int32_t* ecx_2
        
        if (edx_1 u< 0x10)
            ecx_2 = arg2
        else
            ecx_2 = *arg2
        
        char* eax_1 = *ebx
        int32_t* ecx_3
        
        if (*(eax_1 + ecx_2) u>= 0x81)
            if (edx_1 u< 0x10)
                ecx_3 = arg2
            else
                ecx_3 = *arg2
        
        char* ecx_4
        
        if (*(eax_1 + ecx_2) u< 0x81 || *(eax_1 + ecx_3) u> 0x9f)
            if (edx_1 u< 0x10)
                ecx_4 = arg2
            else
                ecx_4 = *arg2
        
        int32_t* ecx_13
        
        if ((*(eax_1 + ecx_2) u< 0x81 || *(eax_1 + ecx_3) u> 0x9f) && *(ecx_4 + eax_1) u< 0xe0)
            char* ecx_16
            
            if (edx_1 u< 0x10)
                ecx_16 = arg2
            else
                ecx_16 = *arg2
            
            if (*(ecx_16 + eax_1) == 0x22)
                arg3.b = 0
                sub_54e400(&arg3, arg1)
                *ebx += 1
                char* eax_17
                eax_17.b = 1
                return eax_17
            
            *ebx = &eax_1[1]
            
            if (arg2[5] u< 0x10)
            label_5612ce:
                ecx_13 = arg2
                goto label_5612d0
            
            ecx_13 = *arg2
        label_5612d0:
            void* edi_3 = ecx_13 + eax_1
            int32_t eax_9 = arg1[1]
            
            if (edi_3 u< eax_9)
                edx_1 = *arg1
            
            if (edi_3 u>= eax_9 || edx_1 u> edi_3)
                int32_t ecx_18 = arg1[2]
                
                if (eax_9 != ecx_18)
                label_561388:
                    char* eax_15 = arg1[1]
                    
                    if (eax_15 != 0)
                        edx_1.b = *edi_3
                        *eax_15 = edx_1.b
                    
                label_561397:
                    arg1[1] += 1
                    
                    if (*ebx s>= eax)
                        break
                    
                    continue
                else
                    edx_1 = *arg1
                    int32_t eax_13 = eax_9 - edx_1
                    
                    if (eax_13 u<= 0xfffffffe)
                        int32_t ecx_19 = ecx_18 - edx_1
                        
                        if (eax_13 + 1 u> ecx_19)
                            uint32_t edx_10 = ecx_19 u>> 1
                            uint32_t ecx_20
                            
                            if (0xffffffff - edx_10 u>= ecx_19)
                                ecx_20 = ecx_19 + edx_10
                            else
                                ecx_20 = 0
                            
                            if (ecx_20 u< eax_13 + 1)
                                ecx_20 = eax_13 + 1
                            
                            sub_424860(arg1, ecx_20)
                            ebx = arg3
                        
                        goto label_561388
            else
                int32_t ecx_14 = arg1[2]
                
                if (eax_9 != ecx_14)
                label_56131e:
                    char* eax_12 = arg1[1]
                    
                    if (eax_12 != 0)
                        ecx_14.b = *(edi_3 - edx_1 + *arg1)
                        *eax_12 = ecx_14.b
                    
                    goto label_561397
                
                int32_t eax_10 = eax_9 - edx_1
                
                if (eax_10 u<= 0xfffffffe)
                    ecx_14 -= edx_1
                    
                    if (eax_10 + 1 u> ecx_14)
                        uint32_t edx_7 = ecx_14 u>> 1
                        uint32_t ecx_15
                        
                        if (0xffffffff - edx_7 u>= ecx_14)
                            ecx_15 = ecx_14 + edx_7
                        else
                            ecx_15 = 0
                        
                        if (ecx_15 u< eax_10 + 1)
                            ecx_15 = eax_10 + 1
                        
                        sub_424860(arg1, ecx_15)
                        ebx = arg3
                    
                    goto label_56131e
        else
            *ebx = &eax_1[1]
            int32_t* ecx_6
            
            if (arg2[5] u< 0x10)
                ecx_6 = arg2
            else
                ecx_6 = *arg2
            
            void* edi_1 = ecx_6 + eax_1
            int32_t eax_2 = arg1[1]
            
            if (edi_1 u< eax_2)
                edx_1 = *arg1
            
            if (edi_1 u>= eax_2 || edx_1 u> edi_1)
                int32_t ecx_9 = arg1[2]
                
                if (eax_2 != ecx_9)
                label_5612ae:
                    char* eax_8 = arg1[1]
                    
                    if (eax_8 != 0)
                        edx_1.b = *edi_1
                        *eax_8 = edx_1.b
                    
                label_5612b9:
                    arg1[1] += 1
                    eax_1 = *ebx
                    *ebx = &eax_1[1]
                    
                    if (arg2[5] u< 0x10)
                        goto label_5612ce
                    
                    ecx_13 = *arg2
                    goto label_5612d0
                
                edx_1 = *arg1
                int32_t eax_6 = eax_2 - edx_1
                
                if (eax_6 u<= 0xfffffffe)
                    int32_t ecx_10 = ecx_9 - edx_1
                    
                    if (eax_6 + 1 u> ecx_10)
                        uint32_t edx_5 = ecx_10 u>> 1
                        uint32_t ecx_11
                        
                        if (0xffffffff - edx_5 u>= ecx_10)
                            ecx_11 = ecx_10 + edx_5
                        else
                            ecx_11 = 0
                        
                        if (ecx_11 u< eax_6 + 1)
                            ecx_11 = eax_6 + 1
                        
                        sub_424860(arg1, ecx_11)
                        ebx = arg3
                    
                    goto label_5612ae
            else
                int32_t ecx_7 = arg1[2]
                void* edi_2 = edi_1 - edx_1
                
                if (eax_2 != ecx_7)
                label_561260:
                    char* eax_5 = arg1[1]
                    
                    if (eax_5 != 0)
                        ecx_7.b = *(edi_2 + *arg1)
                        *eax_5 = ecx_7.b
                    
                    goto label_5612b9
                
                int32_t eax_3 = eax_2 - edx_1
                
                if (eax_3 u<= 0xfffffffe)
                    ecx_7 -= edx_1
                    
                    if (eax_3 + 1 u> ecx_7)
                        uint32_t edx_3 = ecx_7 u>> 1
                        uint32_t ecx_8
                        
                        if (0xffffffff - edx_3 u>= ecx_7)
                            ecx_8 = ecx_7 + edx_3
                        else
                            ecx_8 = 0
                        
                        if (ecx_8 u< eax_3 + 1)
                            ecx_8 = eax_3 + 1
                        
                        ecx_7, edx_1 = sub_424860(arg1, ecx_8)
                        ebx = arg3
                    
                    goto label_561260
        sub_6b47bf("vector<T> too long")
        noreturn

eax.b = 0
return eax
