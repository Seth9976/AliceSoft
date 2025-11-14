// 函数: sub_5f75f0
// 地址: 0x5f75f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg1[6]
void** i = *esi

while (i != esi)
    arg1 = i[4]
    void* edx_1 = arg1[3]
    
    if (*(edx_1 + 0x70) s>= *(edx_1 + 0x74))
        arg1.b = arg1[0x13] s< arg1[0x14]
    
    if (*(edx_1 + 0x70) s< *(edx_1 + 0x74) || arg1.b != 0)
        arg1.b = 1
        return arg1
    
    if (*(i + 0x15) == arg1.b)
        void** i_1 = i[2]
        
        if (*(i_1 + 0x15) != 0)
            arg1 = i[1]
            
            if (*(arg1 + 0x15) == 0)
                while (i == arg1[2])
                    i = arg1
                    arg1 = arg1[1]
                    
                    if (*(arg1 + 0x15) != 0)
                        break
            
            i = arg1
        else
            i = i_1
            arg1 = *i
            
            while (*(arg1 + 0x15) == 0)
                i = arg1
                arg1 = *i

arg1.b = 0
return arg1
