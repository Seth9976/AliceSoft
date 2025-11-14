// 函数: sub_54ebd0
// 地址: 0x54ebd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = *(arg1 + 8)

if (ecx u>= 0xccccccb)
    int32_t* eax = arg5[4]
    
    if (eax != 0)
        sub_405780(eax, arg5[5])
        int32_t __saved_ebx_1 = arg5[4]
        sub_6b4d5b()
    
    int32_t* __saved_ebx_2 = arg5
    arg5[4] = 0
    arg5[5] = 0
    arg5[6] = 0
    sub_6b4d5b()
    sub_6b47bf("map/set<T> too long")
    noreturn

*(arg1 + 8) = ecx + 1
arg5[1] = arg2
void* ecx_2 = *(arg1 + 4)

if (arg2 == ecx_2)
    *(ecx_2 + 4) = arg5
    **(arg1 + 4) = arg5
    *(*(arg1 + 4) + 8) = arg5
else if (arg4 == 0)
    arg2[2] = arg5
    void* ecx_5 = *(arg1 + 4)
    
    if (arg2 == *(ecx_5 + 8))
        *(ecx_5 + 8) = arg5
else
    *arg2 = arg5
    void** ecx_4 = *(arg1 + 4)
    
    if (arg2 == *ecx_4)
        *ecx_4 = arg5

int32_t* esi = arg5

if (*(arg5[1] + 0x20) == 0)
    do
        int32_t* eax_3 = esi[1]
        int32_t* ecx_6 = eax_3[1]
        int32_t* eax_7
        int32_t** ecx_11
        
        if (eax_3 != *ecx_6)
            int32_t ecx_12 = *ecx_6
            
            if (*(ecx_12 + 0x20) != 0)
                if (esi == *eax_3)
                    esi = eax_3
                    sub_54e960(esi, arg1)
                
                *(esi[1] + 0x20) = 1
                *(*(esi[1] + 4) + 0x20) = 0
                eax_7 = *(esi[1] + 4)
                ecx_11 = eax_7[2]
                eax_7[2] = *ecx_11
                int32_t* edx_13 = *ecx_11
                
                if (*(edx_13 + 0x21) == 0)
                    edx_13[1] = eax_7
                
                ecx_11[1] = eax_7[1]
                void* edx_15 = *(arg1 + 4)
                
                if (eax_7 != *(edx_15 + 4))
                    int32_t*** edx_16 = eax_7[1]
                    
                    if (eax_7 != *edx_16)
                        edx_16[2] = ecx_11
                    else
                        *edx_16 = ecx_11
                else
                    *(edx_15 + 4) = ecx_11
                
                *ecx_11 = eax_7
                eax_7[1] = ecx_11
            else
                eax_3[8].b = 1
                *(ecx_12 + 0x20) = 1
                *(*(esi[1] + 4) + 0x20) = 0
                esi = *(esi[1] + 4)
        else
            void* ecx_7 = ecx_6[2]
            
            if (*(ecx_7 + 0x20) != 0)
                if (esi == eax_3[2])
                    esi = eax_3
                    sub_58c2a0(esi, arg1)
                
                *(esi[1] + 0x20) = 1
                *(*(esi[1] + 4) + 0x20) = 0
                eax_7 = *(esi[1] + 4)
                ecx_11 = *eax_7
                *eax_7 = ecx_11[2]
                void* edx_6 = ecx_11[2]
                
                if (*(edx_6 + 0x21) == 0)
                    *(edx_6 + 4) = eax_7
                
                ecx_11[1] = eax_7[1]
                void* edx_8 = *(arg1 + 4)
                
                if (eax_7 != *(edx_8 + 4))
                    void** edx_9 = eax_7[1]
                    
                    if (eax_7 != edx_9[2])
                        *edx_9 = ecx_11
                        ecx_11[2] = eax_7
                    else
                        edx_9[2] = ecx_11
                        ecx_11[2] = eax_7
                else
                    *(edx_8 + 4) = ecx_11
                    ecx_11[2] = eax_7
                
                eax_7[1] = ecx_11
            else
                eax_3[8].b = 1
                *(ecx_7 + 0x20) = 1
                *(*(esi[1] + 4) + 0x20) = 0
                esi = *(esi[1] + 4)
    while (*(esi[1] + 0x20) == 0)

*(*(*(arg1 + 4) + 4) + 0x20) = 1
*arg3 = arg5
return arg3
