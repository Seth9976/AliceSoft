// 函数: sub_42db50
// 地址: 0x42db50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 8) = 0
*(arg1 + 0x48) = 0
*(arg1 + 0x44) = 0
sub_401270(arg1 + 0x28, nullptr, 0x72da65)
sub_401270(arg1 + 0xc, nullptr, 0x72da66)
int32_t* eax = *(arg1 + 0x50)
int32_t* i = *eax

if (i != eax)
    do
        (*(*i[4] + 4))()
        
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
    while (i != *(arg1 + 0x50))

void** ebp_1 = *(*(arg1 + 0x50) + 4)
void** esi_2 = ebp_1

if (*(ebp_1 + 0x15) == 0)
    do
        sub_402c20(esi_2[2])
        esi_2 = *esi_2
        void** var_14_2 = ebp_1
        sub_6b4d5b()
        ebp_1 = esi_2
    while (*(esi_2 + 0x15) == 0)

void* eax_3 = *(arg1 + 0x50)
*(eax_3 + 4) = eax_3
int32_t* eax_4 = *(arg1 + 0x50)
*eax_4 = eax_4
void* result = *(arg1 + 0x50)
*(result + 8) = result
*(arg1 + 0x54) = 0
return result
