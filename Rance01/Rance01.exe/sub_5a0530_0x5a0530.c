// 函数: sub_5a0530
// 地址: 0x5a0530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg1[7]
uint32_t ebx = result[0xe]
void* ebp_1 = *arg1 - 1
void* edx_1 = arg1[1] + ebp_1 - 5
int32_t ecx_1 = arg1[4]
uint8_t* esi_1 = arg1[3] - 1
void* edx_4 = ecx_1 - arg2 + esi_1
void* ecx_2 = &esi_1[ecx_1 - 0x101]
int32_t edx_5 = result[0xa]
int32_t ecx_3 = result[0xb]
int32_t i_10 = result[0xc]
int32_t ecx_4 = result[0xd]
int32_t edx_6 = result[0x13]
int32_t ecx_5 = result[0x14]
int32_t edi = result[0xf]
int32_t edx_8 = (1 << (result[0x15]).b) - 1
void* var_3c = ebp_1
int32_t var_4 = edx_8
int32_t eax_1 = (1 << (result[0x16]).b) - 1
void* edx_41

while (true)
    if (edi u< 0xf)
        uint32_t eax_3 = zx.d(*(ebp_1 + 1)) << edi.b
        ebp_1 += 2
        var_3c = ebp_1
        ebx = ebx + eax_3 + (zx.d(*ebp_1) << (edi.b + 8))
        edi += 0x10
    
    int32_t eax_6 = *(edx_6 + ((edx_8 & ebx) << 2))
    uint32_t ecx_11 = zx.d((eax_6 u>> 8).b)
    ebx u>>= ecx_11.b
    edi -= ecx_11
    uint32_t edx_12 = zx.d(eax_6.b)
    
    if (eax_6.b == 0)
    label_5a0640:
        esi_1 = &esi_1[1]
        *esi_1 = (eax_6 u>> 0x10).b
    else
        while (true)
            if ((edx_12.b & 0x10) != 0)
                int32_t edx_17 = edx_12 & 0xf
                arg2 = eax_6 u>> 0x10
                
                if (edx_17 != 0)
                    if (edi u< edx_17)
                        uint32_t eax_11 = zx.d(*(ebp_1 + 1))
                        ebp_1 += 1
                        var_3c = ebp_1
                        ebx += eax_11 << edi.b
                        edi += 8
                    
                    char ecx_17 = edx_17.b
                    arg2 += ((1 << ecx_17) - 1) & ebx
                    ebx u>>= ecx_17
                    edi -= edx_17
                
                if (edi u< 0xf)
                    uint32_t edx_18 = zx.d(*(ebp_1 + 1))
                    uint32_t eax_16 = zx.d(*(ebp_1 + 2))
                    ebp_1 += 2
                    var_3c = ebp_1
                    ebx = ebx + (edx_18 << edi.b) + (eax_16 << (edi.b + 8))
                    edi += 0x10
                
                int32_t edx_21 = *(ecx_5 + ((eax_1 & ebx) << 2))
                uint32_t ecx_22 = zx.d((edx_21 u>> 8).b)
                uint32_t eax_20 = zx.d(edx_21.b)
                ebx u>>= ecx_22.b
                edi -= ecx_22
                int32_t var_30_1 = edx_21
                
                if ((eax_20.b & 0x10) != 0)
                label_5a070c:
                    int32_t eax_24 = eax_20 & 0xf
                    
                    if (edi u< eax_24)
                        uint32_t edx_27 = zx.d(*(ebp_1 + 1))
                        ebp_1 += 1
                        uint32_t edx_28 = edx_27 << edi.b
                        edi += 8
                        var_3c = ebp_1
                        ebx += edx_28
                        
                        if (edi u< eax_24)
                            uint32_t edx_29 = zx.d(*(ebp_1 + 1))
                            ebp_1 += 1
                            var_3c = ebp_1
                            ebx += edx_29 << edi.b
                            edi += 8
                    
                    char ecx_28 = eax_24.b
                    edi -= eax_24
                    void* eax_26 = esi_1 - edx_4
                    void* edx_35 = (edx_21 u>> 0x10) + (((1 << ecx_28) - 1) & ebx)
                    ebx u>>= ecx_28
                    void* var_30_3 = edx_35
                    
                    if (edx_35 u<= eax_26)
                        void* eax_35 = esi_1 - edx_35
                        uint32_t i
                        
                        do
                            esi_1[1] = *(eax_35 + 1)
                            edx_35.b = *(eax_35 + 2)
                            esi_1[2] = edx_35.b
                            uint8_t ecx_36 = *(eax_35 + 3)
                            eax_35 += 3
                            esi_1 = &esi_1[3]
                            *esi_1 = ecx_36
                            i = arg2 - 3
                            arg2 = i
                        while (i u> 2)
                        
                        if (i != 0)
                            edx_35.b = *(eax_35 + 1)
                            esi_1 = &esi_1[1]
                            *esi_1 = edx_35.b
                            
                            if (i u> 1)
                                eax_35.b = *(eax_35 + 2)
                                esi_1 = &esi_1[1]
                                *esi_1 = eax_35.b
                        
                        break
                    
                    void* i_6 = edx_35 - eax_26
                    int32_t* result_1
                    
                    if (i_6 u> ecx_3)
                        result_1 = result
                    
                    if (i_6 u<= ecx_3 || result_1[0x6f0] == 0)
                        void* ecx_31
                        
                        if (i_10 == 0)
                            ecx_31 = ecx_4 - 1 + edx_5 - i_6
                            
                            if (i_6 u< arg2)
                                arg2 -= i_6
                                void* i_1
                                
                                do
                                    void* eax_29
                                    eax_29.b = *(ecx_31 + 1)
                                    ecx_31 += 1
                                    esi_1 = &esi_1[1]
                                    i_1 = i_6
                                    i_6 -= 1
                                    *esi_1 = eax_29.b
                                while (i_1 != 1)
                                ecx_31 = esi_1 - edx_35
                        else if (i_10 u>= i_6)
                            ecx_31 = ecx_4 - 1 + i_10 - i_6
                            
                            if (i_6 u< arg2)
                                arg2 -= i_6
                                void* i_2
                                
                                do
                                    void* eax_30
                                    eax_30.b = *(ecx_31 + 1)
                                    ecx_31 += 1
                                    esi_1 = &esi_1[1]
                                    i_2 = i_6
                                    i_6 -= 1
                                    *esi_1 = eax_30.b
                                while (i_2 != 1)
                                ecx_31 = esi_1 - edx_35
                        else
                            void* i_7 = i_6 - i_10
                            ecx_31 = ecx_4 - 1 + i_10 - i_6 + edx_5
                            
                            if (i_7 u< arg2)
                                arg2 -= i_7
                                int32_t ecx_32 = ecx_31 - esi_1
                                void* i_3
                                
                                do
                                    edx_35.b = esi_1[ecx_32 + 1]
                                    esi_1 = &esi_1[1]
                                    i_3 = i_7
                                    i_7 -= 1
                                    *esi_1 = edx_35.b
                                while (i_3 != 1)
                                ecx_31 = ecx_4 - 1
                                
                                if (i_10 u< arg2)
                                    arg2 -= i_10
                                    int32_t i_8 = i_10
                                    int32_t i_4
                                    
                                    do
                                        int32_t eax_27
                                        eax_27.b = *(ecx_31 + 1)
                                        ecx_31 += 1
                                        esi_1 = &esi_1[1]
                                        i_4 = i_8
                                        i_8 -= 1
                                        *esi_1 = eax_27.b
                                    while (i_4 != 1)
                                    ecx_31 = esi_1 - var_30_3
                        
                        uint32_t eax_33
                        
                        if (arg2 u> 2)
                            int32_t i_9 = (arg2 - 3) u/ 3 + 1
                            int32_t i_5
                            
                            do
                                arg2 -= 3
                                esi_1[1] = *(ecx_31 + 1)
                                edx_35.b = *(ecx_31 + 2)
                                esi_1[2] = edx_35.b
                                eax_33 = zx.d(*(ecx_31 + 3))
                                ecx_31 += 3
                                esi_1 = &esi_1[3]
                                i_5 = i_9
                                i_9 -= 1
                                *esi_1 = eax_33.b
                            while (i_5 != 1)
                        
                        if (arg2 != 0)
                            edx_35.b = *(ecx_31 + 1)
                            esi_1 = &esi_1[1]
                            *esi_1 = edx_35.b
                            
                            if (arg2 u> 1)
                                eax_33.b = *(ecx_31 + 2)
                                esi_1 = &esi_1[1]
                                *esi_1 = eax_33.b
                        
                        ebp_1 = var_3c
                        break
                    
                    ebp_1 = var_3c
                    arg1[6] = "invalid distance too far back"
                    *result_1 = 0x1d
                else
                    while ((eax_20.b & 0x40) == 0)
                        edx_21 =
                            *(ecx_5 + (((((1 << eax_20.b) - 1) & ebx) + zx.d(var_30_1:2.w)) << 2))
                        uint32_t ecx_25 = zx.d((edx_21 u>> 8).b)
                        eax_20 = zx.d(edx_21.b)
                        ebx u>>= ecx_25.b
                        edi -= ecx_25
                        var_30_1 = edx_21
                        
                        if ((eax_20.b & 0x10) != 0)
                            goto label_5a070c
                    
                    arg1[6] = "invalid distance code"
                    *result = 0x1d
            else if ((edx_12.b & 0x40) == 0)
                eax_6 = *(edx_6 + (((((1 << edx_12.b) - 1) & ebx) + (eax_6 u>> 0x10)) << 2))
                uint32_t ecx_15 = zx.d((eax_6 u>> 8).b)
                ebx u>>= ecx_15.b
                edi -= ecx_15
                edx_12 = zx.d(eax_6.b)
                
                if (eax_6.b == 0)
                    goto label_5a0640
                
                continue
            else if ((edx_12.b & 0x20) == 0)
                arg1[6] = "invalid literal/length code"
                *result = 0x1d
            else
                *result = 0xb
            
            edx_41 = edx_1
            goto label_5a092b
    
    edx_41 = edx_1
    
    if (ebp_1 u>= edx_41)
        break
    
    if (esi_1 u>= ecx_2)
        break
    
    edx_8 = var_4

label_5a092b:
uint32_t eax_37 = edi u>> 3
void* ebp_6 = ebp_1 - eax_37
int32_t edi_1 = edi - (eax_37 << 3)
*arg1 = ebp_6 + 1
arg1[3] = &esi_1[1]
arg1[4] = ecx_2 - esi_1 + 0x101
arg1[1] = edx_41 - ebp_6 + 5
result[0xf] = edi_1
result[0xe] = ebx & ((1 << edi_1.b) - 1)
return result
