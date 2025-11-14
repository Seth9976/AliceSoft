// 函数: sub_5cc070
// 地址: 0x5cc070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 4)
int32_t* i = *eax

if (i != eax)
    do
        int32_t* edi_1 = i[4]
        
        if (edi_1 != 0)
            sub_5cc380(edi_1)
            int32_t* var_10_2 = edi_1
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
    while (i != *(arg1 + 4))

void** edi_2 = *(*(arg1 + 4) + 4)
void** esi = edi_2

if (*(edi_2 + 0x15) == 0)
    do
        sub_402c20(esi[2])
        esi = *esi
        void** var_10_4 = edi_2
        sub_6b4d5b()
        edi_2 = esi
    while (*(esi + 0x15) == 0)

void* eax_2 = *(arg1 + 4)
*(eax_2 + 4) = eax_2
int32_t* eax_3 = *(arg1 + 4)
*eax_3 = eax_3
void* result = *(arg1 + 4)
*(result + 8) = result
*(arg1 + 8) = 0
return result
