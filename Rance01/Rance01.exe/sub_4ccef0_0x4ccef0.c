// 函数: sub_4ccef0
// 地址: 0x4ccef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg1[1]
void** i_1 = *ebx

while (i_1 != ebx)
    arg1 = i_1[4]
    
    if (arg1[0xb] != 0)
    label_4ccf75:
        arg1.b = 1
        return arg1
    
    int32_t* i = arg1[0xc]
    
    for (int32_t edi_1 = arg1[0xd]; i != edi_1; i = &i[1])
        void* ecx_1 = *i
        
        if (ecx_1 != 0)
            arg1, i = sub_4ccb50(ecx_1)
            
            if (arg1.b != 0)
                goto label_4ccf75
    
    if (*(i_1 + 0x15) == 0)
        void** i_2 = i_1[2]
        
        if (*(i_2 + 0x15) != 0)
            arg1 = i_1[1]
            
            if (*(arg1 + 0x15) == 0)
                while (i_1 == arg1[2])
                    i_1 = arg1
                    arg1 = arg1[1]
                    
                    if (*(arg1 + 0x15) != 0)
                        break
            
            i_1 = arg1
        else
            arg1 = *i_2
            
            while (*(arg1 + 0x15) == 0)
                i_2 = arg1
                arg1 = *i_2
            
            i_1 = i_2

arg1.b = 0
return arg1
