// 函数: sub_610030
// 地址: 0x610030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_17 = *(arg2 + 8)

if (ecx_17 u>= 0x1af286a)
    sub_607f00(&arg5[0xa])
    
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

if (*(arg5[1] + 0xa4) == 0)
    do
        int32_t* eax_2 = esi_1[1]
        int32_t* ecx_5 = eax_2[1]
        
        if (eax_2 != *ecx_5)
            int32_t ecx_11 = *ecx_5
            
            if (*(ecx_11 + 0xa4) != 0)
                if (esi_1 == *eax_2)
                    esi_1 = eax_2
                    sub_60fc50(esi_1, arg2)
                
                *(esi_1[1] + 0xa4) = 1
                *(*(esi_1[1] + 4) + 0xa4) = 0
                void* eax_9 = *(esi_1[1] + 4)
                int32_t* ecx_15 = *(eax_9 + 8)
                *(eax_9 + 8) = *ecx_15
                void* edx_9 = *ecx_15
                
                if (*(edx_9 + 0xa5) == 0)
                    *(edx_9 + 4) = eax_9
                
                ecx_15[1] = *(eax_9 + 4)
                void* edx_11 = *(arg2 + 4)
                
                if (eax_9 != *(edx_11 + 4))
                    int32_t** edx_12 = *(eax_9 + 4)
                    
                    if (eax_9 != *edx_12)
                        edx_12[2] = ecx_15
                    else
                        *edx_12 = ecx_15
                else
                    *(edx_11 + 4) = ecx_15
                
                *ecx_15 = eax_9
                *(eax_9 + 4) = ecx_15
            else
                eax_2[0x29].b = 1
                *(ecx_11 + 0xa4) = 1
                *(*(esi_1[1] + 4) + 0xa4) = 0
                esi_1 = *(esi_1[1] + 4)
        else
            void* ecx_6 = ecx_5[2]
            
            if (*(ecx_6 + 0xa4) != 0)
                if (esi_1 == eax_2[2])
                    esi_1 = eax_2
                    sub_60fc00(esi_1, arg2)
                
                *(esi_1[1] + 0xa4) = 1
                *(*(esi_1[1] + 4) + 0xa4) = 0
                sub_60fc50(*(esi_1[1] + 4), arg2)
            else
                eax_2[0x29].b = 1
                *(ecx_6 + 0xa4) = 1
                *(*(esi_1[1] + 4) + 0xa4) = 0
                esi_1 = *(esi_1[1] + 4)
    while (*(esi_1[1] + 0xa4) == 0)

*(*(*(arg2 + 4) + 4) + 0xa4) = 1
*arg3 = arg5
return arg3
