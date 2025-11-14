// 函数: sub_4152d0
// 地址: 0x4152d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = arg1[3]
int32_t* i = *eax

if (i != eax)
    do
        int32_t* esi_1 = i[4]
        
        if (esi_1 != 0)
            if (arg1[1] != 0)
                (*(*arg1[1] + 4))(esi_1)
            
            int32_t j = *arg1
            
            if (j != 0)
                int32_t eax_2 = esi_1[6]
                int32_t* ecx_2 = esi_1[5]
                
                if (ecx_2 != eax_2)
                    while (*ecx_2 != j)
                        ecx_2 = &ecx_2[1]
                        
                        if (ecx_2 == eax_2)
                            break
                    
                    if (ecx_2 != eax_2)
                        sub_6b49d0(ecx_2, &ecx_2[1], ((eax_2 - &ecx_2[1]) s>> 2) * 4)
                        esi_1[6] -= 4
            
            (*(*esi_1 + 4))()
        
        if (*(i + 0x15) == 0)
            int32_t* i_2 = i[2]
            
            if (*(i_2 + 0x15) != 0)
                int32_t* i_1 = i[1]
                
                if (*(i_1 + 0x15) == 0)
                    while (i == i_1[2])
                        i = i_1
                        i_1 = i_1[1]
                        
                        if (*(i_1 + 0x15) != 0)
                            break
                
                i = i_1
            else
                int32_t* i_3 = *i_2
                
                while (*(i_3 + 0x15) == 0)
                    i_2 = i_3
                    i_3 = *i_2
                
                i = i_2
    while (i != arg1[3])

int128_t* ecx_4 = arg1[7]
int128_t* esi_2 = arg1[6]

if (esi_2 != ecx_4)
    int32_t edi = 0 s>> 2 << 2
    sub_6b49d0(esi_2, ecx_4, edi)
    arg1[7] = edi + esi_2

void** ebx_1 = *(arg1[3] + 4)
void** esi_3 = ebx_1

if (*(ebx_1 + 0x15) == 0)
    do
        sub_402c20(esi_3[2])
        esi_3 = *esi_3
        void** var_10_5 = ebx_1
        sub_6b4d5b()
        ebx_1 = esi_3
    while (*(esi_3 + 0x15) == 0)

void* eax_12 = arg1[3]
*(eax_12 + 4) = eax_12
int32_t* eax_13 = arg1[3]
*eax_13 = eax_13
void* result = arg1[3]
*(result + 8) = result
arg1[4] = 0
return result
