// 函数: sub_58d030
// 地址: 0x58d030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_15 = *(arg2 + 8)

if (ecx_15 u>= 0xccccccb)
    int32_t __saved_ebx_3 = arg5[3]
    
    if (__saved_ebx_3 != 0)
        int32_t __saved_ebx_1 = __saved_ebx_3
        sub_6b4d5b()
    
    int32_t* __saved_ebx_2 = arg5
    arg5[3] = 0
    arg5[4] = 0
    arg5[5] = 0
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

int32_t* esi = arg5

if (*(arg5[1] + 0x20) == 0)
    do
        int32_t* eax_1 = esi[1]
        int32_t* ecx_4 = eax_1[1]
        int32_t* eax_3
        int32_t ecx_5
        int32_t** ecx_9
        
        if (eax_1 != *ecx_4)
            ecx_5 = *ecx_4
            
            if (*(ecx_5 + 0x20) != 0)
                if (esi == *eax_1)
                    esi = eax_1
                    sub_54e960(esi, arg2)
                
                *(esi[1] + 0x20) = 1
                *(*(esi[1] + 4) + 0x20) = 0
                eax_3 = *(esi[1] + 4)
                ecx_9 = eax_3[2]
                eax_3[2] = *ecx_9
                int32_t* edx_10 = *ecx_9
                
                if (*(edx_10 + 0x21) == 0)
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
            label_58d146:
                eax_1[8].b = 1
                *(ecx_5 + 0x20) = 1
                *(*(esi[1] + 4) + 0x20) = 0
                esi = *(esi[1] + 4)
        else
            ecx_5 = ecx_4[2]
            
            if (*(ecx_5 + 0x20) == 0)
                goto label_58d146
            
            if (esi == eax_1[2])
                esi = eax_1
                sub_58c2a0(esi, arg2)
            
            *(esi[1] + 0x20) = 1
            *(*(esi[1] + 4) + 0x20) = 0
            eax_3 = *(esi[1] + 4)
            ecx_9 = *eax_3
            *eax_3 = ecx_9[2]
            void* edx_3 = ecx_9[2]
            
            if (*(edx_3 + 0x21) == 0)
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
    while (*(esi[1] + 0x20) == 0)

*(*(*(arg2 + 4) + 4) + 0x20) = 1
*arg3 = arg5
return arg3
