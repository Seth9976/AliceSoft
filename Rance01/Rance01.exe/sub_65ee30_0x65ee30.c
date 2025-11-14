// 函数: sub_65ee30
// 地址: 0x65ee30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (data_797e70 u>= 0x1ffffffe)
    int32_t* __saved_ebx = arg2
    sub_6b4d5b()
    sub_6b47bf("map/set<T> too long")
    noreturn

data_797e70 += 1
arg2[1] = arg1
void* ecx = data_797e6c

if (arg1 == ecx)
    *(ecx + 4) = arg2
    *data_797e6c = arg2
    *(data_797e6c + 8) = arg2
else if (arg4 == 0)
    arg1[2] = arg2
    void* ecx_1 = data_797e6c
    
    if (arg1 == *(ecx_1 + 8))
        *(ecx_1 + 8) = arg2
else
    *arg1 = arg2
    int32_t* ecx_2 = data_797e6c
    
    if (arg1 == *ecx_2)
        *ecx_2 = arg2

int32_t* esi = arg2

if (*(arg2[1] + 0x14) == 0)
    do
        int32_t* eax_1 = esi[1]
        int32_t* ecx_3 = eax_1[1]
        int32_t* eax_4
        int32_t** ecx_9
        
        if (eax_1 != *ecx_3)
            int32_t ecx_10 = *ecx_3
            
            if (*(ecx_10 + 0x14) != 0)
                if (esi == *eax_1)
                    esi = eax_1
                    sub_65ead0(esi)
                
                *(esi[1] + 0x14) = 1
                *(*(esi[1] + 4) + 0x14) = 0
                eax_4 = *(esi[1] + 4)
                ecx_9 = eax_4[2]
                eax_4[2] = *ecx_9
                int32_t* edx_11 = *ecx_9
                
                if (*(edx_11 + 0x15) == 0)
                    edx_11[1] = eax_4
                
                ecx_9[1] = eax_4[1]
                void* edx_13 = data_797e6c
                
                if (eax_4 != *(edx_13 + 4))
                    int32_t*** edx_14 = eax_4[1]
                    
                    if (eax_4 != *edx_14)
                        edx_14[2] = ecx_9
                    else
                        *edx_14 = ecx_9
                else
                    *(edx_13 + 4) = ecx_9
                
                *ecx_9 = eax_4
                eax_4[1] = ecx_9
            else
                eax_1[5].b = 1
                *(ecx_10 + 0x14) = 1
                *(*(esi[1] + 4) + 0x14) = 0
                esi = *(esi[1] + 4)
        else
            void* ecx_4 = ecx_3[2]
            
            if (*(ecx_4 + 0x14) != 0)
                if (esi == eax_1[2])
                    esi = eax_1
                    sub_65ea80(esi)
                
                *(esi[1] + 0x14) = 1
                *(*(esi[1] + 4) + 0x14) = 0
                eax_4 = *(esi[1] + 4)
                ecx_9 = *eax_4
                *eax_4 = ecx_9[2]
                void* edx_4 = ecx_9[2]
                
                if (*(edx_4 + 0x15) == 0)
                    *(edx_4 + 4) = eax_4
                
                ecx_9[1] = eax_4[1]
                void* edx_6 = data_797e6c
                
                if (eax_4 != *(edx_6 + 4))
                    void** edx_7 = eax_4[1]
                    
                    if (eax_4 != edx_7[2])
                        *edx_7 = ecx_9
                        ecx_9[2] = eax_4
                    else
                        edx_7[2] = ecx_9
                        ecx_9[2] = eax_4
                else
                    *(edx_6 + 4) = ecx_9
                    ecx_9[2] = eax_4
                
                eax_4[1] = ecx_9
            else
                eax_1[5].b = 1
                *(ecx_4 + 0x14) = 1
                *(*(esi[1] + 4) + 0x14) = 0
                esi = *(esi[1] + 4)
    while (*(esi[1] + 0x14) == 0)

void* edx_15 = *(data_797e6c + 4)
*arg3 = arg2
*(edx_15 + 0x14) = 1
return arg3
