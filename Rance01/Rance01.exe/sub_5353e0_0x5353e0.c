// 函数: sub_5353e0
// 地址: 0x5353e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == arg2)
    return 

int32_t* edi_1 = arg1 + 0x14

do
    void* j = *edi_1
    
    if (j != 0)
        for (int32_t ebp_1 = edi_1[1]; j != ebp_1; j += 0x18)
            int32_t eax = *(j + 8)
            
            if (eax != 0)
                int32_t var_14_1 = eax
                sub_6b4d5b()
            
            *(j + 8) = 0
            *(j + 0xc) = 0
            *(j + 0x10) = 0
        
        int32_t var_14_2 = *edi_1
        sub_6b4d5b()
    
    *edi_1 = 0
    edi_1[1] = 0
    edi_1[2] = 0
    arg1 = edi_1[-4]
    
    if (arg1 != 0)
        void* var_14_3 = arg1
        sub_6b4d5b()
    
    edi_1[-4] = 0
    edi_1[-3] = 0
    edi_1[-2] = 0
    edi_1 = &edi_1[9]
while (&edi_1[-5] != arg2)
