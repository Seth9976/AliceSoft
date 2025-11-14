// 函数: sub_5015b0
// 地址: 0x5015b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg1[1]
void** i = *edi

while (i != edi)
    void* edx_1 = i[4]
    
    if (*(edx_1 + 0x44) != 0)
    label_501631:
        arg1.b = 1
        return arg1
    
    for (arg1 = *(edx_1 + 0x4c); arg1 != *(edx_1 + 0x50); arg1 = &arg1[1])
        void* edx_2 = *arg1
        
        if (edx_2 != 0 && *(edx_2 + 0x44) != 0)
            goto label_501631
    
    if (*(i + 0x15) == 0)
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
