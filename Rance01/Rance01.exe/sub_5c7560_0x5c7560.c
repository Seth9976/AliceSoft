// 函数: sub_5c7560
// 地址: 0x5c7560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i_11 = arg5 + arg7
int32_t* ebx = arg2
void* eax_2
int32_t edx
edx:eax_2 = sx.q(ebx[4])
char* ecx = *arg1
int32_t edx_3 = *ebx
int32_t ebp_1 = (eax_2 + (edx & 7)) s>> 3
char* eax_3

if (edx_3 != 0)
    void* eax_5 = ebx[5] * arg4
    int32_t esi_3 = ebx[8] * arg3 + edx_3
    eax_3 = eax_5 + esi_3
    
    if (eax_5 != neg.d(esi_3))
        *ecx = *eax_3
        ecx[1] = eax_3[1]
        void* eax_6 = &eax_3[ebp_1]
        ecx[2] = eax_3[2]
        void* ecx_1 = &ecx[3]
        void* esi_5 = eax_6 - ebp_1
        int32_t i_9
        int32_t i_10 = i_9
        
        if (arg5 s> 1)
            i_9 = arg5 - 1
            int32_t i
            
            do
                ecx_1 += 3
                *(ecx_1 - 3) = *esi_5 - *eax_6
                *(ecx_1 - 2) = *(esi_5 + 1) - *(eax_6 + 1)
                char edx_10 = *(esi_5 + 2) - *(eax_6 + 2)
                esi_5 += ebp_1
                *(ecx_1 - 1) = edx_10
                eax_6 += ebp_1
                i = i_9
                i_9 -= 1
            while (i != 1)
        
        int32_t i_6 = arg7
        
        if (i_6 s> 0)
            int32_t i_1
            
            do
                *ecx_1 = 0
                *(ecx_1 + 2) = 0
                ecx_1 += 3
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
        
        int32_t esi_6 = 1
        int32_t var_14 = 1
        
        if (arg6 s> 1)
            int32_t eax_8 = i_11 * 3
            int32_t var_10_1 = eax_8
            
            while (true)
                int32_t eax_10 = *ebx
                char* edx_11
                
                if (eax_10 != 0)
                    edx_11 = ebx[8] * arg3 + (esi_6 + arg4) * ebx[5] + eax_10
                else
                    edx_11 = nullptr
                
                char* esi_7
                
                if (eax_10 != 0)
                    esi_7 = ebx[8] * arg3 + (esi_6 + arg4 - 1) * ebx[5] + eax_10
                else
                    esi_7 = nullptr
                
                void* ecx_4 = *arg1 + var_10_1 + 3
                *(ecx_4 - 3) = *esi_7 - *edx_11
                *(ecx_4 - 2) = esi_7[1] - edx_11[1]
                void* edx_15 = &edx_11[ebp_1]
                *(ecx_4 - 1) = esi_7[2] - edx_11[2]
                void* esi_10 = &esi_7[ebp_1]
                void* edi_9 = edx_15 - ebp_1
                
                if (arg5 s> 1)
                    int32_t i_5 = arg5 - 1
                    int32_t i_2
                    
                    do
                        ecx_4 += 3
                        *(ecx_4 - 3) = ((zx.d(*edi_9) + zx.d(*esi_10)) s>> 1).b - *edx_15
                        *(ecx_4 - 2) =
                            ((zx.d(*(edi_9 + 1)) + zx.d(*(esi_10 + 1))) s>> 1).b - *(edx_15 + 1)
                        char eax_24 =
                            ((zx.d(*(edi_9 + 2)) + zx.d(*(esi_10 + 2))) s>> 1).b - *(edx_15 + 2)
                        edi_9 += ebp_1
                        *(ecx_4 - 1) = eax_24
                        esi_10 += ebp_1
                        edx_15 += ebp_1
                        i_2 = i_5
                        i_5 -= 1
                    while (i_2 != 1)
                    ebx = arg2
                
                int32_t i_7 = arg7
                
                if (i_7 s> 0)
                    int32_t i_3
                    
                    do
                        *ecx_4 = 0
                        *(ecx_4 + 2) = 0
                        ecx_4 += 3
                        i_3 = i_7
                        i_7 -= 1
                    while (i_3 != 1)
                
                var_10_1 += eax_8
                int32_t eax_26 = var_14 + 1
                var_14 = eax_26
                
                if (eax_26 s>= arg6)
                    break
                
                esi_6 = var_14
        
        int16_t* eax_30
        
        if (arg8 s> 0)
            int32_t i_8 = i_11
            eax_30 = (arg6 + arg8 - 1) * i_8 * 3 + *arg1
            
            if (i_8 s> 0)
                int32_t i_4
                
                do
                    *eax_30 = 0
                    eax_30[1].b = 0
                    eax_30 += 3
                    i_4 = i_8
                    i_8 -= 1
                while (i_4 != 1)
        
        eax_30.b = 1
        return eax_30

eax_3.b = 0
return eax_3
