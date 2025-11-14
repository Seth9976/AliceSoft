// 函数: sub_552a90
// 地址: 0x552a90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edx = arg1
int32_t i = 0
int32_t i_2 = 0

if (((*(edx + 0xc) - *(edx + 8)) & 0xfffffffc) s> 0)
    do
        int32_t* eax = *(edx + 8) + (i << 2)
        int32_t lpMem = 0
        
        if (*eax != 0)
            int32_t* esi_1 = *eax
            int32_t eax_1 = esi_1[3]
            
            if (eax_1 == 0 || eax_1 == 1 || eax_1 == 4)
                int32_t* eax_2 = esi_1[7]
                
                if (eax_2 s< 0 || eax_2 u>= (*(arg2 + 0xe0) - *(arg2 + 0xdc)) s>> 4)
                label_552d15:
                    eax_2.b = 0
                    return eax_2
                
                int32_t eax_3 = eax_2 << 4
                eax_2 = eax_3 + *(arg2 + 0xdc)
                
                if (eax_3 == neg.d(*(arg2 + 0xdc)))
                    goto label_552d15
                
                int32_t ecx_4 = *eax_2
                int32_t lpMem_1 = 0
                int32_t var_8_1 = 0
                int32_t var_4_1 = 0
                
                if (ecx_4 == 0)
                    void* edi_3 = eax_2[2]
                    int32_t eax_15
                    int32_t edx_13
                    edx_13:eax_15 = muls.dp.d(0x2e8ba2e9, *(edi_3 + 0x40) - *(edi_3 + 0x3c))
                    int32_t edx_14 = edx_13 s>> 3
                    int32_t j = 0
                    
                    if ((edx_14 u>> 0x1f) + edx_14 s> 0)
                        int32_t edx_17
                        
                        do
                            sub_427a60(&lpMem_1, *(lpMem + *(edi_3 + 0x3c) + 0x1c))
                            int32_t eax_19
                            int32_t edx_16
                            edx_16:eax_19 = muls.dp.d(0x2e8ba2e9, *(edi_3 + 0x40) - *(edi_3 + 0x3c))
                            edx_17 = edx_16 s>> 3
                            j += 1
                            lpMem += 0x2c
                        while (j s< (edx_17 u>> 0x1f) + edx_17)
                        lpMem = lpMem_1
                else if (ecx_4 == 1)
                    void* edi_2 = eax_2[1]
                    int32_t eax_12
                    int32_t edx_8
                    edx_8:eax_12 = muls.dp.d(0x2e8ba2e9, *(edi_2 + 0x38) - *(edi_2 + 0x34))
                    int32_t edx_9 = edx_8 s>> 3
                    int32_t j_1 = 0
                    
                    if ((edx_9 u>> 0x1f) + edx_9 s> 0)
                        int32_t edx_12
                        
                        do
                            sub_427a60(&lpMem_1, *(lpMem + *(edi_2 + 0x34) + 0x1c))
                            int32_t eax_14
                            int32_t edx_11
                            edx_11:eax_14 = muls.dp.d(0x2e8ba2e9, *(edi_2 + 0x38) - *(edi_2 + 0x34))
                            edx_12 = edx_11 s>> 3
                            j_1 += 1
                            lpMem += 0x2c
                        while (j_1 s< (edx_12 u>> 0x1f) + edx_12)
                        lpMem = lpMem_1
                else
                    if (ecx_4 != 2)
                        goto label_552d15
                    
                    int32_t* edi_1 = eax_2[3]
                    int32_t esi_2 = *edi_1
                    int32_t eax_4
                    int32_t edx_4
                    edx_4:eax_4 = muls.dp.d(0x2e8ba2e9, edi_1[1] - esi_2)
                    int32_t edx_5 = edx_4 s>> 3
                    int32_t j_2 = 0
                    
                    if ((edx_5 u>> 0x1f) + edx_5 s> 0)
                        int32_t edx_7
                        
                        do
                            sub_427a60(&lpMem_1, *(lpMem + esi_2 + 0x1c))
                            esi_2 = *edi_1
                            int32_t eax_8
                            int32_t edx_6
                            edx_6:eax_8 = muls.dp.d(0x2e8ba2e9, edi_1[1] - esi_2)
                            edx_7 = edx_6 s>> 3
                            j_2 += 1
                            lpMem += 0x2c
                        while (j_2 s< (edx_7 u>> 0x1f) + edx_7)
                        lpMem = lpMem_1
                
                eax_2 = nullptr
                
                if (var_8_1 s> 0)
                    do
                        switch (*(lpMem + (eax_2 << 2)) - 0x12)
                            case 0, 1, 2, 3, 4, 5, 6, 7, 0xd, 0xe, 0x21, 0x22
                                int32_t ecx_31 = esi_1[1]
                                
                                if (eax_2 u>= ecx_31 u>> 2)
                                    if (lpMem != 0)
                                        HeapFree(data_797df0, HEAP_NONE, lpMem)
                                    
                                    goto label_552d15
                                
                                if (ecx_31 != 0)
                                    ecx_31 = *esi_1
                                
                                *(ecx_31 + (eax_2 << 2)) = 0xffffffff
                        
                        eax_2 += 1
                    while (eax_2 s< var_8_1)
                
                if (lpMem != 0)
                    HeapFree(data_797df0, HEAP_NONE, lpMem)
                
                edx = arg1
        
        i = i_2 + 1
        i_2 = i
    while (i s< (*(edx + 0xc) - *(edx + 8)) s>> 2)

int32_t i_1 = 0

if (((*(edx + 0xc) - *(edx + 8)) & 0xfffffffc) s> 0)
    do
        int32_t ecx_37 = *(edx + 8)
        
        if (*(ecx_37 + (i_1 << 2)) != 0)
            *(*(ecx_37 + (i_1 << 2)) + 0x10) = 1
        
        i_1 += 1
    while (i_1 s< (*(edx + 0xc) - *(edx + 8)) s>> 2)

i_1.b = 1
return i_1
