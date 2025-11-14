// 函数: sub_4fe500
// 地址: 0x4fe500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_17 = *(arg2 + 8)

if (ecx_17 u>= 0xccccccb)
    sub_4fd080(&arg5[4])
    int32_t* __saved_ebx_1 = arg5
    sub_6b4d5b()
    sub_6b47bf("map/set<T> too long")
    noreturn

*(arg2 + 8) = ecx_17 + 1
arg5[1] = arg1
void* ecx_1 = *(arg2 + 4)

if (arg1 == ecx_1)
    *(ecx_1 + 4) = arg5
    **(arg2 + 4) = arg5
    *(*(arg2 + 4) + 8) = arg5
else if (arg4 == 0)
    arg1[2] = arg5
    void* ecx_4 = *(arg2 + 4)
    
    if (arg1 == *(ecx_4 + 8))
        *(ecx_4 + 8) = arg5
else
    *arg1 = arg5
    void** ecx_3 = *(arg2 + 4)
    
    if (arg1 == *ecx_3)
        *ecx_3 = arg5

int32_t* esi = arg5

if (*(arg5[1] + 0x20) == 0)
    do
        int32_t* eax_2 = esi[1]
        int32_t* ecx_5 = eax_2[1]
        int32_t* eax_6
        int32_t** ecx_10
        
        if (eax_2 != *ecx_5)
            int32_t ecx_11 = *ecx_5
            
            if (*(ecx_11 + 0x20) != 0)
                if (esi == *eax_2)
                    esi = eax_2
                    sub_54e960(esi, arg2)
                
                *(esi[1] + 0x20) = 1
                *(*(esi[1] + 4) + 0x20) = 0
                eax_6 = *(esi[1] + 4)
                ecx_10 = eax_6[2]
                eax_6[2] = *ecx_10
                int32_t* edx_13 = *ecx_10
                
                if (*(edx_13 + 0x21) == 0)
                    edx_13[1] = eax_6
                
                ecx_10[1] = eax_6[1]
                void* edx_15 = *(arg2 + 4)
                
                if (eax_6 != *(edx_15 + 4))
                    int32_t*** edx_16 = eax_6[1]
                    
                    if (eax_6 != *edx_16)
                        edx_16[2] = ecx_10
                    else
                        *edx_16 = ecx_10
                else
                    *(edx_15 + 4) = ecx_10
                
                *ecx_10 = eax_6
                eax_6[1] = ecx_10
            else
                eax_2[8].b = 1
                *(ecx_11 + 0x20) = 1
                *(*(esi[1] + 4) + 0x20) = 0
                esi = *(esi[1] + 4)
        else
            void* ecx_6 = ecx_5[2]
            
            if (*(ecx_6 + 0x20) != 0)
                if (esi == eax_2[2])
                    esi = eax_2
                    sub_58c2a0(esi, arg2)
                
                *(esi[1] + 0x20) = 1
                *(*(esi[1] + 4) + 0x20) = 0
                eax_6 = *(esi[1] + 4)
                ecx_10 = *eax_6
                *eax_6 = ecx_10[2]
                void* edx_6 = ecx_10[2]
                
                if (*(edx_6 + 0x21) == 0)
                    *(edx_6 + 4) = eax_6
                
                ecx_10[1] = eax_6[1]
                void* edx_8 = *(arg2 + 4)
                
                if (eax_6 != *(edx_8 + 4))
                    void** edx_9 = eax_6[1]
                    
                    if (eax_6 != edx_9[2])
                        *edx_9 = ecx_10
                        ecx_10[2] = eax_6
                    else
                        edx_9[2] = ecx_10
                        ecx_10[2] = eax_6
                else
                    *(edx_8 + 4) = ecx_10
                    ecx_10[2] = eax_6
                
                eax_6[1] = ecx_10
            else
                eax_2[8].b = 1
                *(ecx_6 + 0x20) = 1
                *(*(esi[1] + 4) + 0x20) = 0
                esi = *(esi[1] + 4)
    while (*(esi[1] + 0x20) == 0)

*(*(*(arg2 + 4) + 4) + 0x20) = 1
*arg3 = arg5
return arg3
