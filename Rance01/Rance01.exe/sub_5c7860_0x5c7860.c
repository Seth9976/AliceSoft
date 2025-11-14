// 函数: sub_5c7860
// 地址: 0x5c7860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_1 = arg7 + arg5
int32_t* ebx = arg2
char* eax = ebx[4]
int32_t esi_1 = neg.d(&eax[0xffffffe0])
int32_t esi_4 = (sbb.d(esi_1, esi_1, eax != 0x20) & 0xfffffffd) + 4
char* edi = *arg1
int32_t var_10 = ecx_1
void* edx_1

if (eax == 0x20)
    edx_1 = *ebx
    
    if (edx_1 != 0)
        eax = ebx[5] * arg4 + ebx[8] * arg3 + edx_1 + 3
    else
        eax = edx_1 + 3
    
    goto label_5c78cd

edx_1 = ebx[1]

if (edx_1 != 0)
    eax = ebx[6] * arg4 + edx_1 + arg3
label_5c78cd:
    
    if (eax != 0)
        edx_1.b = *eax
        void* eax_7 = &eax[esi_4]
        *edi = edx_1.b
        void* edi_1 = &edi[1]
        void* ebp_5 = eax_7 - esi_4
        
        if (arg5 s> 1)
            int32_t i_3 = arg5 - 1
            int32_t i
            
            do
                ecx_1.b = *ebp_5
                ecx_1.b -= *eax_7
                edi_1 += 1
                *(edi_1 - 1) = ecx_1.b
                ebp_5 += esi_4
                eax_7 += esi_4
                i = i_3
                i_3 -= 1
            while (i != 1)
            ecx_1 = var_10
        
        if (arg7 s> 0)
            sub_6bc670(edi_1, 0, arg7)
            ecx_1 = var_10
        
        void* edx_3 = 1
        void* var_c = 1
        
        if (arg6 s> 1)
            int32_t var_8_1 = ecx_1
            
            while (true)
                char* ebp_7 = *arg1 + var_8_1
                char* eax_13
                char* ecx_6
                
                if (ebx[4] != 0x20)
                    int32_t edi_3 = ebx[1]
                    
                    if (edi_3 != 0)
                        ecx_6 = (edx_3 + arg4) * ebx[6] + edi_3 + arg3
                    else
                        ecx_6 = nullptr
                    
                    if (edi_3 != 0)
                        eax_13 = (edx_3 + arg4 - 1) * ebx[6] + edi_3 + arg3
                    else
                        eax_13 = nullptr
                else
                    void* edi_2 = *ebx
                    void* eax_10
                    
                    if (edi_2 != 0)
                        eax_10 = ebx[8] * arg3 + (arg4 + edx_3) * ebx[5] + edi_2
                    else
                        eax_10 = nullptr
                    
                    ecx_6 = eax_10 + 3
                    
                    if (edi_2 != 0)
                        eax_13 = ebx[8] * arg3 + (edx_3 + arg4 - 1) * ebx[5] + edi_2 + 3
                    else
                        eax_13 = edi_2 + 3
                
                edx_3.b = *eax_13
                edx_3.b -= *ecx_6
                void* ecx_10 = &ecx_6[esi_4]
                *ebp_7 = edx_3.b
                void* ebp_8 = &ebp_7[1]
                void* eax_23 = &eax_13[esi_4]
                void* edi_5 = ecx_10 - esi_4
                
                if (arg5 s> 1)
                    int32_t i_2 = arg5 - 1
                    int32_t i_1
                    
                    do
                        ebp_8 += 1
                        *(ebp_8 - 1) = ((zx.d(*edi_5) + zx.d(*eax_23)) s>> 1).b - *ecx_10
                        edi_5 += esi_4
                        eax_23 += esi_4
                        ecx_10 += esi_4
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                    ebx = arg2
                
                if (arg7 s> 0)
                    sub_6bc670(ebp_8, 0, arg7)
                
                ecx_1 = var_10
                var_8_1 += ecx_1
                void* eax_26 = var_c + 1
                var_c = eax_26
                
                if (eax_26 s>= arg6)
                    break
                
                edx_3 = var_c
        
        if (arg8 s> 0 && ecx_1 s> 0)
            sub_6bc670((arg6 + arg8 - 1) * ecx_1 + *arg1, 0, ecx_1)
        
        int128_t* eax_29
        eax_29.b = 1
        return eax_29

eax.b = 0
return eax
