// 函数: sub_50dec0
// 地址: 0x50dec0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 0xc)
int32_t* i = *eax

if (i != eax)
    do
        int32_t* ecx_1 = i[4]
        
        if (ecx_1 != 0)
            (*(*ecx_1 + 4))()
        
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

void** ebx = *(*(arg1 + 0xc) + 4)
void** esi = ebx

if (*(ebx + 0x15) == 0)
    do
        sub_402c20(esi[2])
        esi = *esi
        void** var_10_2 = ebx
        sub_6b4d5b()
        ebx = esi
    while (*(esi + 0x15) == 0)

void* eax_3 = *(arg1 + 0xc)
*(eax_3 + 4) = eax_3
int32_t* eax_4 = *(arg1 + 0xc)
*eax_4 = eax_4
void* result = *(arg1 + 0xc)
*(result + 8) = result
*(arg1 + 0x10) = 0
return result
