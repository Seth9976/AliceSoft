// 函数: sub_6e43e0
// 地址: 0x6e43e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edx = arg2

if (arg3 s>= *(arg1 + 0x30))
    int32_t eax_1 = *(arg1 + 0x34)
    
    if (eax_1 != 3)
        return eax_1

int32_t eax_2 = *(arg1 + 0x58)

if (eax_2 == 4 && *(arg1 + 0x34) == 5)
    eax_2 = edx[1]
    int32_t ecx_16 = edx[3]
    
    if (eax_2 s< ecx_16)
        int32_t ebx_13 = edx[2]
        int32_t esi_11 = eax_2 << 5
        int32_t ebp_4 = eax_2
        eax_2 = ecx_16
        void* edi_8 = arg5
        
        do
            int32_t ecx_17 = *edx
            
            if (ecx_17 s< ebx_13)
                void* eax_5 = edi_8 + esi_11
                
                do
                    edx.b = *(eax_5 + ecx_17)
                    *(*(arg1 + 0x3c) * ebp_4 + arg4 + (ecx_17 << 2)) = edx.b
                    ebx_13.b = *(eax_5 + ecx_17)
                    *(*(arg1 + 0x3c) * ebp_4 + arg4 + (ecx_17 << 2) + 1) = ebx_13.b
                    int32_t edx_10
                    edx_10.b = *(eax_5 + ecx_17)
                    *(*(arg1 + 0x3c) * ebp_4 + arg4 + (ecx_17 << 2) + 2) = edx_10.b
                    *(*(arg1 + 0x3c) * ebp_4 + arg4 + (ecx_17 << 2) + 3) = 0xff
                    ecx_17 += 1
                    ebx_13 = arg2[2]
                while (ecx_17 s< ebx_13)
                
                edi_8 = arg5
                edx = arg2
                eax_2 = edx[3]
            
            esi_11 += 0x20
            ebp_4 += 1
        while (ebp_4 s< eax_2)
else if ((eax_2 == 3 || eax_2 == 1) && *(arg1 + 0x34) == 5)
    if (arg3 s>= 3)
        eax_2 = edx[1]
        int32_t esi_8 = edx[3]
        
        if (eax_2 s< esi_8)
            int32_t ebx_8 = edx[2]
            
            do
                int32_t ecx_15 = *edx
                
                if (ecx_15 s< ebx_8)
                    do
                        *(eax_2 * *(arg1 + 0x3c) + arg4 + (ecx_15 << 2)) = 0xff
                        ecx_15 += 1
                        ebx_8 = edx[2]
                    while (ecx_15 s< ebx_8)
                    
                    esi_8 = edx[3]
                
                eax_2 += 1
            while (eax_2 s< esi_8)
    else
        int32_t esi_5 = edx[1]
        int32_t ebx_6 = edx[3]
        
        if (esi_5 s< ebx_6)
            int32_t ecx_11 = edx[2]
            eax_2 = esi_5 << 5
            void* edi_6 = arg5
            
            do
                int32_t ebp_3 = *edx
                
                if (ebp_3 s< ecx_11)
                    void* ebx_7 = edi_6 + eax_2
                    int32_t var_14_3 = eax_2
                    
                    do
                        eax_2.b = *(ebx_7 + ebp_3)
                        *(esi_5 * *(arg1 + 0x3c) + arg4 + (ebp_3 << 2)) = eax_2.b
                        ebp_3 += 1
                        ecx_11 = edx[2]
                    while (ebp_3 s< ecx_11)
                    
                    eax_2 = var_14_3
                    edi_6 = arg5
                    ebx_6 = edx[3]
                
                eax_2 += 0x20
                esi_5 += 1
            while (esi_5 s< ebx_6)
else if (eax_2 == 4 && *(arg1 + 0x34) == 1)
label_6e44aa:
    int32_t ebx_3 = edx[1]
    int32_t esi_3 = edx[3]
    
    if (ebx_3 s< esi_3)
        eax_2 = edx[2]
        int32_t ecx_6 = ebx_3 << 5
        void* edi_4 = arg5
        
        do
            int32_t ebp_2 = *edx
            
            if (ebp_2 s< eax_2)
                char* esi_4 = ebp_2 * 3
                int32_t ebx_4 = edi_4 + ecx_6
                
                do
                    eax_2.b = *(ebx_4 + ebp_2)
                    esi_4[*(arg1 + 0x3c) * ebx_3 + arg4] = eax_2.b
                    int32_t edx_3
                    edx_3.b = *(ebx_4 + ebp_2)
                    esi_4[*(arg1 + 0x3c) * ebx_3 + arg4 + 1] = edx_3.b
                    int32_t ecx_9
                    ecx_9.b = *(ebx_4 + ebp_2)
                    ebp_2 += 1
                    esi_4[*(arg1 + 0x3c) * ebx_3 + arg4 + 2] = ecx_9.b
                    esi_4 = &esi_4[3]
                    eax_2 = arg2[2]
                while (ebp_2 s< eax_2)
                
                edi_4 = arg5
                edx = arg2
                esi_3 = edx[3]
            
            ecx_6 += 0x20
            ebx_3 += 1
        while (ebx_3 s< esi_3)
else
    if (eax_2 == 4)
        eax_2 = *(arg1 + 0x34)
        
        if (eax_2 == 2)
            goto label_6e44aa
    
    int32_t esi_1 = edx[1]
    int32_t ebx_1 = edx[3]
    
    if (esi_1 s< ebx_1)
        int32_t ecx_1 = edx[2]
        eax_2 = esi_1 << 5
        void* edi_1 = arg5
        
        do
            int32_t ebp_1 = *edx
            
            if (ebp_1 s< ecx_1)
                char* ebx_2 = edi_1 + eax_2
                int32_t var_14_1 = eax_2
                
                do
                    eax_2.b = ebx_2[ebp_1]
                    char* edi_3 = *(arg1 + 0x30) * ebp_1
                    ebp_1 += 1
                    edi_3[esi_1 * *(arg1 + 0x3c) + arg4] = eax_2.b
                    ecx_1 = edx[2]
                while (ebp_1 s< ecx_1)
                
                eax_2 = var_14_1
                edi_1 = arg5
                ebx_1 = edx[3]
            
            eax_2 += 0x20
            esi_1 += 1
        while (esi_1 s< ebx_1)

return eax_2
