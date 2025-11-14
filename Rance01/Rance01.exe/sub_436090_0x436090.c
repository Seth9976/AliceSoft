// 函数: sub_436090
// 地址: 0x436090
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* ecx = *(arg1 + 0x14)
int128_t* esi = *(arg1 + 0x10)

if (esi != ecx)
    int32_t ebx_1 = 0 s>> 2 << 2
    sub_6b49d0(esi, ecx, ebx_1)
    *(arg1 + 0x14) = ebx_1 + esi

int32_t* ebx_3 = *(arg1 + 4)
int32_t* i = *ebx_3

while (i != ebx_3)
    void* ecx_1 = i[4]
    
    if (ecx_1 != 0 && *(ecx_1 + 0x54) != 0 && *(ecx_1 + 0x1c) s> 0)
        sub_61b5a0(&i[4], arg1 + 0x10)
    
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

int32_t** eax_5 = *(arg1 + 0x14)
int32_t* ecx_2 = *(arg1 + 0x10)
int32_t var_14_2 = 0
return sub_436650(ecx_2, eax_5, (eax_5 - ecx_2) s>> 2)
