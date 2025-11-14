// 函数: sub_5910d0
// 地址: 0x5910d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 8)
int32_t* i = *eax

if (i != eax)
    do
        (*(*i[3] + 4))()
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
    while (i != *(arg1 + 8))

void** ebx = *(*(arg1 + 8) + 4)
void** esi = ebx

if (*(ebx + 0x15) == 0)
    void** ebx_1 = ebx
    
    do
        sub_402c20(esi[2])
        esi = *esi
        void** var_10_2 = ebx_1
        sub_6b4d5b()
        ebx_1 = esi
    while (*(esi + 0x15) == 0)

void* eax_4 = *(arg1 + 8)
*(eax_4 + 4) = eax_4
int32_t* eax_5 = *(arg1 + 8)
*eax_5 = eax_5
void* result = *(arg1 + 8)
*(result + 8) = result
*(arg1 + 0xc) = 0
return result
