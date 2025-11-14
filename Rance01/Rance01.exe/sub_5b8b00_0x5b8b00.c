// 函数: sub_5b8b00
// 地址: 0x5b8b00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_184
int32_t eax_1 = data_78c474 ^ &var_184
int32_t ebp = *(arg4 + 0x504)
void* eax_3 = *(arg2 + 0x40)
var_184 = *(arg4 + 0x510)
void* eax_4 = *(*(eax_3 + 4) + 0x1c)
int32_t eax_5 = *(eax_4 + 0xb20)
int32_t result

if (arg5 == 0)
    sub_5b4af0(arg3, 0, 1)
    int32_t eax_73
    int32_t edx_51
    edx_51:eax_73 = sx.q(*(arg2 + 0x24))
    sub_6bc670(arg6, 0, ((eax_73 - edx_51) s>> 1) * 4)
    result = 0
else
    int32_t edi_1 = 0
    
    if (ebp s> 0)
        do
            int32_t esi_1 = arg5[edi_1]
            int32_t ecx_1 = esi_1 & 0x7fff
            
            switch (var_184[0xd0] - 1)
                case 0
                    ecx_1 s>>= 2
                case 1
                    ecx_1 s>>= 3
                case 2
                    ecx_1 s/= 0xc
                case 3
                    ecx_1 s>>= 4
            
            arg5[edi_1] = (esi_1 & 0x8000) | ecx_1
            edi_1 += 1
        while (edi_1 s< ebp)
    
    int32_t edx_5 = arg5[1]
    int32_t var_108 = *arg5
    
    if (ebp s> 2)
        void* var_174_1 = &arg5[2]
        void* var_178_1 = arg4 + 0x30c
        int32_t* eax_12 = &var_108 - arg5
        void* var_180_1 = &var_184[0xd3]
        int32_t i_8 = ebp - 2
        int32_t i
        
        do
            int32_t ebp_2 = *(var_178_1 + 0xfc)
            int32_t ebx_1 = *var_178_1
            int32_t edi_2 = var_184[ebp_2 + 0xd1]
            int32_t esi_5 = arg5[ebp_2] & 0x7fff
            int32_t ecx_9 = (arg5[ebx_1] & 0x7fff) - esi_5
            int32_t eax_16
            int32_t edx_8
            edx_8:eax_16 = sx.q(ecx_9)
            int32_t temp0_1 = divs.dp.d(sx.q(((eax_16 ^ edx_8) - edx_8) * (*var_180_1 - edi_2)), 
                var_184[ebx_1 + 0xd1] - edi_2)
            int32_t ecx_11
            
            if (ecx_9 s>= 0)
                ecx_11 = temp0_1 + esi_5
            else
                ecx_11 = esi_5 - temp0_1
            
            int32_t eax_22 = *var_174_1
            
            if ((eax_22 & 0x8000) != 0 || ecx_11 == eax_22)
                *var_174_1 = ecx_11 | 0x8000
                *(eax_12 + var_174_1) = 0
            else
                int32_t edx_19 = *(arg4 + 0x50c) - ecx_11
                
                if (edx_19 s>= ecx_11)
                    edx_19 = ecx_11
                
                int32_t eax_23 = eax_22 - ecx_11
                int32_t eax_24
                
                if (eax_22 - ecx_11 s>= 0)
                    if (eax_23 s< edx_19)
                        eax_24 = eax_23 * 2
                    else
                        eax_24 = eax_23 + edx_19
                else if (eax_23 s>= neg.d(edx_19))
                    eax_24 = 0xffffffff - eax_23 * 2
                else
                    eax_24 = edx_19 - eax_23 - 1
                
                *(eax_12 + var_174_1) = eax_24
                arg5[ebp_2] = esi_5
                arg5[ebx_1] &= 0x7fff
            
            var_178_1 += 4
            var_180_1 += 4
            i = i_8
            i_8 -= 1
            var_174_1 += 4
        while (i != 1)
    
    sub_5b4af0(arg3, 1, 1)
    int32_t edx_23 = *(arg4 + 0x50c)
    *(arg4 + 0x51c) += 1
    int32_t ecx_16 = 0
    uint32_t i_2 = edx_23 - 1
    uint32_t i_1 = i_2
    
    if (edx_23 != 1)
        ecx_16 = 0
        
        do
            ecx_16 += 1
            i_1 u>>= 1
        while (i_1 != 0)
    
    *(arg4 + 0x518) += ecx_16 * 2
    int32_t eax_27 = 0
    
    for (; i_2 != 0; i_2 u>>= 1)
        eax_27 += 1
    
    sub_5b4af0(arg3, var_108, eax_27)
    int32_t esi_7 = *(arg4 + 0x50c)
    uint32_t i_3 = esi_7 - 1
    int32_t eax_28 = 0
    
    if (esi_7 != 1)
        do
            eax_28 += 1
            i_3 u>>= 1
        while (i_3 != 0)
    
    sub_5b4af0(arg3, edx_5, eax_28)
    int32_t* eax_29 = var_184
    int32_t i_9 = 0
    int32_t var_180_2 = 2
    
    if (*eax_29 s> 0)
        void* var_17c_2 = &eax_29[1]
        int32_t i_4
        
        do
            int32_t eax_30 = *var_17c_2
            int32_t* ecx_21 = var_184
            int32_t ebp_3 = ecx_21[eax_30 + 0x30]
            int32_t edx_26 = ecx_21[eax_30 + 0x20]
            int32_t esi_8 = 1 << ebp_3.b
            int32_t ebx_2 = 0
            int32_t var_148
            __builtin_memset(&var_148, 0, 0x20)
            int32_t var_15c_1 = 0
            int32_t __saved_edi
            
            if (ebp_3 != 0)
                int32_t eax_31 = 0
                int32_t var_128[0x8]
                
                if (esi_8 s> 0)
                    void* edx_30 = &var_184[(eax_30 + 0xa) * 8]
                    
                    do
                        int32_t edi_6 = *edx_30
                        
                        if (edi_6 s>= 0)
                            var_128[eax_31] = *(*(eax_4 + (edi_6 << 2) + 0x720) + 4)
                        else
                            var_128[eax_31] = 1
                        
                        eax_31 += 1
                        edx_30 += 4
                    while (eax_31 s< esi_8)
                
                int32_t edx_31 = 0
                
                if (edx_26 s> 0)
                    void* var_16c_1 = &(&__saved_edi)[var_180_2 + 0x23]
                    
                    do
                        int32_t eax_33 = 0
                        
                        if (esi_8 s> 0)
                            do
                                if (*var_16c_1 s< var_128[eax_33])
                                    (&var_148)[edx_31] = eax_33
                                    break
                                
                                eax_33 += 1
                            while (eax_33 s< esi_8)
                        
                        char ecx_27 = var_15c_1.b
                        var_15c_1 += ebp_3
                        var_16c_1 += 4
                        int32_t eax_35 = (&var_148)[edx_31] << ecx_27
                        edx_31 += 1
                        ebx_2 |= eax_35
                    while (edx_31 s< edx_26)
                
                void* esi_9 = eax_5 + var_184[eax_30 + 0x40] * 0x38
                void* eax_37
                
                if (ebx_2 s>= 0)
                    eax_37 = *(esi_9 + 0xc)
                
                int32_t ebx_3
                
                if (ebx_2 s< 0 || ebx_2 s>= *(eax_37 + 4))
                    ebx_3 = 0
                else
                    sub_5b4af0(arg3, *(*(esi_9 + 0x14) + (ebx_2 << 2)), 
                        *(*(eax_37 + 8) + (ebx_2 << 2)))
                    ebx_3 = *(*(*(esi_9 + 0xc) + 8) + (ebx_2 << 2))
                
                *(arg4 + 0x514) += ebx_3
            
            int32_t ebx_4 = 0
            
            if (edx_26 s> 0)
                void* ebp_5 = &(&__saved_edi)[var_180_2 + 0x23]
                
                do
                    int32_t eax_44 = var_184[(&var_148)[ebx_4] + (eax_30 << 3) + 0x50]
                    
                    if (eax_44 s>= 0)
                        int32_t esi_10 = *ebp_5
                        int32_t edx_38 = eax_44 * 7
                        void* edi_9 = eax_5 + (edx_38 << 3)
                        
                        if (esi_10 s< *(eax_5 + (edx_38 << 3) + 4))
                            void* eax_46
                            
                            if (esi_10 s>= 0)
                                eax_46 = *(edi_9 + 0xc)
                            
                            int32_t esi_11
                            
                            if (esi_10 s< 0 || esi_10 s>= *(eax_46 + 4))
                                esi_11 = 0
                            else
                                sub_5b4af0(arg3, *(*(edi_9 + 0x14) + (esi_10 << 2)), 
                                    *(*(eax_46 + 8) + (esi_10 << 2)))
                                esi_11 = *(*(*(edi_9 + 0xc) + 8) + (esi_10 << 2))
                            
                            *(arg4 + 0x518) += esi_11
                    
                    ebx_4 += 1
                    ebp_5 += 4
                while (ebx_4 s< edx_26)
            
            var_180_2 += edx_26
            var_17c_2 += 4
            i_4 = i_9 + 1
            i_9 = i_4
        while (i_4 s< *var_184)
    
    int32_t ecx_40 = var_184[0xd0] * *arg5
    void* esi_12 = arg2
    int32_t eax_54
    int32_t edx_44
    edx_44:eax_54 = sx.q(*(eax_4 + (*(esi_12 + 0x1c) << 2)))
    int32_t i_6 = 0
    int32_t i_10 = 0
    int32_t i_7 = 1
    
    if (*(arg4 + 0x504) s> 1)
        void* var_17c_3 = arg4 + 0x108
        i_6 = 0
        int32_t i_5
        
        do
            int32_t edx_46 = *var_17c_3
            int32_t esi_13 = arg5[edx_46]
            int32_t eax_60 = esi_13 & 0x7fff
            
            if (eax_60 == esi_13)
                int32_t* edi_10 = var_184
                i_6 = edi_10[edx_46 + 0xd1]
                int32_t esi_15 = edi_10[0xd0] * eax_60
                int128_t* var_198_5 = arg6
                int32_t var_19c_5 = ecx_40
                sub_5b7c50(esi_15, arg6, ecx_40, (eax_54 - edx_44) s>> 1, i_10, i_6)
                i_10 = i_6
                ecx_40 = esi_15
            
            var_17c_3 += 4
            i_5 = i_7 + 1
            i_7 = i_5
        while (i_5 s< *(arg4 + 0x504))
        esi_12 = arg2
    
    int32_t eax_64
    int32_t edx_49
    edx_49:eax_64 = sx.q(*(esi_12 + 0x24))
    
    if (i_6 s< (eax_64 - edx_49) s>> 1)
        int32_t eax_69
        int32_t edx_50
        
        do
            *(arg6 + (i_6 << 2)) = ecx_40
            edx_50:eax_69 = sx.q(*(esi_12 + 0x24))
            i_6 += 1
        while (i_6 s< (eax_69 - edx_50) s>> 1)
    
    result = 1

sub_6b4885(eax_1 ^ &var_184)
return result
