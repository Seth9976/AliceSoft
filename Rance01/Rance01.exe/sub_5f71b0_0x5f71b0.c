// 函数: sub_5f71b0
// 地址: 0x5f71b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 0x18)
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
    while (i != *(arg1 + 0x18))

void** ebx = *(*(arg1 + 0x18) + 4)

if (*(ebx + 0x15) == 0)
    void** edi_1 = ebx
    
    do
        sub_402c20(edi_1[2])
        edi_1 = *edi_1
        void** var_14_2 = ebx
        sub_6b4d5b()
        ebx = edi_1
    while (*(edi_1 + 0x15) == 0)

void* eax_3 = *(arg1 + 0x18)
*(eax_3 + 4) = eax_3
int32_t* eax_4 = *(arg1 + 0x18)
*eax_4 = eax_4
void* eax_5 = *(arg1 + 0x18)
*(eax_5 + 8) = eax_5
*(arg1 + 0x1c) = 0
int128_t* result = *(arg1 + 8)
int128_t* esi = *(arg1 + 4)

if (esi != result)
    int32_t edi_2 = 0 s>> 2 << 2
    result = sub_6b49d0(esi, result, edi_2)
    *(arg1 + 8) = edi_2 + esi

return result
