// 函数: sub_63f820
// 地址: 0x63f820
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_4
int32_t edx_3
edx_3:eax_4 = sx.q((arg3 - arg2) s/ 0x8c)
int32_t* esi_3 = ((eax_4 - edx_3) s>> 1) * 0x8c + arg2
sub_642070(arg4, edx_3, arg2, esi_3, arg3 - 0x8c, arg4)
int32_t* edx_4 = &esi_3[0x23]
int32_t* eax_7 = esi_3
int32_t* var_404 = edx_4
void* ecx_3

if (arg2 u< esi_3)
    ecx_3 = &esi_3[-0x16]
    
    do
        int32_t edx_5 = *(ecx_3 - 4)
        int32_t esi_4 = *(ecx_3 + 0x88)
        int32_t edi_1 = *ecx_3
        int32_t ebx_2 = *(ecx_3 + 0x8c)
        
        if (edx_5 s< esi_4)
            break
        
        if (edx_5 s<= esi_4)
            if (edi_1 s< ebx_2)
                break
            
            if (edi_1 s<= ebx_2)
                int32_t edi_2 = *(ecx_3 + 4)
                int32_t ebx_3 = *(ecx_3 + 0x90)
                
                if (edi_2 s< ebx_3)
                    break
                
                if (edi_2 s<= ebx_3 && *(ecx_3 - 0x34) s< *eax_7)
                    break
        
        if (esi_4 s< edx_5)
            break
        
        if (esi_4 s<= edx_5)
            int32_t edx_6 = *ecx_3
            int32_t esi_5 = *(ecx_3 + 0x8c)
            
            if (esi_5 s< edx_6)
                break
            
            if (esi_5 s<= edx_6)
                int32_t edx_7 = *(ecx_3 + 4)
                int32_t esi_6 = *(ecx_3 + 0x90)
                
                if (esi_6 s< edx_7)
                    break
                
                if (esi_6 s<= edx_7 && *eax_7 s< *(ecx_3 - 0x34))
                    break
        
        eax_7 -= 0x8c
        ecx_3 -= 0x8c
    while (arg2 u< eax_7)
    
    edx_4 = var_404

if (edx_4 u< arg3)
    int32_t edi_4 = eax_7[0xc]
    
    do
        ecx_3 = edx_4[0xc]
        int32_t esi_7 = edx_4[0xd]
        int32_t ebx_4 = edx_4[0xe]
        
        if (ecx_3 s< edi_4)
            break
        
        if (ecx_3 s<= edi_4)
            int32_t edi_5 = eax_7[0xd]
            
            if (esi_7 s< edi_5)
                break
            
            if (esi_7 s<= edi_5)
                int32_t edi_6 = eax_7[0xe]
                
                if (ebx_4 s< edi_6)
                    break
                
                if (ebx_4 s<= edi_6 && *edx_4 s< *eax_7)
                    break
        
        edi_4 = eax_7[0xc]
        
        if (edi_4 s< ecx_3)
            break
        
        if (edi_4 s<= ecx_3)
            ecx_3 = eax_7[0xd]
            
            if (ecx_3 s< esi_7)
                break
            
            if (ecx_3 s<= esi_7)
                ecx_3 = eax_7[0xe]
                
                if (ecx_3 s< ebx_4)
                    break
                
                if (ecx_3 s<= ebx_4 && *eax_7 s< *edx_4)
                    break
        
        edx_4 = &edx_4[0x23]
    while (edx_4 u< arg3)
    
    var_404 = edx_4

int32_t* ebx_5 = edx_4
void* var_400 = eax_7

while (true)
    if (ebx_5 u< arg3)
        do
            int32_t ecx_6 = eax_7[0xc]
            int32_t edx_9 = ebx_5[0xc]
            int32_t esi_8 = eax_7[0xd]
            int32_t edi_8 = ebx_5[0xd]
            
            if (ecx_6 s>= edx_9)
                if (ecx_6 s> edx_9)
                label_63f99a:
                    
                    if (edx_9 s< ecx_6)
                        break
                    
                    if (edx_9 s<= ecx_6)
                        int32_t ecx_7 = eax_7[0xd]
                        int32_t edx_10 = ebx_5[0xd]
                        
                        if (edx_10 s< ecx_7)
                            break
                        
                        if (edx_10 s<= ecx_7)
                            int32_t ecx_8 = eax_7[0xe]
                            int32_t edx_11 = ebx_5[0xe]
                            
                            if (edx_11 s< ecx_8)
                                break
                            
                            if (edx_11 s<= ecx_8 && *ebx_5 s< *eax_7)
                                break
                    
                    int32_t* edx_13 = var_404
                    var_404 = &var_404[0x23]
                    void var_128
                    __builtin_memcpy(&var_128, edx_13, 0x8c)
                    __builtin_memcpy(edx_13, ebx_5, 0x8c)
                    __builtin_memcpy(ebx_5, &var_128, 0x8c)
                else if (esi_8 s>= edi_8)
                    if (esi_8 s> edi_8)
                        goto label_63f99a
                    
                    int32_t esi_9 = eax_7[0xe]
                    int32_t edi_9 = ebx_5[0xe]
                    
                    if (esi_9 s>= edi_9 && (esi_9 s> edi_9 || *eax_7 s>= *ebx_5))
                        goto label_63f99a
            
            ebx_5 = &ebx_5[0x23]
        while (ebx_5 u< arg3)
        
        edx_4 = var_404
    
    void* esi_23 = var_400
    bool cond:2_1 = esi_23 != arg2
    
    if (esi_23 u> arg2)
        int32_t* edx_14 = esi_23 - 0x58
        
        do
            int32_t ecx_11 = edx_14[-1]
            int32_t esi_13 = eax_7[0xc]
            int32_t edi_12 = eax_7[0xd]
            
            if (ecx_11 s>= esi_13)
                if (ecx_11 s> esi_13)
                label_63fa4a:
                    int32_t esi_17 = eax_7[0xc]
                    
                    if (esi_17 s< ecx_11)
                        esi_23 = var_400
                        break
                    
                    if (esi_17 s<= ecx_11)
                        int32_t esi_18 = eax_7[0xd]
                        int32_t ecx_12 = *edx_14
                        
                        if (esi_18 s< ecx_12)
                            esi_23 = var_400
                            break
                        
                        if (esi_18 s<= ecx_12)
                            int32_t esi_19 = eax_7[0xe]
                            int32_t ecx_13 = edx_14[1]
                            
                            if (esi_19 s< ecx_13)
                                esi_23 = var_400
                                break
                            
                            if (esi_19 s<= ecx_13 && *eax_7 s< edx_14[-0xd])
                                esi_23 = var_400
                                break
                    
                    eax_7 -= 0x8c
                    void var_3f8
                    __builtin_memcpy(&var_3f8, eax_7, 0x8c)
                    __builtin_memcpy(eax_7, &edx_14[-0xd], 0x8c)
                    __builtin_memcpy(&edx_14[-0xd], &var_3f8, 0x8c)
                else
                    int32_t esi_14 = *edx_14
                    
                    if (esi_14 s>= edi_12)
                        if (esi_14 s> edi_12)
                            goto label_63fa4a
                        
                        int32_t edi_13 = eax_7[0xe]
                        int32_t esi_15 = edx_14[1]
                        
                        if (esi_15 s>= edi_13 && (esi_15 s> edi_13 || edx_14[-0xd] s>= *eax_7))
                            goto label_63fa4a
            
            esi_23 = var_400 - 0x8c
            edx_14 -= 0x8c
            var_400 = esi_23
        while (arg2 u< esi_23)
        
        edx_4 = var_404
        cond:2_1 = esi_23 != arg2
    
    if (cond:2_1)
        var_400 = esi_23 - 0x8c
        
        if (ebx_5 != arg3)
            void var_98
            __builtin_memcpy(&var_98, ebx_5, 0x8c)
            __builtin_memcpy(ebx_5, var_400, 0x8c)
            edx_4 = var_404
            __builtin_memcpy(var_400, &var_98, 0x8c)
            ebx_5 = &ebx_5[0x23]
        else
            eax_7 -= 0x8c
            
            if (esi_23 - 0x8c != eax_7)
                edx_4 = var_404
                void var_2d8
                __builtin_memcpy(&var_2d8, esi_23 - 0x8c, 0x8c)
                __builtin_memcpy(var_400, eax_7, 0x8c)
                __builtin_memcpy(eax_7, &var_2d8, 0x8c)
            
            edx_4 -= 0x8c
            void var_1b8
            __builtin_memcpy(&var_1b8, eax_7, 0x8c)
            __builtin_memcpy(eax_7, edx_4, 0x8c)
            var_404 = edx_4
            __builtin_memcpy(edx_4, &var_1b8, 0x8c)
    else
        if (ebx_5 == arg3)
            break
        
        if (edx_4 != ebx_5)
            edx_4 = var_404
            void var_248
            __builtin_memcpy(&var_248, eax_7, 0x8c)
            __builtin_memcpy(eax_7, edx_4, 0x8c)
            __builtin_memcpy(edx_4, &var_248, 0x8c)
        
        var_404 = &edx_4[0x23]
        void var_368
        __builtin_memcpy(&var_368, eax_7, 0x8c)
        __builtin_memcpy(eax_7, ebx_5, 0x8c)
        int32_t* edi_19 = ebx_5
        edx_4 = var_404
        eax_7 = &eax_7[0x23]
        ebx_5 = &ebx_5[0x23]
        __builtin_memcpy(edi_19, &var_368, 0x8c)

*arg1 = eax_7
arg1[1] = edx_4
return arg1
