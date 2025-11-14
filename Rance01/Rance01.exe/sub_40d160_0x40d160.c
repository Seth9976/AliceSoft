// 函数: sub_40d160
// 地址: 0x40d160
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_40cd10(arg1)
int32_t* eax_1 = arg2[3]
int32_t* i = *eax_1

if (i != eax_1)
    do
        void* edi_1 = i[4]
        
        if (edi_1 != 0)
            int32_t* eax_2 = operator new(0xdc)
            
            if (eax_2 == 0)
                eax_2.b = 0
                return eax_2
            
            sub_40c540(*(edi_1 + 4), eax_2, *arg1, arg1[1])
            
            if (eax_2 == 0)
                eax_2.b = 0
                return eax_2
            
            if (sub_40c9e0(eax_2, edi_1).b == 0)
                *eax_2 -= 1
                
                if (*eax_2 s<= 0)
                    sub_40c6b0(eax_2)
                
                eax_2.b = 0
                return eax_2
            
            *sub_5cc1d0(&arg1[2], &i[3]) = eax_2
        
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
    while (i != arg2[3])

eax_1.b = 1
return eax_1
