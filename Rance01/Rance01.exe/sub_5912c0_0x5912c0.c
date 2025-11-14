// 函数: sub_5912c0
// 地址: 0x5912c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg3
void* edi = arg1

if (*(edi + 0x20) == 0)
    return 

int32_t* eax = *(edi + 0x1c)
int32_t* i = *eax

if (i != eax)
    do
        (**i[3])()
        
        if ((*(*i[3] + 4))() == 1)
            int32_t* ecx_3 = *(edi + 8)
            int32_t* j = *ecx_3
            
            while (j != ecx_3)
                if (j[4] == i[3])
                    (*(*j[3] + 4))()
                    (*(*j[4] + 4))()
                    sub_436320(edi + 4, &var_4, j)
                    break
                
                if (*(j + 0x15) == 0)
                    int32_t* j_1 = j[2]
                    
                    if (*(j_1 + 0x15) != 0)
                        int32_t* j_3 = j[1]
                        
                        if (*(j_3 + 0x15) == 0)
                            while (j == j_3[2])
                                j = j_3
                                j_3 = j_3[1]
                                
                                if (*(j_3 + 0x15) != 0)
                                    break
                        
                        j = j_3
                    else
                        j = j_1
                        int32_t* j_2 = *j
                        
                        while (*(j_2 + 0x15) == 0)
                            j = j_2
                            j_2 = *j
        
        if (*(i + 0x11) == 0)
            int32_t* i_2 = i[2]
            
            if (*(i_2 + 0x11) != 0)
                int32_t* i_1 = i[1]
                
                if (*(i_1 + 0x11) == 0)
                    while (i == i_1[2])
                        i = i_1
                        i_1 = i_1[1]
                        
                        if (*(i_1 + 0x11) != 0)
                            break
                
                i = i_1
            else
                int32_t* i_3 = *i_2
                
                while (*(i_3 + 0x11) == 0)
                    i_2 = i_3
                    i_3 = *i_2
                
                i = i_2
    while (i != *(edi + 0x1c))

void** ebx_1 = *(*(edi + 0x1c) + 4)
void** esi_1 = ebx_1

if (*(ebx_1 + 0x11) == 0)
    do
        sub_4fdc60(esi_1[2])
        esi_1 = *esi_1
        void** var_14_3 = ebx_1
        sub_6b4d5b()
        ebx_1 = esi_1
    while (*(esi_1 + 0x11) == 0)

void* eax_7 = *(edi + 0x1c)
*(eax_7 + 4) = eax_7
int32_t* eax_8 = *(edi + 0x1c)
*eax_8 = eax_8
arg1 = *(edi + 0x1c)
*(arg1 + 8) = arg1
*(edi + 0x20) = 0
