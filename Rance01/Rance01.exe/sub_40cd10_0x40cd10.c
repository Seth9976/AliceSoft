// 函数: sub_40cd10
// 地址: 0x40cd10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 0xc)
int32_t* i = *eax

if (i != eax)
    do
        int32_t* esi_1 = i[4]
        
        if (esi_1 != 0)
            *esi_1 -= 1
            
            if (*esi_1 s<= 0)
                int32_t* ecx_1 = esi_1[0x34]
                
                if (ecx_1 != 0)
                    (*(*ecx_1 + 4))()
                    esi_1[0x34] = 0
                
                int32_t* ecx_2 = esi_1[0x33]
                
                if (ecx_2 != 0)
                    (*(*ecx_2 + 4))()
                    esi_1[0x33] = 0
                
                int32_t* var_14_1 = esi_1
                sub_6b4d5b()
        
        if (*(i + 0x15) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0x15) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0x15) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0x15) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0x15) == 0)
                    i = i_2
                    i_2 = *i
    while (i != *(arg1 + 0xc))

void* edi = arg1 + 8
void** ebp_1 = *(*(arg1 + 0xc) + 4)
void** esi_2 = ebp_1

if (*(ebp_1 + 0x15) == 0)
    do
        sub_402c20(esi_2[2])
        esi_2 = *esi_2
        void** var_14_3 = ebp_1
        sub_6b4d5b()
        ebp_1 = esi_2
    while (*(esi_2 + 0x15) == 0)

void* eax_4 = *(edi + 4)
*(eax_4 + 4) = eax_4
int32_t* eax_5 = *(edi + 4)
*eax_5 = eax_5
void* result = *(edi + 4)
*(result + 8) = result
*(edi + 8) = 0
return result
