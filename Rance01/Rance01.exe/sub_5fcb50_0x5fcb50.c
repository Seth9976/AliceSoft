// 函数: sub_5fcb50
// 地址: 0x5fcb50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4_1 = arg1

for (int32_t* i = *(arg1 + 0x6c); i != *(arg1 + 0x70); i = &i[1])
    void* edi_1 = *i
    
    for (int32_t* j = *(edi_1 + 0x50); j != *(edi_1 + 0x54); j = &j[1])
        int32_t* eax_1 = *j
        
        if (eax_1[1] != 0)
            int32_t eax_2 = *eax_1
            
            if (eax_2 != 0xffffffff)
                sub_409870(arg2, eax_2)
    
    if (*(edi_1 + 0x78) != 0)
        int32_t edi_2 = *(edi_1 + 0x74)
        
        if (edi_2 != 0xffffffff)
            sub_409870(arg2, edi_2)
