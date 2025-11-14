// 函数: sub_574270
// 地址: 0x574270
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 4)
int32_t* i = *eax

if (i != eax)
    do
        int32_t* edi_1 = i[0x10]
        
        if (edi_1 != 0)
            int32_t* ecx_1 = *edi_1
            
            if (ecx_1 != 0)
                (*(*ecx_1 + 4))()
                *edi_1 = 0
            
            int32_t* var_10_1 = edi_1
            sub_6b4d5b()
        
        if (*(i + 0x45) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0x45) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0x45) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0x45) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0x45) == 0)
                    i = i_2
                    i_2 = *i
    while (i != *(arg1 + 4))

sub_574de0(*(*(arg1 + 4) + 4))
void* eax_3 = *(arg1 + 4)
*(eax_3 + 4) = eax_3
int32_t* eax_4 = *(arg1 + 4)
*eax_4 = eax_4
void* result = *(arg1 + 4)
*(result + 8) = result
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
return result
