// 函数: sub_572460
// 地址: 0x572460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == arg2)
    return 

int32_t* edi_1 = arg1

do
    void* i = *edi_1
    
    if (i != 0)
        for (int32_t ebp_1 = edi_1[1]; i != ebp_1; i += 0x14)
            int32_t eax = *(i + 4)
            
            if (eax != 0)
                int32_t var_14_1 = eax
                sub_6b4d5b()
            
            *(i + 4) = 0
            *(i + 8) = 0
            *(i + 0xc) = 0
        
        int32_t var_14_2 = *edi_1
        int32_t ecx
        arg1, ecx = sub_6b4d5b()
    
    *edi_1 = 0
    edi_1[1] = 0
    edi_1[2] = 0
    edi_1 = &edi_1[4]
while (edi_1 != arg2)
