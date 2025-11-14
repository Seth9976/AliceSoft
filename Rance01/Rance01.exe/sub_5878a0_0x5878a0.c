// 函数: sub_5878a0
// 地址: 0x5878a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_587950(arg1)
int32_t* eax_1 = arg1[0x15]
int32_t* i = *eax_1

if (i != eax_1)
    do
        int32_t* eax_2 = i[7]
        (*(*eax_2 + 8))(eax_2)
        
        if (*(i + 0x21) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0x21) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0x21) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0x21) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0x21) == 0)
                    i = i_2
                    i_2 = *i
    while (i != arg1[0x15])

sub_58b910(*(arg1[0x15] + 4))
void* eax_4 = arg1[0x15]
*(eax_4 + 4) = eax_4
int32_t* eax_5 = arg1[0x15]
*eax_5 = eax_5
void* eax_6 = arg1[0x15]
*(eax_6 + 8) = eax_6
arg1[0x16] = 0
int32_t* result = *arg1

if (result != 0)
    result = (*(*result + 8))(result)
    *arg1 = 0

return result
