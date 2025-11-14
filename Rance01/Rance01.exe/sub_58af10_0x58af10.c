// 函数: sub_58af10
// 地址: 0x58af10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x1c) == 0)
    return 

int32_t* eax_1 = *(arg1 + 0x18)
int32_t* i_4 = *eax_1

if (i_4 != eax_1)
    int32_t* i = i_4
    
    do
        (**i[3])()
        
        if ((*(*i[3] + 4))() == 1)
            int32_t eax_5 = *(arg1 + 8)
            int32_t* esi_1 = *(arg1 + 4)
            
            if (esi_1 != eax_5)
                while (*esi_1 != i[3])
                    esi_1 = &esi_1[1]
                    
                    if (esi_1 == eax_5)
                        break
                
                if (esi_1 != eax_5)
                    (*(**esi_1 + 4))()
                    sub_6b49d0(esi_1, &esi_1[1], ((*(arg1 + 8) - &esi_1[1]) s>> 2) * 4)
                    *(arg1 + 8) -= 4
        
        if (*(i + 0x11) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0x11) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0x11) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0x11) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0x11) == 0)
                    i = i_2
                    i_2 = *i
    while (i != *(arg1 + 0x18))

void** ebx_1 = *(*(arg1 + 0x18) + 4)
void** esi_2 = ebx_1

if (*(ebx_1 + 0x11) == 0)
    do
        sub_4fdc60(esi_2[2])
        esi_2 = *esi_2
        void** var_10_3 = ebx_1
        sub_6b4d5b()
        ebx_1 = esi_2
    while (*(esi_2 + 0x11) == 0)

void* eax_9 = *(arg1 + 0x18)
*(eax_9 + 4) = eax_9
int32_t* eax_10 = *(arg1 + 0x18)
*eax_10 = eax_10
void* eax = *(arg1 + 0x18)
*(eax + 8) = eax
*(arg1 + 0x1c) = 0
