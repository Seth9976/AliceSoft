// 函数: sub_406130
// 地址: 0x406130
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_15 = *(arg2 + 8)

if (ecx_15 u>= 0x28f5c27)
    sub_405300(&arg5[3])
    int32_t* __saved_ebx = arg5
    sub_6b4d5b()
    sub_6b47bf("map/set<T> too long")
    noreturn

*(arg2 + 8) = ecx_15 + 1
arg5[1] = arg1
void* ecx_1 = *(arg2 + 4)

if (arg1 == ecx_1)
    *(ecx_1 + 4) = arg5
    **(arg2 + 4) = arg5
    *(*(arg2 + 4) + 8) = arg5
else if (arg4 == 0)
    arg1[2] = arg5
    void* ecx_2 = *(arg2 + 4)
    
    if (arg1 == *(ecx_2 + 8))
        *(ecx_2 + 8) = arg5
else
    *arg1 = arg5
    void** ecx_3 = *(arg2 + 4)
    
    if (arg1 == *ecx_3)
        *ecx_3 = arg5

int32_t* esi_1 = arg5

if (*(arg5[1] + 0x70) == 0)
    do
        int32_t* eax_1 = esi_1[1]
        int32_t* ecx_4 = eax_1[1]
        int32_t* eax_3
        int32_t ecx_5
        int32_t** ecx_9
        
        if (eax_1 != *ecx_4)
            ecx_5 = *ecx_4
            
            if (*(ecx_5 + 0x70) != 0)
                if (esi_1 == *eax_1)
                    esi_1 = eax_1
                    sub_405bd0(esi_1, arg2)
                
                *(esi_1[1] + 0x70) = 1
                *(*(esi_1[1] + 4) + 0x70) = 0
                eax_3 = *(esi_1[1] + 4)
                ecx_9 = eax_3[2]
                eax_3[2] = *ecx_9
                int32_t* edx_10 = *ecx_9
                
                if (*(edx_10 + 0x71) == 0)
                    edx_10[1] = eax_3
                
                ecx_9[1] = eax_3[1]
                void* edx_12 = *(arg2 + 4)
                
                if (eax_3 != *(edx_12 + 4))
                    int32_t*** edx_13 = eax_3[1]
                    
                    if (eax_3 != *edx_13)
                        edx_13[2] = ecx_9
                    else
                        *edx_13 = ecx_9
                else
                    *(edx_12 + 4) = ecx_9
                
                *ecx_9 = eax_3
                eax_3[1] = ecx_9
            else
            label_406236:
                eax_1[0x1c].b = 1
                *(ecx_5 + 0x70) = 1
                *(*(esi_1[1] + 4) + 0x70) = 0
                esi_1 = *(esi_1[1] + 4)
        else
            ecx_5 = ecx_4[2]
            
            if (*(ecx_5 + 0x70) == 0)
                goto label_406236
            
            if (esi_1 == eax_1[2])
                esi_1 = eax_1
                sub_405b80(esi_1, arg2)
            
            *(esi_1[1] + 0x70) = 1
            *(*(esi_1[1] + 4) + 0x70) = 0
            eax_3 = *(esi_1[1] + 4)
            ecx_9 = *eax_3
            *eax_3 = ecx_9[2]
            void* edx_3 = ecx_9[2]
            
            if (*(edx_3 + 0x71) == 0)
                *(edx_3 + 4) = eax_3
            
            ecx_9[1] = eax_3[1]
            void* edx_5 = *(arg2 + 4)
            
            if (eax_3 != *(edx_5 + 4))
                void** edx_6 = eax_3[1]
                
                if (eax_3 != edx_6[2])
                    *edx_6 = ecx_9
                    ecx_9[2] = eax_3
                else
                    edx_6[2] = ecx_9
                    ecx_9[2] = eax_3
            else
                *(edx_5 + 4) = ecx_9
                ecx_9[2] = eax_3
            
            eax_3[1] = ecx_9
    while (*(esi_1[1] + 0x70) == 0)

*(*(*(arg2 + 4) + 4) + 0x70) = 1
*arg3 = arg5
return arg3
