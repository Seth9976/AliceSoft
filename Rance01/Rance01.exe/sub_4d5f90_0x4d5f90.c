// 函数: sub_4d5f90
// 地址: 0x4d5f90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_17 = *(arg2 + 8)

if (ecx_17 u>= 0x5d1745c)
    sub_4bd230(&arg5[0xa])
    
    if (arg5[8] u>= 0x10)
        int32_t __saved_ebx_1 = arg5[3]
        sub_6b4d5b()
    
    arg5[8] = 0xf
    arg5[7] = 0
    int32_t* __saved_ebx_2 = arg5
    arg5[3].b = 0
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

int32_t* esi_1 = arg5

if (*(arg5[1] + 0x38) == 0)
    do
        int32_t* eax_2 = esi_1[1]
        int32_t* ecx_5 = eax_2[1]
        int32_t* eax_6
        int32_t** ecx_10
        
        if (eax_2 != *ecx_5)
            int32_t ecx_11 = *ecx_5
            
            if (*(ecx_11 + 0x38) != 0)
                if (esi_1 == *eax_2)
                    esi_1 = eax_2
                    sub_4d5150(esi_1, arg2)
                
                *(esi_1[1] + 0x38) = 1
                *(*(esi_1[1] + 4) + 0x38) = 0
                eax_6 = *(esi_1[1] + 4)
                ecx_10 = eax_6[2]
                eax_6[2] = *ecx_10
                int32_t* edx_13 = *ecx_10
                
                if (*(edx_13 + 0x39) == 0)
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
                eax_2[0xe].b = 1
                *(ecx_11 + 0x38) = 1
                *(*(esi_1[1] + 4) + 0x38) = 0
                esi_1 = *(esi_1[1] + 4)
        else
            void* ecx_6 = ecx_5[2]
            
            if (*(ecx_6 + 0x38) != 0)
                if (esi_1 == eax_2[2])
                    esi_1 = eax_2
                    sub_4d51a0(esi_1, arg2)
                
                *(esi_1[1] + 0x38) = 1
                *(*(esi_1[1] + 4) + 0x38) = 0
                eax_6 = *(esi_1[1] + 4)
                ecx_10 = *eax_6
                *eax_6 = ecx_10[2]
                void* edx_6 = ecx_10[2]
                
                if (*(edx_6 + 0x39) == 0)
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
                eax_2[0xe].b = 1
                *(ecx_6 + 0x38) = 1
                *(*(esi_1[1] + 4) + 0x38) = 0
                esi_1 = *(esi_1[1] + 4)
    while (*(esi_1[1] + 0x38) == 0)

*(*(*(arg2 + 4) + 4) + 0x38) = 1
*arg3 = arg5
return arg3
